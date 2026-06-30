#include <Windows.h>
#include <iostream>

int main() {
    // "Notepad" es el nombre de clase oficial que Microsoft asigna a la ventana del Bloc de notas
    HWND hwndNotepad = FindWindow("Notepad", NULL);

    if (hwndNotepad != NULL) {
        std::cout << "Bloc de notas detectado abierto. Enviando orden de cierre..." << std::endl;
        
        // Envía el mensaje de cierre (equivale a pulsar la 'X' roja de la ventana)
        PostMessage(hwndNotepad, WM_CLOSE, 0, 0);
    } else {
        std::cout << "No se encontro ninguna ventana del Bloc de notas abierta." << std::endl;
    }

    return 0;
}
