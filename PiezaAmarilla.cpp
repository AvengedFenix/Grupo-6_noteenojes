#include "PiezaAmarilla.h"
#include "PiezaRoja.h"
#include "PiezaAzul.h"
#include "PiezaVerde.h"
#include <typeinfo>

PiezaAmarilla::PiezaAmarilla(){

}

PiezaAmarilla::PiezaAmarilla(char color, int posx, int posy) : Pieza(color, posx, posy){

}

void PiezaAmarilla::ingresarPieza(){
  //posx = posicion x de inicio de pieza amarilla;
  //posy = posicion y de inicio de pieza amarilla;
}

void PiezaAmarilla::comer(Pieza* pieza){
  /*if(typeid(pieza).name() == typeid(PiezaRoja).name()){

  }else if(typeid(pieza).name() == typeid(PiezaAzul).name()){

  }else if(typeid(pieza).name() == typeid(PiezaVerde).name()){

  }*/
}

bool PiezaAmarilla::zonaFinal(){
  if(vuelta > 62){
    return true;
  }else{
    return false;
  }
}


void PiezaAmarilla::mover(int x, int y){
  posx = x;
  posy = y;
}

PiezaAmarilla::~PiezaAmarilla(){

}
