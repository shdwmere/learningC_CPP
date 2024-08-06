#include <windows.h>

int main() {

    /*
    doc: https://learn.microsoft.com/pt-br/windows/win32/api/winuser/nf-winuser-messageboxa

    int MessageBoxA(
    [in, optional] HWND   hWnd,
    [in, optional] LPCSTR lpText,
    [in, optional] LPCSTR lpCaption,
    [in]           UINT   uType
    );
    */

    MessageBoxA(NULL, "Hello from Windows API!", "Title", MB_OK);

    return EXIT_SUCCESS; // isso equivale a 0
}