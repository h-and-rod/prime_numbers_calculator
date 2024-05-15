#include <stdio.h>
#include <windows.h>

int main(){
    
    int i;
    
    for(i=0; i<256; i++)
    {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), i);
        printf("Coloracao numero %i\t", i);
    }
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
    return 0;
}