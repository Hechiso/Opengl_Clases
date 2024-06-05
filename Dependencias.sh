#!/bin/bash

# Las dependencias que nesesita el proyecto Paint son :


#  freeglut3
#  freeglut3-dev
#  make
#  g++


# Se instalan las dependencias 


sudo apt-get install libpng-dev

if [ $? -eq 0 ]; then
    echo "Ya tienes instalado la librerias libpng-dev"
else
    echo "Ya tenias instalado la librerias libpng-dev"
fi

sudo apt install freeglut3

if [ $? -eq 0 ]; then
    echo "Ya tienes instalado la librerias freeglut3"
else
    echo "Ya tenias instalado la librerias freeglut3"
fi

sudo apt install freeglut3-dev

if [ $? -eq 0 ]; then
    echo "Ya tienes instalado la librerias freeglut3-dev"
else
    echo "Ya tenias instalado la librerias freeglut3-dev"
fi

sudo apt install make

if [ $? -eq 0 ]; then
    echo "Ya tienes instalado make"
else
    echo "Ya tenias instalado make"
fi

sudo apt-get update

if [ $? -eq 0 ]; then
    echo "Ya tienes actualizado el sistema"
else
    echo "No se a Actulizado el sistema o Hubo un error al actualizar."
fi

sudo apt install g++

if [ $? -eq 0 ]; then
    echo "Ya tienes instalado g++"
else
    echo "Ya tenias instalado g++"
fi



