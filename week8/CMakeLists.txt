cmake_minimum_required(VERSION 3.14)

project(StackExample LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Устанавливаем путь к заголовочным файлам
include_directories(include)

# Сборка библиотеки stack
add_library(stack STATIC src/fibonacci.cpp)  # Убедитесь, что файл fibonacci.cpp существует

# Сборка основного исполнимого файла
add_executable(main src/main.cpp)
target_link_libraries(main stack)  # Связываем с библиотекой stack










