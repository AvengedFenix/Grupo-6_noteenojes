#pragma once
#inclide "Pieza.h"

class PiezaAzul : public Pieza{
public:
  PiezaAzul();
  PiezaAzul(char, int, int);

  virtual void comer(Pieza* pieza);

  ~Pieza();
}
