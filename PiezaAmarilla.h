#pragma once
#inclide "Pieza.h"

class PiezaAmarilla : public Pieza{
public:
  PiezaAmarilla();
  PiezaAmarilla(char, int, int);

  void ingresarPieza();
  void comer(Pieza* pieza);
  bool zonaFinal();
  void mover(int, int);
  
  ~Pieza();
};
