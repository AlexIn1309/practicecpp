#include <ncurses.h>
using namespace std;

int main(int argc, char ** argv){
	// initializes the screen 
	// sets up the memory and clears the screen
	initscr(); 
  int x, y;
  x = y = 10;
  // move the cursor to the specified location
  move(x, y);
	// Prinst a string(const char *) to a window
	printw("Hello World");
	// Refreshes the screen to match whats in memory
	refresh();
	// Whats for user input, returns int value of that key
	int c = getch();
  printw("%d", &c);
  getch();
	// dellocates memory and ends ncurses
	endwin();
		return 0;
}
