# Vulkan Demo
I am learning the [Vulkan](https://vulkan.org) framework. This is my first introductory project,
and will serve as a boilerplate codebase for further potential applications.

## Building
**Pre-requisites**
* `g++`, `meson` and `ninja` required for compiling.
* Vulkan development requires `vulkan-icd-loader`, `vulkan-validation-layers`, and `vulkan-headers`.
* This project uses `GLFW3` for the window system and `GLM` for math.

**How to build**
1. `cd` into the repository root directory
2. `meson setup <builddir>`
3. `meson compile -C <builddir>`
4. The executable will be built into *builddir*`/vkapp`.
