#pragma once
#inclide "Pieza.h"

class PiezaRoja : public Pieza{
public:
  PiezaRoja();
  PiezaRoja(char, int, int);

  void ingresarPieza();
  void comer(Pieza* pieza);
  bool zonaFinal();
  void mover(int, int);
  ~Pieza();
};
