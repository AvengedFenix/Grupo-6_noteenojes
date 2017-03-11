#include <ncurses.h>
#include <vector>
#include <time.h>
#include <stdlib.h>
#include <string>
#include "Pieza.h"
#include "PiezaRoja.h"
#include "PiezaAmarilla.h"
#include "PiezaVerde.h"
#include "PiezaAzul.h"
#include <sstream>

using namespace std;

void board();
int lanzarDados();
void validacionesJ1(vector<Pieza*>,char);

int main() {
    board();
    vector<Pieza*> p;
    vector<Pieza*> p2;
    init_pair(1, COLOR_BLUE, COLOR_WHITE);
    mvprintw(20, 5, "Jugador 1, escriba el color que desea: R/G/B/Y : ");
    char C1;
    C1 = getch();
    /*while (C1 != 'R' || C1 != 'r' || C1 != 'G' || C1 != 'g' || C1 != 'B' || C1 != 'b' || C1 != 'Y' || C1 != C1 != 'y') {
        mvprintw(20, 5, "Jugador 1, Ese color no se puede elegir: R/G/B/Y");
        C1 = getch();
    }*/
    if (C1 == 'R' || C1 == 'r') {
        for (int i = 0; i < 4; i++) {
            p.push_back(new PiezaRoja(C1, 0, 14));
        }
    }
    if (C1 == 'G' || C1 == 'g') {
        for (int i = 0; i < 4; i++) {
            p.push_back(new PiezaVerde(C1, 0, 0));
        }
    }
    if (C1 == 'B' || C1 == 'b') {
        for (int i = 0; i < 4; i++) {
            p.push_back(new PiezaAzul(C1, 14, 14));
        }
    }
    if (C1 == 'Y' || C1 == 'y') {
        for (int i = 0; i < 4; i++) {
            p.push_back(new PiezaAmarilla(C1, 14, 0));
        }
    }
    init_pair(2, COLOR_RED, COLOR_WHITE);
    refresh();
    mvprintw(20, 5, "Jugador 2, escriba el color que desea: R/G/B/Y : ");
    char C2;
    C2 = getch();
    /*while (C2 == C1) {
        mvprintw(20, 5, "Jugador 2, ese color ya lo agarro el jugador 1: ");
        C2 = getch();
    }*/
    /*while (C2 != 'R' || C2 != 'r' || C2 != 'G' || C2 != 'g' || C2 != 'B' || C2 != 'b' || C2 != 'Y' || C2 != C2 != 'y') {
        mvprintw(20, 5, "Jugador 1, Ese color no se puede elegir: R/G/B/Y");
        C2 = getch();
    }*/
    if (C2 == 'R' || C2 == 'r') {
        for (int i = 0; i < 4; i++) {
            p2.push_back(new PiezaRoja(C2, 0, 14));
        }
    }
    if (C2 == 'G' || C2 == 'g') {
        for (int i = 0; i < 4; i++) {
            p2.push_back(new PiezaVerde(C2, 0, 0));
        }
    }
    if (C2 == 'B' || C2 == 'b') {
        for (int i = 0; i < 4; i++) {
            p2.push_back(new PiezaAzul(C2, 14, 14));
        }
    }
    if (C2 == 'Y' || C2 == 'y') {
        for (int i = 0; i < 4; i++) {
            p2.push_back(new PiezaAmarilla(C2, 14, 0));
        }
    }
    validacionesJ1(p, C1);
    validacionesJ1(p2, C2);
    refresh();
    endwin();
    return 0;
}

void board(){
    initscr();
    start_color();
    init_pair(1, COLOR_GREEN,COLOR_BLACK);
    init_pair(2, COLOR_RED,COLOR_BLACK);
    init_pair(3, COLOR_BLUE,COLOR_BLACK);
    init_pair(4, COLOR_YELLOW,COLOR_BLACK);
    init_pair(5, COLOR_WHITE, COLOR_BLACK);
    attron(COLOR_PAIR(1));
    mvprintw(0,0,"0");
    int cont1=0;
    while (cont1!= 14/2) {
        mvprintw(14/2,cont1, "0");
        cont1++;
    }
    attroff(COLOR_PAIR(1));

    attron(COLOR_PAIR(4));
    mvprintw(14,0, "0");
    cont1 = 8;
    while (cont1<=14) {
        mvprintw(cont1, 7, "0");
        cont1++;
    }
    attroff(COLOR_PAIR(4));

    attron(COLOR_PAIR(2));
    mvprintw(0,14, "0");
    cont1=0;
    while (cont1<7) {
        mvprintw(cont1, 7, "0");
        cont1++;
    }
    attroff(COLOR_PAIR(2));

    attron(COLOR_PAIR(3));
    mvprintw(14,14, "0");
    cont1=8;
    while (cont1<=14) {
        mvprintw(7, cont1, "0");
        cont1++;
    }
    attroff(COLOR_PAIR(3));

    attron(COLOR_PAIR(5));
    mvprintw(0,1, "+");
    mvprintw(0,2, "+");
    mvprintw(0,3, "+");
    mvprintw(0,4, "+");
    mvprintw(0,5, "+");
    mvprintw(0,6, "+");
    mvprintw(0,8, "+");
    mvprintw(0,9, "+");
    mvprintw(0,10, "+");
    mvprintw(0,11, "+");
    mvprintw(0,12, "+");
    mvprintw(0,13, "+");

    mvprintw(14,1, "+");
    mvprintw(14,2, "+");
    mvprintw(14,3, "+");
    mvprintw(14,4, "+");
    mvprintw(14,5, "+");
    mvprintw(14,6, "+");
    mvprintw(14,8, "+");
    mvprintw(14,9, "+");
    mvprintw(14,10, "+");
    mvprintw(14,11, "+");
    mvprintw(14,12, "+");
    mvprintw(14,13, "+");

    mvprintw(1,0, "+");
    mvprintw(2,0, "+");
    mvprintw(3,0, "+");
    mvprintw(4,0, "+");
    mvprintw(5,0, "+");
    mvprintw(6,0, "+");
    mvprintw(8,0, "+");
    mvprintw(9,0, "+");
    mvprintw(10,0, "+");
    mvprintw(11,0, "+");
    mvprintw(12,0, "+");
    mvprintw(13,0, "+");

    mvprintw(1,14, "+");
    mvprintw(2,14, "+");
    mvprintw(3,14, "+");
    mvprintw(4,14, "+");
    mvprintw(5,14, "+");
    mvprintw(6,14, "+");
    mvprintw(8,14, "+");
    mvprintw(9,14, "+");
    mvprintw(10,14, "+");
    mvprintw(11,14, "+");
    mvprintw(12,14, "+");
    mvprintw(13,14, "+");

    refresh();
    getch();
    endwin();
}

int lanzarDados(){
    srand(time(0));
    int r1 = rand() % 7;
    return r1;
}

void validacionesJ1(vector<Pieza*> P1, char C1) {
    int r1 = lanzarDados();
    int r2 = lanzarDados();

    init_pair(1, COLOR_BLUE, COLOR_WHITE);
    init_pair(2, COLOR_GREEN,COLOR_BLACK);
    init_pair(3, COLOR_RED,COLOR_BLACK);
    init_pair(4, COLOR_BLUE,COLOR_BLACK);
    init_pair(5, COLOR_YELLOW,COLOR_BLACK);
    init_pair(6, COLOR_WHITE, COLOR_BLACK);

    attron(COLOR_PAIR(1));

    mvprintw(20,5, "Los Dados del jugador uno fueron: %d y %d",r1,r2);
    stringstream ss;
    for (int i = 0; i < P1.size(); i++) {
        ss << i<<". Posicion x: "<<P1[i]->getPosX()<< " Posicion y: " << P1[i]->getPosY();
    }
    int suma = r1 + r2;
    mvprintw(25, 5, "%f",ss.str());
    attroff(COLOR_PAIR(1));

    int pSelect = getch();
    while (P1[pSelect]->getPosY() == 7 && P1[pSelect]->getPosX() == 7) {
        mvprintw(25, 5, "No puede elegir esa posicion porque ya llego a su destino, vuelva a ingresar otra Pieza");
        pSelect = getch();
    }
    if (C1 == 'R' || C1 == 'r') {
        while(suma > 0){
            if(P1[pSelect]->getVuelta() >= 0 && P1[pSelect]->getVuelta()<14 && P1[pSelect]->zonaFinal() == false){
                P1[pSelect]->setPosY(P1[pSelect]->getPosY() - 1);
                P1[pSelect]->setPosX(0);
            }
            if (P1[pSelect]->getVuelta() >= 14 && P1[pSelect]->getVuelta()<28 && P1[pSelect]->zonaFinal() == false) {
                P1[pSelect]->setPosX(P1[pSelect]->getPosX() + 1);
                P1[pSelect]->setPosY(0);

            }
            if (P1[pSelect]->getVuelta() >= 28 && P1[pSelect]->getVuelta()<42 && P1[pSelect]->zonaFinal() == false) {
                P1[pSelect]->setPosY(P1[pSelect]->getPosY() + 1);
                P1[pSelect]->setPosX(14);
            }
            if (P1[pSelect]->getVuelta() >= 42 && P1[pSelect]->getVuelta()<56 && P1[pSelect]->zonaFinal() == false) {
                P1[pSelect]->setPosX(P1[pSelect]->getPosX() - 1);
                P1[pSelect]->setPosY(14);
            }
            if(P1[pSelect]->getVuelta() >= 56 && P1[pSelect]->getVuelta()<63 && P1[pSelect]->zonaFinal() == false){
                P1[pSelect]->setPosY(P1[pSelect]->getPosY() - 1);
                P1[pSelect]->setPosX(0);
            }
            if (P1[pSelect]->getVuelta() == 63) {
                P1[pSelect]->setPosX(P1[pSelect]->getPosX() + 1);
            }
            P1[pSelect]->setVuelta(P1[pSelect]->getVuelta()+1);
            suma--;

        }
        attron(COLOR_PAIR(3));
        mvprintw(P1[pSelect]->getPosX(), P1[pSelect]->getPosY(), "%c",C1);
        attroff(COLOR_PAIR(3));
    }else if (C1 == 'G' || C1 == 'g') {
        while(suma > 0){
            if(P1[pSelect]->getVuelta() >= 0 && P1[pSelect]->getVuelta()<14 && P1[pSelect]->zonaFinal() == false){
                P1[pSelect]->setPosX(P1[pSelect]->getPosX() + 1);
                P1[pSelect]->setPosY(0);
            }
            if (P1[pSelect]->getVuelta() >= 14 && P1[pSelect]->getVuelta()<28 && P1[pSelect]->zonaFinal() == false) {
                P1[pSelect]->setPosY(P1[pSelect]->getPosY() + 1);
                P1[pSelect]->setPosX(14);

            }
            if (P1[pSelect]->getVuelta() >= 28 && P1[pSelect]->getVuelta()<42 && P1[pSelect]->zonaFinal() == false) {
                P1[pSelect]->setPosX(P1[pSelect]->getPosX() - 1);
                P1[pSelect]->setPosY(14);
            }
            if (P1[pSelect]->getVuelta() >= 42 && P1[pSelect]->getVuelta()<56 && P1[pSelect]->zonaFinal() == false) {
                P1[pSelect]->setPosY(P1[pSelect]->getPosY() - 1);
                P1[pSelect]->setPosX(0);
            }
            if(P1[pSelect]->getVuelta() >= 56 && P1[pSelect]->getVuelta()<63 && P1[pSelect]->zonaFinal() == false){
                P1[pSelect]->setPosX(P1[pSelect]->getPosX() + 1);
                P1[pSelect]->setPosY(0);
            }
            if (P1[pSelect]->getVuelta() == 63) {
                P1[pSelect]->setPosY(P1[pSelect]->getPosY() + 1);
            }
            P1[pSelect]->setVuelta(P1[pSelect]->getVuelta()+1);
            suma--;

        }
        attron(COLOR_PAIR(2));
        mvprintw(P1[pSelect]->getPosX(), P1[pSelect]->getPosY(), "%c",C1);
        attroff(COLOR_PAIR(2));
    }else if (C1 == 'B' || C1 == 'b') {
        while(suma > 0){
            if(P1[pSelect]->getVuelta() >= 0 && P1[pSelect]->getVuelta()<14 && P1[pSelect]->zonaFinal() == false){
                P1[pSelect]->setPosX(P1[pSelect]->getPosX() - 1);
                P1[pSelect]->setPosY(14);
            }
            if (P1[pSelect]->getVuelta() >= 14 && P1[pSelect]->getVuelta()<28 && P1[pSelect]->zonaFinal() == false) {
                P1[pSelect]->setPosY(P1[pSelect]->getPosY() - 1);
                P1[pSelect]->setPosX(0);

            }
            if (P1[pSelect]->getVuelta() >= 28 && P1[pSelect]->getVuelta()<42 && P1[pSelect]->zonaFinal() == false) {
                P1[pSelect]->setPosX(P1[pSelect]->getPosX() + 1);
                P1[pSelect]->setPosY(0);
            }
            if (P1[pSelect]->getVuelta() >= 42 && P1[pSelect]->getVuelta()<56 && P1[pSelect]->zonaFinal() == false) {
                P1[pSelect]->setPosY(P1[pSelect]->getPosY() + 1);
                P1[pSelect]->setPosX(14);
            }
            if(P1[pSelect]->getVuelta() >= 56 && P1[pSelect]->getVuelta()<63 && P1[pSelect]->zonaFinal() == false){
                P1[pSelect]->setPosX(P1[pSelect]->getPosX() - 1);
                P1[pSelect]->setPosY(14);
            }
            if (P1[pSelect]->getVuelta() == 63) {
                P1[pSelect]->setPosY(P1[pSelect]->getPosY() + 1);
            }
            P1[pSelect]->setVuelta(P1[pSelect]->getVuelta()+1);

            suma--;

        }
        attron(COLOR_PAIR(4));
        mvprintw(P1[pSelect]->getPosX(), P1[pSelect]->getPosY(), "%c",C1);
        attroff(COLOR_PAIR(4));
    }else if (C1 == 'Y' || C1 == 'y') {
        while(suma > 0){
            if(P1[pSelect]->getVuelta() >= 0 && P1[pSelect]->getVuelta()<14 && P1[pSelect]->zonaFinal() == false){
                P1[pSelect]->setPosY(P1[pSelect]->getPosY() + 1);
                P1[pSelect]->setPosX(14);
            }
            if (P1[pSelect]->getVuelta() >= 14 && P1[pSelect]->getVuelta()<28 && P1[pSelect]->zonaFinal() == false) {
                P1[pSelect]->setPosX(P1[pSelect]->getPosX() - 1);
                P1[pSelect]->setPosY(14);

            }
            if (P1[pSelect]->getVuelta() >= 28 && P1[pSelect]->getVuelta()<42 && P1[pSelect]->zonaFinal() == false) {
                P1[pSelect]->setPosY(P1[pSelect]->getPosY() - 1);
                P1[pSelect]->setPosX(0);
            }
            if (P1[pSelect]->getVuelta() >= 42 && P1[pSelect]->getVuelta()<56 && P1[pSelect]->zonaFinal() == false) {
                P1[pSelect]->setPosX(P1[pSelect]->getPosX() + 1);
                P1[pSelect]->setPosY(0);
            }
            if(P1[pSelect]->getVuelta() >= 56 && P1[pSelect]->getVuelta()<63 && P1[pSelect]->zonaFinal() == false){
                P1[pSelect]->setPosY(P1[pSelect]->getPosY() + 1);
                P1[pSelect]->setPosX(14);
            }
            if (P1[pSelect]->getVuelta() == 63) {
                P1[pSelect]->setPosX(P1[pSelect]->getPosX() - 1);
            }
            P1[pSelect]->setVuelta(P1[pSelect]->getVuelta()+1);
            suma--;

        }
        attron(COLOR_PAIR(5));
        mvprintw(P1[pSelect]->getPosX(), P1[pSelect]->getPosY(), "%c",C1);
        attroff(COLOR_PAIR(5));
}
}
