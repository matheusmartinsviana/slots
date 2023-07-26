#include <iostream>
#include <windows.h>
using namespace std;
 
 void motorJogoNormal(){
 	
 		struct slot_game{
		char letrasNormal[10] = {'B', 'C', 'J', 'R', 'I', 'L', 'H', 'P','S','A'}; // Bits, C++, Java, Ruby, Intercal, Lisp, Haskell, Prolog, Script, Apache; Lista citada apenas para meios referênciais :)
		int  quatroigual = 0, tresigual = 0, duplaigual = 0, par = 0, nada = 0;
		}Game;
		
 	char rolo1 = Game.letrasNormal[rand() % 10];        
    char rolo2 = Game.letrasNormal[rand() % 10];
	char rolo3 = Game.letrasNormal[rand() % 10];        
    char rolo4 = Game.letrasNormal[rand() % 10];
    
    	//inicio primeiro rolo
    	
    	system("cls");
    	cout << "\n \033[32m>\033[0mlogado, \033[4m"<<Login.nomeJogador<<"\033[0m";
		cout << "\n \033[32m$\033[0m "<<Login.creditos;
		
        cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t [\033[36m"<< rolo1<<"\033[0m]";
        Sleep(100);
        
		rolo1 = Game.letrasNormal[rand() % 10];
		system("cls");
		cout << "\n \033[32m>\033[0mlogado, \033[4m"<<Login.nomeJogador<<"\033[0m";
		cout << "\n \033[32m$\033[0m "<<Login.creditos;
		
		cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t [\033[35m"<< rolo1<<"\033[0m] ";
		Sleep(100);
		
		rolo1 = Game.letrasNormal[rand() % 10];
		system("cls");
		cout << "\n \033[32m>\033[0mlogado, \033[4m"<<Login.nomeJogador<<"\033[0m";
		cout << "\n \033[32m$\033[0m "<<Login.creditos;
		
		cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t [\033[35m"<< rolo1<<"\033[0m] ";
		Sleep(100);
		rolo1 = Game.letrasNormal[rand() % 10];
		
		system("cls");
		cout << "\n \033[32m>\033[0mlogado, \033[4m"<<Login.nomeJogador<<"\033[0m";
		cout << "\n \033[32m$\033[0m "<<Login.creditos;
		
		cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t [\033[34m"<< rolo1<<"\033[0m] ";
		Sleep(100);
		rolo1 = Game.letrasNormal[rand() % 10];
		
		system("cls");
		cout << "\n \033[32m>\033[0mlogado, \033[4m"<<Login.nomeJogador<<"\033[0m";
		cout << "\n \033[32m$\033[0m "<<Login.creditos;
		
		cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t [\033[33m"<< rolo1<<"\033[0m] ";
		Sleep(100);
		rolo1 = Game.letrasNormal[rand() % 10];
		
		system("cls");
		cout << "\n \033[32m>\033[0mlogado, \033[4m"<<Login.nomeJogador<<"\033[0m";
		cout << "\n \033[32m$\033[0m "<<Login.creditos;
		 
		cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t [\033[32m"<< rolo1<<"\033[0m] ";
		Sleep(100);
		rolo1 = Game.letrasNormal[rand() % 10];
		
		system("cls");
		cout << "\n \033[32m>\033[0mlogado, \033[4m"<<Login.nomeJogador<<"\033[0m";
		cout << "\n \033[32m$\033[0m "<<Login.creditos;
		 
		cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t [\033[31m"<< rolo1<<"\033[0m] ";
		//fim primeiro rolo 
		
		//==========================================
		
		//inicio segundo rolo
		
		system("cls");
    	cout << "\n \033[32m>\033[0mlogado, \033[4m"<<Login.nomeJogador<<"\033[0m";
		cout << "\n \033[32m$\033[0m "<<Login.creditos;
		
        cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t [\033[31m"<< rolo1<<"\033[0m]  [\033[36m"<< rolo2<<"\033[0m] ";
        Sleep(100);
        
		rolo2 = Game.letrasNormal[rand() % 10];
		system("cls");
		cout << "\n \033[32m>\033[0mlogado, \033[4m"<<Login.nomeJogador<<"\033[0m";
		cout << "\n \033[32m$\033[0m "<<Login.creditos;
		
		cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t [\033[31m"<< rolo1<<"\033[0m]  [\033[35m"<< rolo2<<"\033[0m] ";
		Sleep(100);
		
		rolo2 = Game.letrasNormal[rand() % 10];
		system("cls");
		cout << "\n \033[32m>\033[0mlogado, \033[4m"<<Login.nomeJogador<<"\033[0m";
		cout << "\n \033[32m$\033[0m "<<Login.creditos;
		
		cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t [\033[31m"<< rolo1<<"\033[0m]  [\033[35m"<< rolo2<<"\033[0m] ";
		Sleep(100);
		rolo2 = Game.letrasNormal[rand() % 10];
		
		system("cls");
		cout << "\n \033[32m>\033[0mlogado, \033[4m"<<Login.nomeJogador<<"\033[0m";
		cout << "\n \033[32m$\033[0m "<<Login.creditos;
		
		cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t [\033[31m"<< rolo1<<"\033[0m]  [\033[34m"<< rolo2<<"\033[0m] ";
		Sleep(100);
		rolo2 = Game.letrasNormal[rand() % 10];
		
		system("cls");
		cout << "\n \033[32m>\033[0mlogado, \033[4m"<<Login.nomeJogador<<"\033[0m";
		cout << "\n \033[32m$\033[0m "<<Login.creditos;
		
		cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t [\033[31m"<< rolo1<<"\033[0m]  [\033[33m"<< rolo2<<"\033[0m] ";
		Sleep(100);
		rolo2 = Game.letrasNormal[rand() % 10];
		
		system("cls");
		cout << "\n \033[32m>\033[0mlogado, \033[4m"<<Login.nomeJogador<<"\033[0m";
		cout << "\n \033[32m$\033[0m "<<Login.creditos;
		 
		cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t [\033[31m"<< rolo1<<"\033[0m]  [\033[32m"<< rolo2<<"\033[0m] ";
		Sleep(100);
		rolo2 = Game.letrasNormal[rand() % 10];
		
		system("cls");
		cout << "\n \033[32m>\033[0mlogado, \033[4m"<<Login.nomeJogador<<"\033[0m";
		cout << "\n \033[32m$\033[0m "<<Login.creditos;
		 
		cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t [\033[31m"<< rolo1<<"\033[0m]  [\033[32m"<< rolo2<<"\033[0m] ";
		
		//fim segundo rolo
		
		//=========================
		
		//inicio terceiro rolo 
		
		system("cls");
    	cout << "\n \033[32m>\033[0mlogado, \033[4m"<<Login.nomeJogador<<"\033[0m";
		cout << "\n \033[32m$\033[0m "<<Login.creditos;
		
        cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t [\033[31m"<< rolo1<<"\033[0m]  [\033[32m"<< rolo2<<"\033[0m]  [\033[32m"<< rolo3<<"\033[0m] ";
        Sleep(100);
        
		rolo3 = Game.letrasNormal[rand() % 10];
		system("cls");
		cout << "\n \033[32m>\033[0mlogado, \033[4m"<<Login.nomeJogador<<"\033[0m";
		cout << "\n \033[32m$\033[0m "<<Login.creditos;
		
		cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t [\033[31m"<< rolo1<<"\033[0m]  [\033[32m"<< rolo2<<"\033[0m]  [\033[33m"<< rolo3<<"\033[0m] ";
		Sleep(100);
		
		rolo3 = Game.letrasNormal[rand() % 10];
		system("cls");
		cout << "\n \033[32m>\033[0mlogado, \033[4m"<<Login.nomeJogador<<"\033[0m";
		cout << "\n \033[32m$\033[0m "<<Login.creditos;
		
		cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t [\033[31m"<< rolo1<<"\033[0m]  [\033[32m"<< rolo2<<"\033[0m]  [\033[34m"<< rolo3<<"\033[0m] ";
		Sleep(100);
		rolo3 = Game.letrasNormal[rand() % 10];
		
		system("cls");
		cout << "\n \033[32m>\033[0mlogado, \033[4m"<<Login.nomeJogador<<"\033[0m";
		cout << "\n \033[32m$\033[0m "<<Login.creditos;
		 
		cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t [\033[31m"<< rolo1<<"\033[0m]  [\033[32m"<< rolo2<<"\033[0m]  [\033[35m"<< rolo3<<"\033[0m] ";
		Sleep(100);
		rolo3 = Game.letrasNormal[rand() % 10];
		
		system("cls");
		cout << "\n \033[32m>\033[0mlogado, \033[4m"<<Login.nomeJogador<<"\033[0m";
		cout << "\n \033[32m$\033[0m "<<Login.creditos;
		
		cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t [\033[31m"<< rolo1<<"\033[0m]  [\033[32m"<< rolo2<<"\033[0m]  [\033[31m"<< rolo3<<"\033[0m] ";
		Sleep(100);
		rolo3 = Game.letrasNormal[rand() % 10];
		
		system("cls");
		cout << "\n \033[32m>\033[0mlogado, \033[4m"<<Login.nomeJogador<<"\033[0m";
		cout << "\n \033[32m$\033[0m "<<Login.creditos;
		 
		cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t [\033[31m"<< rolo1<<"\033[0m]  [\033[32m"<< rolo2<<"\033[0m]  [\033[35m"<< rolo3<<"\033[0m] ";
		Sleep(100);
		rolo3 = Game.letrasNormal[rand() % 10];
		
		system("cls");
		cout << "\n \033[32m>\033[0mlogado, \033[4m"<<Login.nomeJogador<<"\033[0m";
		cout << "\n \033[32m$\033[0m "<<Login.creditos;
		 
		cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t [\033[31m"<< rolo1<<"\033[0m]  [\033[32m"<< rolo2<<"\033[0m]  [\033[33m"<< rolo3<<"\033[0m] ";
		
		//fim terceiro rolo
		
		//==================
		
		//inicio quarto rolo
		
		system("cls");
    	cout << "\n \033[32m>\033[0mlogado, \033[4m"<<Login.nomeJogador<<"\033[0m";
		cout << "\n \033[32m$\033[0m "<<Login.creditos;
		
        cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t [\033[31m"<< rolo1<<"\033[0m]  [\033[32m"<< rolo2<<"\033[0m]  [\033[33m"<< rolo3<<"\033[0m]  [\033[31m"<< rolo4<<"\033[0m] ";
        Sleep(100);
        
		rolo4 = Game.letrasNormal[rand() % 10];
		system("cls");
		cout << "\n \033[32m>\033[0mlogado, \033[4m"<<Login.nomeJogador<<"\033[0m";
		cout << "\n \033[32m$\033[0m "<<Login.creditos;
		
		cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t [\033[31m"<< rolo1<<"\033[0m]  [\033[32m"<< rolo2<<"\033[0m]  [\033[33m"<< rolo3<<"\033[0m]  [\033[32m"<< rolo4<<"\033[0m] ";
		Sleep(100);
		
		rolo4 = Game.letrasNormal[rand() % 10];
		system("cls");
		cout << "\n \033[32m>\033[0mlogado, \033[4m"<<Login.nomeJogador<<"\033[0m";
		cout << "\n \033[32m$\033[0m "<<Login.creditos;
		
		cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t [\033[31m"<< rolo1<<"\033[0m]  [\033[32m"<< rolo2<<"\033[0m]  [\033[33m"<< rolo3<<"\033[0m]  [\033[33m"<< rolo4<<"\033[0m] ";
		Sleep(100);
		rolo4 = Game.letrasNormal[rand() % 10];
		
		system("cls");
		cout << "\n \033[32m>\033[0mlogado, \033[4m"<<Login.nomeJogador<<"\033[0m";
		cout << "\n \033[32m$\033[0m "<<Login.creditos;
		
		cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t [\033[31m"<< rolo1<<"\033[0m]  [\033[32m"<< rolo2<<"\033[0m]  [\033[33m"<< rolo3<<"\033[0m]  [\033[34m"<< rolo4<<"\033[0m] ";
		Sleep(100);
		rolo4 = Game.letrasNormal[rand() % 10];
		
		system("cls");
		cout << "\n \033[32m>\033[0mlogado, \033[4m"<<Login.nomeJogador<<"\033[0m";
		cout << "\n \033[32m$\033[0m "<<Login.creditos;
		
		cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t [\033[31m"<< rolo1<<"\033[0m]  [\033[32m"<< rolo2<<"\033[0m]  [\033[33m"<< rolo3<<"\033[0m]  [\033[35m"<< rolo4<<"\033[0m] ";
		Sleep(100);
		rolo4 = Game.letrasNormal[rand() % 10];
		
		system("cls");
		cout << "\n \033[32m>\033[0mlogado, \033[4m"<<Login.nomeJogador<<"\033[0m";
		cout << "\n \033[32m$\033[0m "<<Login.creditos;
		 
		cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t [\033[31m"<< rolo1<<"\033[0m]  [\033[32m"<< rolo2<<"\033[0m]  [\033[33m"<< rolo3<<"\033[0m]  [\033[36m"<< rolo4<<"\033[0m] ";
		Sleep(100);
		rolo4 = Game.letrasNormal[rand() % 10];
		
		system("cls");
		cout << "\n \033[32m>\033[0mlogado, \033[4m"<<Login.nomeJogador<<"\033[0m";
		cout << "\n \033[32m$\033[0m "<<Login.creditos;
		 
		cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t [\033[31m"<< rolo1<<"\033[0m]  [\033[32m"<< rolo2<<"\033[0m]  [\033[33m"<< rolo3<<"\033[0m]  [\033[34m"<< rolo4<<"\033[0m] \n\n\t\t\t";
		
		//fim quarto rolo 
		
		//===================
        
        // verificar os rolos
        
        
        if (rolo1 == rolo2 && rolo2 == rolo3 && rolo3 == rolo4) {
			Login.creditos = Login.creditos + 1000;
		
            system("cls");  
			cout << "\n \033[32m>\033[0mlogado, \033[4m"<<Login.nomeJogador<<"\033[0m";
			cout << "\n \033[32m$\033[0m "<<Login.creditos;
			cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t [\033[31m"<< rolo1<<"\033[0m]  [\033[32m"<< rolo2<<"\033[0m]  [\033[33m"<< rolo3<<"\033[0m]  [\033[34m"<< rolo4<<"\033[0m] \n\n\t\t\t";
			Sleep(500); cout << "\n\n\t\t\t\t\t    Você ganhou \033[32m>\033[0m 1000 creditos!! \n\t";
        
			Game.quatroigual++;
			    
        } else if (rolo1 == rolo2 && rolo2 == rolo3 || rolo2 == rolo4 && rolo4 == rolo3 || rolo1 == rolo4 && rolo4 == rolo3 || rolo1 == rolo4 && rolo4 == rolo2){
        	Login.creditos = Login.creditos + 100;
        	
            system("cls");  
			cout << "\n \033[32m>\033[0mlogado, \033[4m"<<Login.nomeJogador<<"\033[0m";
			cout << "\n \033[32m$\033[0m "<<Login.creditos;
			cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t [\033[31m"<< rolo1<<"\033[0m]  [\033[32m"<< rolo2<<"\033[0m]  [\033[33m"<< rolo3<<"\033[0m]  [\033[34m"<< rolo4<<"\033[0m] \n\n\t\t\t";
			Sleep(500); cout << "\n\n\t\t\t\t\t    Você ganhou \033[32m>\033[0m 100 creditos!! \n\t";
			
			Game.tresigual++;
			
		} else if (rolo1 == rolo2 && rolo3 == rolo4 && rolo1 != rolo3 || rolo1 == rolo3 && rolo2 == rolo4 && rolo1 != rolo4 || rolo1 == rolo4 && rolo2 == rolo3 && rolo1 != rolo2 ){
			Login.creditos = Login.creditos + 30;
			
            system("cls");  
			cout << "\n \033[32m>\033[0mlogado, \033[4m"<<Login.nomeJogador<<"\033[0m";
			cout << "\n \033[32m$\033[0m "<<Login.creditos;
			cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t [\033[31m"<< rolo1<<"\033[0m]  [\033[32m"<< rolo2<<"\033[0m]  [\033[33m"<< rolo3<<"\033[0m]  [\033[34m"<< rolo4<<"\033[0m] \n\n\t\t\t";
			Sleep(500); cout << "\n\n\t\t\t\t\t    Você ganhou \033[32m>\033[0m 30 creditos! \n\t";
			
			Game.duplaigual++;
			
		} else if (rolo1 == rolo2 && rolo3 != rolo1 && rolo3 != rolo2 && rolo4 != rolo1 && rolo4 != rolo2 && rolo3 != rolo4 || rolo2 == rolo3 && rolo1 != rolo2 && rolo1 != rolo3 && rolo4 != rolo2 && rolo4 != rolo3 && rolo1 != rolo4 || rolo1 == rolo3 && rolo2 != rolo1 && rolo2 != rolo3 && rolo4 != rolo1 && rolo4 != rolo3 && rolo2 != rolo4 || rolo1 == rolo4 && rolo2 != rolo1 && rolo2 != rolo4 && rolo3 != rolo1 && rolo3 != rolo4 && rolo2 != rolo3 || rolo2 == rolo4 && rolo3 != rolo2 && rolo3 != rolo4 && rolo1 != rolo2 && rolo1 != rolo4 && rolo1 != rolo3 || rolo3 == rolo4 && rolo1 != rolo3 && rolo1 != rolo4 && rolo2 != rolo3 && rolo2 != rolo4 && rolo1 != rolo2){
            
			Login.creditos = Login.creditos + 20;
            system("cls");  
			cout << "\n \033[32m>\033[0mlogado, \033[4m"<<Login.nomeJogador<<"\033[0m";
			cout << "\n \033[32m$\033[0m "<<Login.creditos;
			cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t [\033[31m"<< rolo1<<"\033[0m]  [\033[32m"<< rolo2<<"\033[0m]  [\033[33m"<< rolo3<<"\033[0m]  [\033[34m"<< rolo4<<"\033[0m] \n\n\t\t\t";
			Sleep(500); cout << "\n\n\t\t\t\t\t    Você ganhou \033[32m>\033[0m 20 creditos! \n\t";
			
			Game.par++;
	
		}else {
            Login.creditos = Login.creditos - 10;
            
            system("cls");  
			cout << "\n \033[32m>\033[0mlogado, \033[4m"<<Login.nomeJogador<<"\033[0m";
			
			cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t [\033[31m"<< rolo1<<"\033[0m]  [\033[32m"<< rolo2<<"\033[0m]  [\033[33m"<< rolo3<<"\033[0m]  [\033[34m"<< rolo4<<"\033[0m] \n\n\t\t\t";
			Sleep(500); cout << "\n\n\t\t\t\t\t       Não foi desta vez! \033[31m-\033[0m 10  \n\t";
		
			Game.nada++;
        }
        cout << "\n\n\t\t\t\t\t        [\033[31m1\033[0m] Jogar novamente \n\n\t\t\t\t\t        [\033[31m0\033[0m] Sair.\n\n\t\t\t\t\t\t \033[31m>\033[0m ";
 	
}