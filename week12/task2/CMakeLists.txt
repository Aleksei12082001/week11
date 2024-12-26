cmake_minimum_required(VERSION 3.14)

project(StackExample LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Устанавливаем путь к заголовочным файлам
include_directories(include)

# Находим OpenSSL
find_package(OpenSSL REQUIRED)

# Сборка библиотеки stack
add_library(stack STATIC src/password.cpp)

# Сборка основного исполнимого файла
add_executable(main src/main.cpp)

# Связываем с библиотекой stack и OpenSSL
target_link_libraries(main stack OpenSSL::SSL OpenSSL::Crypto)

# Убедитесь, что TARGET_HASH определен
set(TARGET_HASH "8c8e9f2a4a2e3b0b7e9f0f6b1a3c5b7d" CACHE STRING "Hash to search for")

# Добавляем цель для запуска с передачей аргументов
add_custom_target(run
    COMMAND main ${TARGET_HASH} 5
    DEPENDS main
    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
)

# Добавляем цель для очистки
add_custom_target(clean-all
    COMMAND ${CMAKE_COMMAND} -E remove_directory ${CMAKE_CURRENT_BINARY_DIR}
    DEPENDS main
)






