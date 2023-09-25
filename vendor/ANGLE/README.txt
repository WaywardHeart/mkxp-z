Here lives Google's ANGLE, which is pretty necessary right now.

On top of Apple deprecating OpenGL, MKXP has crashing issues from
the OpenGL -> Metal translation implemented in Apple Silicon macs.

It also enables things like the Steam Overlay and the use of the Metal
Performance HUD on macOS 13+. Vulkan seems to fix blitting issues on
Linux, removing the need for `enableBlitting` and `subImageFix`.

The particular build of ANGLE for MacOS is made using commit `91bfd02e7089b`, built with Metal support enabled. Both arm64 and x64 libraries were built using the `target_cpu` arg, then joined using the `lipo` tool.

The Windows DLLs for ANGLE were taken from ungoogled-chromium_108.0.5359.125-1.1 Windows 64-bit. The commit hash for this build of ungoogled chromium is `af6d5539f896f4f20d123b02f721b5e2f13add03`. The hash information for ANGLE is not available, but the date of December 15, 2022 is the closest one following the build used for MacOS. Ideally I would build it myself with the same commit to ensure parity, but that is a task for another time.

The Linux .so files for ANGLE were taken from ungoogled-chromium_108.0.5359.125-1 portable Linux 64-bit. The commit hash for the parent project is `bf5e3ad`, but I am not exactly sure what commit in the portable linux downstream project corresponds to this exact release. Do note that the naming for the .so files is actually determined by SDL. As of September 24, 2023 desktop Linux should use `libEGL.so.1`, `libGLESv2.so`, and `libvulkan.so.1`. For future reference, see `src/video/SDL_egl.c` in mkxp-z's SDL.
