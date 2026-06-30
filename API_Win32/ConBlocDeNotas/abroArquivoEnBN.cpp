#include <Windows.h>
#include <iostream>

int main() {
    // 1. Usamos la estructura genérica (que g++ lee como ANSI)
    STARTUPINFO si;
    PROCESS_INFORMATION pi;

    ZeroMemory(&si, sizeof(si));
    si.cb = sizeof(si);
    ZeroMemory(&pi, sizeof(pi));

    // 2. Usamos 'char' (sin la L delante del texto)
    //char comando[] = "notepad.exe C:\\MisProyectos\\notas.txt";
   char comando[] = R"("C:\Windows\System32\notepad.exe" "C:\NewFile.txt")";

    std::cout << "Abriendo el archivo con el Bloc de notas de forma segura..." << std::endl;

    std::cout << "Abriendo el archivo con el Bloc de notas..." << std::endl;

    // 3. Volvemos a dejar 'CreateProcess' a secas (g++ llamará automáticamente a CreateProcessA)
    BOOL exito = CreateProcess(
        NULL,           
        comando,        
        NULL, NULL, FALSE, 0, NULL, NULL, 
        &si, 
        &pi
    );

    if (!exito) {
        std::cout << "Error al abrir el archivo. Codigo: " << GetLastError() << std::endl;
        return 1;
    }

    std::cout << "Archivo abierto con exito. PID: " << pi.dwProcessId << std::endl;

    // Cerrar manejadores inmediatamente para evitar fugas de memoria
    CloseHandle(pi.hProcess);
    CloseHandle(pi.hThread);

    return 0;
}
