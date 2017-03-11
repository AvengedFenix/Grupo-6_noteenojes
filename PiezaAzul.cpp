#include "PiezaAzul.h"
#include "PiezaRoja.h"
#include "PiezaVerde.h"
#include "PiezaAmarilla.h"
#include <typeinfo>

PiezaAzul::PiezaAzul(){

}

PiezaAzul::PiezaAzul(char color, int posx, int posy) : Pieza(color, posx, posy){

}

void PiezaAzul::resetPos(){

}

void PiezaAzul::ingresarPieza(){
  posx = 14;
  posy = 14;
}

void PiezaAzul::comer(Pieza* pieza){
  /*if(typeid(pieza).name() == typeid(PiezaRoja).name()){

  }else if(typeid(pieza).name() == typeid(PiezaAmarilla).name()){

  }else if(typeid(pieza).name() == typeid(PiezaVerde).name()){

  }*/
}

bool PiezaAzul::zonaFinal(){
  if(vuelta > 62 /*&& posy ==7*/){
    return true;
  }else{
    return false;
  }
}

void PiezaAzul::mover(int x, int y){
  posx = x;
  posy = y;
}

PiezaAzul::~PiezaAzul(){

}
