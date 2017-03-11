#pragma once
#include "Pieza.h"

class PiezaVerde : public Pieza{
public:
  PiezaVerde();
  PiezaVerde(char, int, int);

  void ingresarPieza();
  void comer(Pieza* pieza);
  bool zonaFinal();
  void mover(int, int);

  ~PiezaVerde();
};
