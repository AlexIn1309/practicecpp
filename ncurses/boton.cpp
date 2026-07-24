#include <ncurses.h>
#include <string.h>

void dibujar_boton(int y, int x, const char* etiqueta, int color_pair) {
    attron(COLOR_PAIR(color_pair));
    mvprintw(y, x, "  %s  ", etiqueta);
    attroff(COLOR_PAIR(color_pair));
}

int main() {
    initscr();
    cbreak();
    noecho();
    keypad(stdscr, TRUE); // Necesario para capturar eventos de mouse y flechas
    start_color();
    curs_set(0);          // Escondemos el cursor físico

    // Definimos colores: (ID, Texto, Fondo)
    init_pair(1, COLOR_WHITE, COLOR_BLUE);   // Botón 1
    init_pair(2, COLOR_WHITE, COLOR_RED);    // Botón 2
    init_pair(3, COLOR_GREEN, COLOR_BLACK);  // Mensaje de éxito

    // Habilitamos todos los eventos del mouse
    mousemask(ALL_MOUSE_EVENTS | REPORT_MOUSE_POSITION, NULL);
    printf("\033[?1003h\n"); // Truco extra para forzar el reporte de movimiento en algunas terminales

    int boton_presionado = 0; // 0: ninguno, 1: botón 1, 2: botón 2
    int ch;
    MEVENT event;

    while (1) {
        clear();
        mvprintw(1, 2, "Haz clic en los botones (Presiona 'q' para salir):");

        // Dibujamos los "botones"
        dibujar_boton(4, 5, "BOTON 1", 1);
        dibujar_boton(4, 20, "BOTON 2", 2);

        // Lógica del cartel inferior
        if (boton_presionado == 1) {
            attron(COLOR_PAIR(3) | A_BOLD);
            mvprintw(8, 5, ">>> HAS PRESIONADO EL BOTON 1 <<<");
            attroff(COLOR_PAIR(3) | A_BOLD);
        } else if (boton_presionado == 2) {
            attron(COLOR_PAIR(3) | A_BOLD);
            mvprintw(8, 5, ">>> HAS PRESIONADO EL BOTON 2 <<<");
            attroff(COLOR_PAIR(3) | A_BOLD);
        }

        refresh();
        ch = getch();

        if (ch == 'q') break;

        if (ch == KEY_MOUSE) {
            if (getmouse(&event) == OK) {
                // Verificamos si el clic fue un "Left Click"
                if (event.bstate & BUTTON1_CLICKED || event.bstate & BUTTON1_PRESSED) {
                    
                    // Lógica de colisión para Botón 1 (Fila 4, de columna 5 a 15 aprox)
                    if (event.y == 4 && event.x >= 5 && event.x <= 15) {
                        boton_presionado = 1;
                    }
                    // Lógica de colisión para Botón 2 (Fila 4, de columna 20 a 30 aprox)
                    else if (event.y == 4 && event.x >= 20 && event.x <= 30) {
                        boton_presionado = 2;
                    }
                }
            }
        }
    }

    printf("\033[?1003l\n"); // Desactivar el reporte de mouse al salir
    endwin();
    return 0;
}
