#include "PiezaRoja.h"
#include "PiezaRoja.h"
#include "PiezaRoja.h"
#include "PiezaVerde.h"
#include "PiezaAmarilla.h"

PiezaRoja::PiezaRoja(){

}

PiezaRoja::PiezaRoja(char color, int posx, int posy) : Pieza(color, posx, posy){

}

void PiezaRoja::resetPos(){
  //posx = posicion x de inicio de pieza azul;
  //posy = posicion y de inicio de pieza azul;
}

void PiezaRoja::comer(Pieza* pieza){
  if(typeid(pieza).name() == typeid(PiezaAzul).name()){

  }else if(typeid(pieza).name() == typeid(PiezaAmarilla).name()){

  }else if(typeid(pieza).name() == typeid(PiezaVerde).name()){

  }
}

bool PiezaRoja::zonaFinal(){
  if(vuelta = 1 && posx == 7){
    return true;
  }else{
    return false;
  }
}
