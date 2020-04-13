#include <unistd.h>
#include <ncurses.h>


WINDOW * createNewWin(int h, int w, int y, int x)
{
    return newwin(h, w, y, x);
}


int main(int argc, char ** argv)
{
    WINDOW * win1, * win2;

    initscr();
    noecho();
    cbreak();

    win1 = createNewWin(5, 10, 0, 0);
    win2 = createNewWin(5, 10, 4, 9);

    while(1)
    {
        try
        {
            box(win1, 0, 0);
            box(win2, 0, 0);
            wrefresh(win1);             // Window refresh to display new information
            wrefresh(win2);
            refresh();                  // Refresh as a whole
            usleep(500000);
        }
        catch (...) {}
    }
    delwin(win1);
    delwin(win2);
    endwin();
    return 0;
}