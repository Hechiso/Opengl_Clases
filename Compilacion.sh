!/bin/bash

nombreProyecto=air
rutaRecursos="Ventana/Ventana.cpp"

# Compilación
g++ main.cpp "$rutaRecursos" -o "$nombreProyecto" -lGL -lGLU -lglut

./"$nombreProyecto"
