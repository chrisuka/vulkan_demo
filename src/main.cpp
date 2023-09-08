#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

#define GLM_FORCE_RADIANS
#define GLM_FORCE_DEPTH_ZERO_TO_ONE
#include <glm/vec4.hpp>
#include <glm/mat4x4.hpp>

#include <iostream>

class vkApp {
	public:
		void run_tests() {
			uint32_t extensionCount = 0;
			vkEnumerateInstanceExtensionProperties(nullptr, &extensionCount, nullptr);

			std::cout << extensionCount << " extensions supported\n";
		}

		void run() {
			run_tests ();

			initWindow ();
			initVulkan ();
			mainLoop ();
			cleanup ();
		}
	private:
		GLFWwindow* window;

		void initWindow () {
			const uint32_t WIDTH = 800;
			const uint32_t HEIGHT = 600;
			glfwInit();

			glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
			glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);
			window = glfwCreateWindow(WIDTH, HEIGHT, "Vulkan", nullptr, nullptr);
		}

		void initVulkan () {}
		void mainLoop () {
			while (!glfwWindowShouldClose (window))
					glfwPollEvents ();
		}
		void cleanup () {
			glfwDestroyWindow (window);
			glfwTerminate ();
		}
};

int main() {
	vkApp app;

	try { app.run(); }
	catch (const std::exception& e) {
			std::cerr << e.what() << std::endl;
			return EXIT_FAILURE;
	}

	return EXIT_SUCCESS;
}
