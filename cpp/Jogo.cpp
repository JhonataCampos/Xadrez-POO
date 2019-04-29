#include "Jogo.h"

using std::cin;
using std::cout;
using std::endl;

//Construtor que inicia os atributos Jogador através de um construtor de cópia.
Jogo::Jogo(Jogador nome_jogador0, Jogador nome_jogador1):jogador_0(nome_jogador0),jogador_1(nome_jogador1){
	vez = false; //Inicia com false, pois o false representa as brancas e as brancas sempre serão as primeiras.
	estado = 0; //Inicio do jogo é o 0.
}

//Após uma jogada do jogador atual, é chamado esse método para trocar a vez.
void Jogo::mudarVezDoJogador(){
	if(vez) vez = false;
	else vez = true;
}


/*Aqui temos uma série de mensagens para exibir o estado do jogo atual.
 * A cada nova jogada ele é chamado, e por isso, o tabuleiro a cada jogada é atualizado.*/
void Jogo::estadoDoJogo(){
	cout<<"							";
	if(estado == 1){ 
		cout<<"JOGO EM ANDAMENTO:"<<endl;
		cout<<"							";
		cout<<"Vez do jogador ";
		if(vez == 0) cout<<jogador_0.getNome();
		else 		 cout<<jogador_1.getNome(); 
		cout<<"!"<<endl;
		
	}else if(estado == 2){
		cout<<"O jogador ";
		if(vez == 0) cout<<jogador_0.getNome();
		else 		 cout<<jogador_1.getNome();
		
		cout<<" está em xeque!"<<endl;
	}
	else if(estado == 3){
		cout<<"O jogador ";
		if(vez == 0) cout<<jogador_0.getNome();
		else 		 cout<<jogador_1.getNome();
		
		cout<<" recebeu xeque-mate!"<<endl;
	}
	else {
		cout<<"Inicio do jogo!"<<endl;
	}
	tab.imprimirTabuleiro();
}

/*Esse método é simplesmente para poder alterar o estado do jogo, por exemplo, quando um jogador ficou em xeque
 * teremos que chamar esse método para alterar seu estado.*/
void Jogo::setEstado(int e){
	estado = e;
}
