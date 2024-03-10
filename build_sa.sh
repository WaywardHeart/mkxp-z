cd build
meson configure -Dsteamworks_path="" -Dsteam_appid="" -Dhide_console=true
ninja
cp ${MKXPZ_PREFIX}/bin/x64-msvcrt-ruby310.dll $PWD
cp /mingw64/bin/zlib1.dll $PWD
mv mkxp-z.exe Game.exe
start .