#include <unistd.h>
#include <ncurses.h>

using namespace std;


WINDOW * createNewWin(int height, int width, int starty, int startx)
{
    return newwin(height, width, starty, startx);
}

int main(int argc, char ** argv)
{
    // Start curses mode
    initscr();
    // Not printing input values
    noecho();
    // Terminating on classic ctrl+c
    cbreak();

    // Create two window pointer
    WINDOW * win1, * win2;

    // Get maxy and maxx of the terminal
    int maxy, maxx;
    getmaxyx(stdscr, maxy, maxx);
    
    win1 = createNewWin(10, maxx, 0, 0);
    win2 = createNewWin(10, maxx, 11, 0);

    while(1)
    {
        try
        {
            box(win1, '|', '-');
            box(win2, 0, 0);
            mvwprintw(win1, 1, 8,"HELLO");
            mvwprintw(win2, 1, 2, "     ");
            wrefresh(win2);
            wrefresh(win1);
            // refresh();
            usleep(300000);
            mvwprintw(win1, 1, 8,"     ");
            mvwprintw(win2, 1, 2, "HELLO");
            wrefresh(win1);
            wrefresh(win2);
            // refresh();
            usleep(300000);
        }
        catch(...){}
    }
    delwin(win1);
    delwin(win2);
    endwin();
}