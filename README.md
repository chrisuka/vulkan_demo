# Vulkan Demo
I am learning the Vulkan framework. This is my first introductory project,
and will serve as a boilerplate codebase for further potential applications.

## Building
* `g++`, `meson` and `ninja` required for building.
* Requires `vulkan-icd-loader`, `vulkan-validation-layers`, and `vulkan-headers`.
* Uses `GLFW3` for the window system and `GLM` for math.

1. `cd` into repository root dir
2. `meson setup <builddir>`
3. `meson compile -C <builddir>`
4. The executable will be found inside *build_dir*.
