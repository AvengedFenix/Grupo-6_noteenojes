#pragma once

class Pieza(){
private:
  char color;//b = blue, r = red, y = yellow, g = green
  int posx;
  int posy;
  int vuelta;
public:
  Pieza();
  Pieza(char, int, int);

  virtual char getColor();
  virtual int getPosX();
  virtual int getPosY();

  virtual void setPosX(int);
  virtual void setPosY(int);


  virtual void resetPos(Pieza*);//mover pieza a posicion de inicio
  virtual void comer(Pieza*);//comer pieza
  virtual bool zonaFinal(Pieza*);//ingreso a zona final
  ~Pieza();
};
