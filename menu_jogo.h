#include <iostream>
#include <windows.h>
using namespace std;
 
 void menuJogo(){
 	system("cls");
	cout << "\n \033[32m>\033[0mlogado, \033[4m"<<Login.nomeJogador<<"\033[0m";
	cout << "\n \033[32m$\033[0m "<<Login.creditos;
 	cout << "\n\n\t\t\t\t\033[31mVocê está jogando\033[0m [ \033[7mMATCH A LETTER\033[0m ] - \033[31mslot game\033[0m\n\n\n";
 	cout << "\t\t\t\t\t\033[31m[1] - \033[0m Apostar \033[4;3m10\033[0m fichas\n\n\n\n";
 	cout << "\t\t\t\t\t\033[31m[2] - \033[0m Apostar \033[4;3m20\033[0m de suas fichas\t[ +\033[32m100%\033[0m de BÔNUS no seu \033[32m$\033[0m ] \n\n\n\n ";
 	cout << "\t\t\t\t\t\033[31m[3] - \033[0m Sair do [ \033[7mMATCH A LETTER\033[0m ] \n\n\n\n";
 	
 	cout << "\t\t\t\t\t    Sua escolha \033[31m>\033[0m"; 
}