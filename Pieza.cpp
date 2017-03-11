#include "Pieza.h"
#include "PiezaAzul.h"
#include "PiezaRoja.h"
#include "PiezaAmarilla.h"
#include "PiezaVerde.h"
#include <typeinfo>

Pieza::Pieza(){
  vuelta = 0;
}

Pieza::Pieza(char color, int posx, int posy){
  this->color = color;
  this->posx = posx;
  this->posy = posy;
  this->vuelta = 0;
}

char Pieza::getColor(){
  return color;
}

int Pieza::getPosX(){
  return posx;
}

int Pieza::getPosY(){
  return posy;
}

void Pieza::setPosX(int x){

}

void Pieza::setPosY(int y){

}

void Pieza::ingresarPieza(){

}

void Pieza::comer(Pieza* pieza){

}

bool Pieza::zonaFinal(){

}

int Pieza::getVuelta(){
  return vuelta;
}

void Pieza::setVuelta(int x){
  vuelta = x;
}

Pieza::~Pieza(){

}
