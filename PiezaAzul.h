#pragma once
#inclide "Pieza.h"

class PiezaAzul : public Pieza{
public:
  PiezaAzul();
  PiezaAzul(char, int, int);

  void resetPos();
  void comer(Pieza*);
  bool zonaFinal();
  void mover(int, int);

  ~Pieza();
};
