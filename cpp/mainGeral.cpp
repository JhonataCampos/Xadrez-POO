#include "Jogo.h"

using std::endl;
using std::cout;
using std::cin;

int main(){
		int opc;
		
		Jogador jogador_0(0,"Jesimiel"),jogador_1(1,"Jhonata");
		Jogo jogo(jogador_0,jogador_1);
		
		do{
			
			jogo.estadoDoJogo();
			cout<<"Alterando o estado do jogo através do método setEstado"<<endl;
			cout<<"\n0. Início do jogo\n1. Meio do jogo\n2. Xeque\n3. Xeque-mate"<<endl;
			cout<<"4. Para alterar a vez do jogador."<<endl;
			cin>>opc;
			
			
			if(opc == 4){
				jogo.mudarVezDoJogador();
			}else if(opc >= 0 && opc <= 4){
				jogo.setEstado(opc);
			} else break;
			
		}while(1);
		

		return 0;
}
