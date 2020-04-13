#include <unistd.h>
#include <ncurses.h>

using namespace std;


int main(int argc, char ** argv)
{
    initscr();
    noecho();
    addch('H' | A_UNDERLINE);
    addch('E' | A_UNDERLINE);
    addch('L' | A_BOLD | A_UNDERLINE);
    addch('L' | A_BOLD);
    addch('O' | A_BOLD);
    getch();
    endwin();

    return 0;
}