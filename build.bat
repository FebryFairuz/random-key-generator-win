set APP_VERSION=1.0

@ECHO OFF
ECHO "====================="
ECHO "Build with MSBuild..."
ECHO "====================="

msbuild /property:Configuration=Release

@ECHO OFF
ECHO "====================="
ECHO "Release Binary..."
ECHO "====================="

SET OUTPUT_RKG_DIR=randomkeygen-win32-x86-%APP_VERSION%-bin
SET DEPLOY_FILE=%OUTPUT_RKG_DIR%.zip

mkdir %OUTPUT_RKG_DIR%

copy Release\RKG.exe %OUTPUT_RKG_DIR%
copy Release\NF.dll %OUTPUT_RKG_DIR%
copy MSVCX\msvcr100.dll %OUTPUT_RKG_DIR%
copy MSVCX\msvcp100.dll %OUTPUT_RKG_DIR%
copy readme.txt %OUTPUT_RKG_DIR%
copy license.txt %OUTPUT_RKG_DIR%

@ECHO OFF
ECHO "====================="
ECHO "Zip..."
ECHO "====================="

cd tools
7za.exe a ../%DEPLOY_FILE% ../%OUTPUT_RKG_DIR%
cd ../

