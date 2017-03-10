#include "PiezaVerde.h"
#include "PiezaRoja.h"
#include "PiezaVerde.h"
#include "PiezaVerde.h"
#include "PiezaAmarilla.h"

PiezaVerde::PiezaVerde(){

}

PiezaVerde::PiezaVerde(char color, int posx, int posy) : Pieza(color, posx, posy){

}

void PiezaVerde::ingresarPieza(){
  //posx = posicion x de inicio de pieza verde;
  //posy = posicion y de inicio de pieza verde;
}

void PiezaVerde::comer(Pieza* pieza){
  if(typeid(pieza).name() == typeid(PiezaRoja).name()){

  }else if(typeid(pieza).name() == typeid(PiezaAmarilla).name()){

  }else if(typeid(pieza).name() == typeid(PiezaAzul).name()){

  }
}

bool PiezaVerde::zonaFinal(){
  if(vuelta = 1 && posy ==7){
    return true;
  }else{
    return false;
  }
}

void PiezaVerde::mover(int x, int y){
  posx = x;
  posy = y;
}
