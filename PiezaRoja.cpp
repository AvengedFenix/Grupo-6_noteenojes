#include "PiezaRoja.h"
#include "PiezaVerde.h"
#include "PiezaAmarilla.h"
#include "PiezaAzul.h"
#include <typeinfo>

PiezaRoja::PiezaRoja(){

}

PiezaRoja::PiezaRoja(char color, int posx, int posy) : Pieza(color, posx, posy){

}

void PiezaRoja::resetPos(){
  posx = 14;
  posy = 0;
}

void PiezaRoja::comer(Pieza* pieza){
  /*if(typeid(pieza).name() == typeid(PiezaAzul).name()){

  }else if(typeid(pieza).name() == typeid(PiezaAmarilla).name()){

  }else if(typeid(pieza).name() == typeid(PiezaVerde).name()){

  }*/
}

bool PiezaRoja::zonaFinal(){
  if(vuelta > 62 ){
    return true;
  }else{
    return false;
  }
}

void PiezaRoja::ingresarPieza(){

}

void PiezaRoja::mover(int x, int y){
  posx = x;
  posy = y;
}

PiezaRoja::~PiezaRoja(){

}
