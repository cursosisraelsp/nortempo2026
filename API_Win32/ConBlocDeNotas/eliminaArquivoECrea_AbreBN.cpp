#include <Windows.h> 
#include <string> 
#include <iostream>

int main() 
{ 

    // 1. Usamos la estructura genérica (que g++ lee como ANSI)
    STARTUPINFO si;
    PROCESS_INFORMATION pi;

    ZeroMemory(&si, sizeof(si));
    si.cb = sizeof(si);
    ZeroMemory(&pi, sizeof(pi));

    // Elimina o arquivo

    if (DeleteFile(TEXT("C:\\NewFile.txt"))) {
        std::cout << "Archivo eliminado con exito." << std::endl;
    }

   // Open a handle to the file 
   HANDLE hFile = CreateFile( 
      "C:\\NewFile.txt",     // Filename 
      GENERIC_WRITE,          // Desired access 
      FILE_SHARE_READ,        // Share mode 
      NULL,                   // Security attributes 
      CREATE_NEW,             // Creates a new file, only if it doesn't already exist 
      FILE_ATTRIBUTE_NORMAL,  // Flags and attributes 
      NULL);                  // Template file handle 
 
   if (hFile == INVALID_HANDLE_VALUE) 
   { 
      // Failed to open/create file 
      return 2; 
   } 
 
   // Write data to the file 
   std::string strText = "Hoxe é un novo dia"; // For C use LPSTR (char*) or LPWSTR (wchar_t*) 
   DWORD bytesWritten; 
   WriteFile( 
      hFile,            // Handle to the file 
      strText.c_str(),  // Buffer to write 
      strText.size(),   // Buffer size 
      &bytesWritten,    // Bytes written 
      nullptr);         // Overlapped 
 

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


   CloseHandle(hFile); 
}