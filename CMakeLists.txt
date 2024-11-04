cmake_minimum_required(VERSION 3.10)

project(LibraryManager)

# Setăm standardul de C++ pe care îl vom folosi
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Adăugăm executabilul și spunem care sunt fișierele sursă
add_executable(${PROJECT_NAME} 
    src/main.cpp
    src/Book.cpp
)

# Spunem unde să caute header-ele
target_include_directories(${PROJECT_NAME} 
    PRIVATE 
    ${PROJECT_SOURCE_DIR}/include
)