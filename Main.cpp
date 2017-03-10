#include <ncurses.h>

int main() {
    initscr();
    start_color();
    //init_color(Color)

    mvprintw(0,0,"0");
    mvprintw(14,0, "0");
    mvprintw(0,14, "0");
    mvprintw(14,14, "0");
    refresh();
    getch();
    endwin();

    return 0;
}
