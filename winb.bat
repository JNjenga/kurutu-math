@echo off

if "%1%"=="clean" (
    rmdir build
    exit 1
)

REM Create build directory
if not exist build\ (
    mkdir build
)
cd build

cl.exe ..\src\kurutu_math.cpp ..\src\main.cpp /Zi /nologo /MT /O2

if "%1%"=="run" (
    call kurutu_math.exe
)

cd ..
