#include <iostream>

	using namespace std;
	int txtVerificarEscolha(){
		system("cls");
		cout << "\n \033[32m>\033[0mlogado, \033[4m"<<Login.nomeJogador<<"\033[0m";
		cout << "\n \033[32m$\033[0m "<<Login.creditos;
		cout << "\n\t\t Opção \033[33;4minválida\033[0m.";
		cout <<"\n\n\t\t\t\033[31m[1]\033[0m = Jogar";
		cout <<"\n\n\t\t\t\033[31m[2]\033[0m = Loja";
		cout <<"\n\n\t\t\t\033[31m[3]\033[0m = Registro";
		cout <<"\n\n\t\t\t\033[31m[4]\033[0m = Sair";
		cout <<"\n\n\t\t\tDigite sua escolha novamente \033[31m>\033[0m ";
}