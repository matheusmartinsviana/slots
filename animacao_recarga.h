#include <windows.h>
#include <iostream>
#include<stdlib.h>
#include<time.h>
#include <unistd.h>
using namespace std;

void gotoxy(int x, int y)
{
HANDLE hOut;
COORD Position;
hOut = GetStdHandle(STD_OUTPUT_HANDLE);
Position.X = x;
Position.Y = y;
SetConsoleCursorPosition(hOut,Position);
}

int x[30] = {30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50}; 
int y[20] = {8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 7, 6, 5, 4, 19, 20, 3, 21}; 
int yx = x[rand() % 30];
int xy = y[rand() % 20];



void animacaoRecarga(){
	for(int i=0; i<5; i++){
	Sleep(100);
    gotoxy(yx,xy);
    cout<<" \033[32m$\033[0m";
    srand(time(NULL));
    yx = x[rand() % 30];
    xy = y[rand() % 20];
    Sleep(100);
    gotoxy(yx,xy);
    cout<<" \033[33m$\033[0m";
    srand(time(NULL));
    yx = x[rand() % 30];
    xy = y[rand() % 20];
    
	}

}
