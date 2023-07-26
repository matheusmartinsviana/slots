
// Data de finalização esperada: 05/07/2023
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <ios>
#include <limits>
#include <cctype>
#include <conio.h>
#include <windows.h>
#include "login.h"
#include "menu_modos.h"
#include "txt_verificarescolhamenu.h"
#include "animacao_modonormal.h"
#include "menu_jogo.h"
#include "motor_normal.h"
#include "motor_doisx.h"
#include "loja.h"
#include "animacao_recarga.h"

	using namespace std;
	int escolha;
	int opcaoJogo;
	int compra;
	main(){
	system ("chcp 65001");
	system("cls");
login();//login
do{
system("cls"); 
cout << "\n \033[32m>\033[0mlogado, \033[4m"<<Login.nomeJogador<<"\033[0m";
cout << "\n \033[32m$\033[0m "<<Login.creditos;
menu();//menu apos logar
cin >> escolha;//(1)Jogar , (2)Loja , (3)Registro , (4)Sair 
	while( escolha != 1 && escolha != 2 && escolha != 3 && escolha != 4){
	txtVerificarEscolha();
	cin>>escolha;
		if(escolha==4)
		{
		system("cls");
		cout << "\n\t\t\t\t\t\t\033[31mS\033[0m"; cout << "\033[31mL\033[0m"; cout << "\033[31mO\033[0m"; cout << "\033[31mT\033[0m"; cout << " \033[31mGAME\033[0m"; 
		cout << "\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t Volte sempre :)";
		break;
		}
	}
		
		
	switch(escolha){
		
		case 1:{ 
						while(Login.creditos>10){
							
						
						
						//===============
						
			system("cls");
			animacaoJogo();//animação de entrada
			do{
			menuJogo();// opcoes de jogo
			cin>>opcaoJogo;
				
				//============
				while(opcaoJogo != 1 && opcaoJogo != 2 && opcaoJogo != 3){	
					menuJogo();
					cout << "Opção INVÁLIDA!";
					sleep(2);
					menuJogo();
					cin >> opcaoJogo;
				}
				//=========================
				while(opcaoJogo == 1 ){ 
				motorJogoNormal();
				cin >> opcaoJogo;
				}
				//=========================
				while(opcaoJogo == 2 ){ 
				motorJogoXdois();
				cin >> opcaoJogo;
				while(opcaoJogo == 1 ){ 
				motorJogoXdois();
				cin >> opcaoJogo; } }
				//===============
						
        			}while(opcaoJogo==0);
        		
        			
				break; }
				system("cls");
						cout << "\n \033[32m>\033[0mlogado, \033[4m"<<Login.nomeJogador<<"\033[0m";
						cout << "\n \033[32m$\033[0m "<<Login.creditos;
						cout << "\n\t\t\t\t[ \033[7mMATCH A LETTER\033[0m ] - \033[31mslot game\033[0m\n";
						cout << "\n \t\tOps... Você não tem créditos sufientes, Retorne para o Menu e entre em [2] Loja\n\n";
						getch();
						break; break;	
			}
			
		case 2:{
	
			do{
			Loja();
			cin>>compra;
			if(compra == 0){
			break;
			
			}
				while(compra != 1 && compra != 2 && compra != 3 && compra!=0){	
				Loja();
				cout << "Opção INVÁLIDA!";
				sleep(2);
				Loja();
				cin >> compra;
				if(compra == 0){
				break;
				
				}
				}
				
					//================
					if(compra == 1){
					Login.creditos = Login.creditos + 100;
					system("cls");
					cout << "\n \033[32m>\033[0mlogado, \033[4m"<<Login.nomeJogador<<"\033[0m";
					cout << "\n \033[32m$\033[0m "<<Login.creditos;
					cout << "\n\n\n\n\t\t\t\t\t Recarga \033[32mefetuada\033[0m com sucesso!";
					sleep(1);
					system("cls");
					animacaoRecarga();
					system("cls");
					sleep(1);
					system("cls");
					Loja();
					compra=4;
					//========================
					}else if(compra == 2){
					system("cls");
					Login.creditos = Login.creditos + 200;
					cout << "\n \033[32m>\033[0mlogado, \033[4m"<<Login.nomeJogador<<"\033[0m";
					cout << "\n \033[32m$\033[0m "<<Login.creditos;
					cout << "\n\n\n\n\t\t\t\t\t Recarga \033[32mefetuada\033[0m com sucesso!";
					sleep(1);
					system("cls");
					animacaoRecarga();
					system("cls");
					sleep(1);
					system("cls");
					Loja();
					compra=4;
					//======================
					} else if(compra == 3){
					Login.creditos = Login.creditos + 300;
					system("cls");
					cout << "\n \033[32m>\033[0mlogado, \033[4m"<<Login.nomeJogador<<"\033[0m";
					cout << "\n \033[32m$\033[0m "<<Login.creditos;
					cout << "\n\n\n\n\t\t\t\t\t Recarga \033[32mefetuada\033[0m com sucesso!";
					sleep(1);
					system("cls");
					animacaoRecarga();
					system("cls");
					sleep(1);
					system("cls");
					Loja();
					compra=4;
					//==============
				}else { 
					compra=4;
				}
			}while((compra != 1 && compra != 2 && compra != 3));
			break;
		}
		
		case 3:{
			while(escolha==3);{
			system("cls");
			cout << "\n \033[32m>\033[0mlogado, \033[4m"<<Login.nomeJogador<<"\033[0m";
			cout << "\n \033[32m$\033[0m "<<Login.creditos;
			cout << "\n\n\t\t\t\t [ \033[7mREGISTRO DE JOGADAS\033[0m ] - \033[31mslot game\033[0m\n";
			cout << "\n       \t\tNormal\tDois X";
			/*cout << "\n\nJackpot\t\t" <<Game.quatroigual<< "\t"<<GameXdois.quatroigualdoisx;
			cout << "\n\nTrincas\t\t"<<Game.tresigual<<"\t"<<GameXdois.tresigualdoisx;
			cout << "\n\nDuplo Par\t"<<Game.duplaigual<<"\t"<<GameXdois.duplaigualdoisx;
			cout << "\n\nPar\t\t"<<Game.par<<"\t"<<GameXdois.pardoisx;
			cout << "\n\nNada\t"<<Game.nada<<"\t"<<GameXdois.nadadoisx;*/
			getch();		
		}
			}
			 
			 
			}
		}while(escolha==4 || opcaoJogo == 3 || compra == 0);
	}


	