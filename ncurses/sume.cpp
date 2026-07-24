#include <ncurses.h>

int main() {
    int num1, num2;

    // 1. Inicialización
    initscr();
    cbreak();             // Desactiva el buffering de línea (recibe teclas al instante)
    echo();               // Queremos ver lo que el usuario escribe

    // 2. Primer número
    move(2, 5);           // Mueve el cursor a la fila 2, columna 5
    printw("--- EL ORÁCULO DE NCURSES ---");
    
    move(5, 5);           // Fila 5
    printw("Dime un numero: ");
    scanw("%d", &num1);   // Recibe el input y lo guarda en num1

    // 3. Segundo número (Movimiento dinámico)
    move(7, 5);           // Bajamos un poco el cursor
    printw("Dime otro numero: ");
    scanw("%d", &num2);

    // 4. Resultado con estilo
    attron(A_BOLD | A_UNDERLINE); // ¡Activamos negritas y subrayado!
    move(10, 5);
    printw("La magia dice que la suma es: %d", num1 + num2);
    attroff(A_BOLD | A_UNDERLINE); // Siempre apaga los atributos al terminar

    move(12, 5);
    printw("Presiona cualquier tecla para salir...");
    
    // 5. Finalización
    refresh();
    getch();
    endwin();

    return 0;
}
