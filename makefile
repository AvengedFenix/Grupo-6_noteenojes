Proyecto:	Main.o Pieza.o PiezaAzul.o PiezaRoja.o PiezaAmarilla.o PiezaVerde.o
	g++ Main.o Pieza.o PiezaAzul.o PiezaRoja.o PiezaAmarilla.o PiezaVerde.o -lncurses -o Proyecto

Main.o: Main.cpp Pieza.h PiezaAmarilla.h PiezaAzul.h PiezaVerde.h PiezaRoja.h
	g++ -c Main.cpp

Pieza.o: Pieza.cpp Pieza.h PiezaRoja.h PiezaAzul.h PiezaRoja.h PiezaAmarilla.h
	g++ -c Pieza.cpp

PiezaAzul.o: PiezaAzul.cpp PiezaAzul.h Pieza.h
	g++ -c PiezaAzul.cpp

PiezaRoja.o: PiezaRoja.cpp PiezaRoja.h Pieza.h
	g++ -c PiezaRoja.cpp

PiezaAmarilla.o: PiezaAmarilla.cpp PiezaAmarilla.h Pieza.h
	g++ -c PiezaAmarilla.cpp

PiezaVerde.o: PiezaVerde.cpp PiezaVerde.h Pieza.h
	g++ -c PiezaVerde.cpp

clean:
	rm *.o Proyecto
