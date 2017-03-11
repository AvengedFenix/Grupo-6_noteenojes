#pragma once
#include "Pieza.h"

class PiezaAmarilla : public Pieza{
public:
  PiezaAmarilla();
  PiezaAmarilla(char, int, int);

  void ingresarPieza();
  void comer(Pieza* pieza);
  bool zonaFinal();
  void mover(int, int);

  ~PiezaAmarilla();
};
