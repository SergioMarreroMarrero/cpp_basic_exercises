BUILD_DIR = build
GENERATOR = "Visual Studio 17 2022"
PROJECT_NAME = ch9



.PHONY: all build clean

all: build

build:
	@if not exist $(BUILD_DIR) ( \
		echo Generando archivos de compilación con CMake... && \
		cmake -G $(GENERATOR) -B $(BUILD_DIR) \
	)
	@echo Compilando el proyecto...
	@cmake --build $(BUILD_DIR)

clean:
	@if exist $(BUILD_DIR) ( \
		echo Eliminando carpeta de compilación... && \
		rmdir /s /q $(BUILD_DIR) \
	) else ( \
		echo No hay nada que limpiar. \
	)

run:
	echo Ejecutando el programa
	$(BUILD_DIR)\Debug\$(PROJECT_NAME).exe