#include <ncurses.h>
using namespace std;

int main(int argc, char ** argv){
  // initializes the screen
  // sets up the memory and clear the screen
  initscr();

  cbreak();             // Desactiva el buffering de línea (recibe teclas al instante)
  int height, width, start_y, start_x;

  height = 10;
  width = 20;

  start_x = start_y = 10;

  WINDOW * win = newwin(height, width, start_y, start_x);

  refresh();

  box(win, 0, 0);

  mvwprintw(win, 1, 1, "this is conten");

  wrefresh(win);

  // whats user inputs, returns its value of the key
  int c = getch();

  endwin();
}
