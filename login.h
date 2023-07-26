#include <iostream>
#include <windows.h>
#include <conio.h>
#include <cstring>
	using namespace std;
	struct dados_login{ //criei uma struct pois penso que mais para frente eu possa tentar armazenar estes dados
	char nomeJogador[30]; 
	char senhaJogador[30];
	int creditos;
	}Login;

void login() //limitar entradas e colocar cores
{
	//parte introdutória do projeto onde há especificaçôes do aluno e da materia;
	/*cout << "\n\n\t\t Trabalho "; Sleep(100); cout << "concluído "; Sleep(100); cout << "pelo "; Sleep(100); cout << "aluno: "; Sleep(100); cout << "Matheus Martins Viana"; 
	sleep(2);
	cout << "\n\n\t Título do projeto: CAÇA-NÍQUEL-CULTURAL \n\n\t ";
	cout << "Turma: Análise e Desenvolvimento de Sistemas \t\t\t Semestre: 1ª Fase 2023 \n\n\t ";
	
	getch();
	*///fim da parte introdutória;
	system("cls");
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t Nome de usuário: \n\t\t\t\t\t > ";
	gets(Login.nomeJogador);
	if(strcmp(Login.nomeJogador, "Claudia" ) ==0 )//adicionar parte introdutória apenas se o nome do jogador for Claudia! ou seja a parte introdutória só iria ser visivel quando for nomeJogador=='Claudia';
	{
	
	system("cls");
	cout << "\n\n\t\t\t Seja bem vinda ao meu programa \033[35mprofessora Claudia\033[0m, aguardo seu feedback! :)";
	cout << "\n\n\t\t Trabalho "; Sleep(100); cout << "concluído "; Sleep(100); cout << "pelo "; Sleep(100); cout << "aluno: "; Sleep(100); cout << "\033[4mMatheus Martins Viana\033[0m"; 
	sleep(2);
	cout << "\n\n\t \033[35mTítulo do projeto\033[0m: CAÇA-NÍQUEL-CULTURAL \n\n\t ";
	cout << "\033[35mTurma\033[0m: Análise e Desenvolvimento de Sistemas \t\t\t \033[35mSemestre\033[0m: 1ª Fase 2023 \n\n\t ";
	cout << "\n\t\t\t\t\t \033[35mobs\033[0m: Esta é uma tela direcionada apenas para a professora \033[35mClaudia\033[0m! \n\n\t ";
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\npress a some key to continue... \033[35m>\033[0m ";
	getch();
	
	}else{
	cout<<"\n\t\t\t\t\t\t Senha do Usuário: \n\t\t\t\t\t > ";
	gets(Login.senhaJogador);
	
	system("cls"); cout <<"\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t Olá, \033[31m"<<Login.nomeJogador; cout<<"\033[0m";sleep(2);
}
}