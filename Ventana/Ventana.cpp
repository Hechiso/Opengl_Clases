#include "Ventana.h"
#include <iostream>

#include <GL/glut.h>

using namespace std;

int screen_width;
int screen_height;

int Interfaz=0;
//constructor de la clase Ventana

Ventana::Ventana() {

    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA | GLUT_DEPTH);//tipo de buffer,paleta de colores 
    screen_width = glutGet(GLUT_SCREEN_WIDTH); //ancho de la pantalla
    screen_height = glutGet(GLUT_SCREEN_HEIGHT); //alto de la pantalla
    glutInitWindowSize(screen_width, screen_height); //Inicializa el tamaño de la Ventana
    glutCreateWindow("Mi ventana"); // se crea la ventana
    glutPositionWindow(0, 0); // la posicion en la que se dibujara la ventana
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();    
    glOrtho(0, screen_width, 0, screen_height, -1, 1); // datos de la camara 1.- x 2.- ancho 3.- y 4.-alto 5.- ? 6.- ?
    glutDisplayFunc(Ventana::display);//funcion para dibujar     

}


void Pantalla(int Inter){

    switch(Inter){
        case 0:{
            
            break;
        }
        case 1:{
           break;
        }
        case 2:{
            
            break;
        }
        case 3:{
            
            break;
        }

    }//switch
}//fin

void Ventana::display() {

    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glClear(GL_COLOR_BUFFER_BIT);
    Pantalla(Interfaz);

    glutSwapBuffers();
    
}
