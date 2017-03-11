#include "PiezaVerde.h"
#include "PiezaRoja.h"
#include "PiezaAzul.h"
#include "PiezaAmarilla.h"
#include <typeinfo>

PiezaVerde::PiezaVerde(){

}

PiezaVerde::PiezaVerde(char color, int posx, int posy) : Pieza(color, posx, posy){

}

void PiezaVerde::ingresarPieza(){
  posx = 0;
  posy = 0;
}

void PiezaVerde::comer(Pieza* pieza){
  /*if(typeid(pieza).name() == typeid(PiezaRoja).name()){

  }else if(typeid(pieza).name() == typeid(PiezaAmarilla).name()){

  }else if(typeid(pieza).name() == typeid(PiezaAzul).name()){

  }*/
}

bool PiezaVerde::zonaFinal(){
  if(vuelta > 62 && posy ==7){
    return true;
  }else{
    return false;
  }
}

void PiezaVerde::mover(int x, int y){
  posx = x;
  posy = y;
}



PiezaVerde::~PiezaVerde(){

}
