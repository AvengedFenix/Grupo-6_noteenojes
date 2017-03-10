#pragma once
#inclide "Pieza.h"

class PiezaRoja : public Pieza{
public:
  PiezaRoja();
  PiezaRoja(char, int, int);

  virtual void comer(Pieza* pieza);

  ~Pieza();
}
