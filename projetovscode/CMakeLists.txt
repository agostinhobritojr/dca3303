cmake_minimum_required(VERSION 3.10)
project(MeuProjeto)

set(CMAKE_CXX_STANDARD 17)

# Incluir diretórios de cabeçalhos
include_directories(include)

# Adicionar todos os .cpp do diretório src
file(GLOB SOURCES "src/*.cpp")

# Criar o executável
add_executable(meu_programa ${SOURCES})
