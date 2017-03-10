#pragma once
#inclide "Pieza.h"

class PiezaAmarilla : public Pieza{
public:
  PiezaAmarilla();
  PiezaAmarilla(char, int, int);

  virtual void comer(Pieza* pieza);

  ~Pieza();
}
