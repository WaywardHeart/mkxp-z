STEAM="$PWD/steam/sdk"
APPID="1504930"
cd build
meson configure -Dsteamworks_path="$STEAM" -Dsteam_appid="$APPID" -Dhide_console=true
ninja
cp ${MKXPZ_PREFIX}/bin/x64-msvcrt-ruby310.dll $PWD
cp /mingw64/bin/zlib1.dll $PWD
start .