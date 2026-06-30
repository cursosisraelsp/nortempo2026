#include <windows.h>
#include <tchar.h>
#include <iostream>

int main() {
    if (DeleteFile(TEXT("C:\\NewFile.txt"))) {
        std::cout << "Archivo eliminado con exito." << std::endl;
    } else {
        std::cout << "Error al eliminar el archivo." << std::endl;
    }
    return 0;
}
