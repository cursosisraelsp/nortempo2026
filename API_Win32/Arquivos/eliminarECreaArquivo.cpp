#include <Windows.h> 
#include <string> 
#include <iostream>

int main() 
{ 
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
   std::string strText = "Hoxe é 01/07/2026"; // For C use LPSTR (char*) or LPWSTR (wchar_t*) 
   DWORD bytesWritten; 
   WriteFile( 
      hFile,            // Handle to the file 
      strText.c_str(),  // Buffer to write 
      strText.size(),   // Buffer size 
      &bytesWritten,    // Bytes written 
      nullptr);         // Overlapped 
 
   // Close the handle once we don't need it. 
   CloseHandle(hFile); 
}