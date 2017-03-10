#pragma once
#inclide "Pieza.h"

class PiezaVerde : public Pieza{
public:
  PiezaVerde();
  PiezaVerde(char, int, int);

  virtual void comer(Pieza* pieza);

  ~Pieza();
}
