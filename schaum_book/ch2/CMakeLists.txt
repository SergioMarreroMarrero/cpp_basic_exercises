cmake_minimum_required(VERSION 3.10)  # Versión mínima recomendada de CMake
project(ch2)  # Nombre del proyecto

set(CMAKE_CXX_STANDARD 17)  # Especificar estándar de C++
set(CMAKE_CXX_STANDARD_REQUIRED True)

# 🔹 Buscar todos los archivos .cpp automáticamente
file(GLOB SOURCES "*.cpp")

# 🔹 Crear el ejecutable con todos los archivos .cpp encontrados
add_executable(${PROJECT_NAME} ${SOURCES})
