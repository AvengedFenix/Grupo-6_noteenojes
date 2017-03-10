#include "PiezaVerde.h"
#include "PiezaRoja.h"
#include "PiezaVerde.h"
#include "PiezaVerde.h"
#include "PiezaAmarilla.h"

PiezaVerde::PiezaVerde(){

}

PiezaVerde::PiezaVerde(char color, int posx, int posy) : Pieza(color, posx, posy){

}

void PiezaVerde::resetPos(){
  //posx = posicion x de inicio de pieza azul;
  //posy = posicion y de inicio de pieza azul;
}

void PiezaVerde::comer(Pieza* pieza){
  if(typeid(pieza).name() == typeid(PiezaRoja).name()){

  }else if(typeid(pieza).name() == typeid(PiezaAmarilla).name()){

  }else if(typeid(pieza).name() == typeid(PiezaAzul).name()){

  }
}
