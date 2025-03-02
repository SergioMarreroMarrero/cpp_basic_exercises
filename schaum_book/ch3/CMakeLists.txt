cmake_minimum_required(VERSION 3.10)  # Versión mínima recomendada de CMake
project(ch3)  # Nombre del proyecto

set(CMAKE_CXX_STANDARD 17)  # Usar C++17
set(CMAKE_CXX_STANDARD_REQUIRED True)

# 🔹 Buscar todos los archivos .cpp automáticamente en el directorio actual
file(GLOB SOURCES "*.cpp")

# 🔹 Crear el ejecutable con los archivos .cpp encontrados
add_executable(${PROJECT_NAME} ${SOURCES})
