```bash
g++ grep2.cpp -o grep2.out && ./grep2.out campo  data/don-quijote.txt -n data/don-quijote2.txt
```

Para usar Cmake creamos un archivo llamado: `CMakeLists.txt` y añadimos:

```CMakeLists
cmake_minimum_required(VERSION 3.16)
project(migrep)
set(CMAKE_CXX_STANDARD 17)
add_executable(migrep grep.cpp)
```