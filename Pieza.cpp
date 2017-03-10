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

void Pieza::resetPos(Pieza* pieza){
  if(typeid(pieza).name() == typeid(PiezaAzul).name()){

  }else if(typeid(pieza).name() == typeid(PiezaRoja).name()){

  }else if(typeid(pieza).name() == typeid(PiezaAmarilla).name()){

  }else if(typeid(pieza).name() == typeid(PiezaVerde).name()){

  }
}

void Pieza::comer(Pieza* pieza){
  if(typeid(pieza).name() == typeid(PiezaRoja).name()){
    //mover pieza a posicion de inicio
  }
}
