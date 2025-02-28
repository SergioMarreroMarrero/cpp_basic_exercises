@echo off
if exist build (
    echo Carpeta "build" encontrada. Solo compilando...
    cmake --build build

 ) else (


    echo Generando archivos de compilación con CMake...
    cmake -G "Visual Studio 17 2022" -B build
    echo Compilando el proyecto...
    cmake --build build
 )
echo Compilación finalizada.


