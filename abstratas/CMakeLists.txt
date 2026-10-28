cmake_minimum_required(VERSION 3.10)
project(abstratas)

set(CMAKE_CXX_STANDARD 17)

# Adicionar todos os .cpp do diretório src
file(GLOB SOURCES "*.cpp")

# Criar o executável
add_executable(abstratas ${SOURCES})
