#pragma once

class Pieza{
protected:
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
  virtual int getVuelta();


  virtual void setPosX(int);
  virtual void setPosY(int);
  virtual void setVuelta(int);

  virtual void ingresarPieza();//mover pieza a posicion de inicio
  virtual void comer(Pieza*);//comer pieza
  virtual bool zonaFinal();//ingreso a zona final
  virtual ~Pieza();
};
