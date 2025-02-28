## Compilacion

### Opcion 1

```shell
cl main.cpp utils.cpp
```

### Opcion 2
```shell
cl /I. *.cpp
```

I -> busca archivos
. -> en esta ruta
*.cpp -> que sean así

### Opcion 3
Con CMake

```shell
cmake_minimum_required(VERSION 3.10)  # Versión mínima recomendada de CMake
project(ch2)  # Nombre del proyecto

set(CMAKE_CXX_STANDARD 17)  # Especificar estándar de C++
set(CMAKE_CXX_STANDARD_REQUIRED True)

# 🔹 Buscar todos los archivos .cpp automáticamente
file(GLOB SOURCES "*.cpp")

# 🔹 Crear el ejecutable con todos los archivos .cpp encontrados
add_executable(ch2 ${SOURCES})

```

Si ya existe la carpeta build entonces directamente recompilamos. El compilador se encarga de detectar los archivos que han cambiado.
```shell
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
```

