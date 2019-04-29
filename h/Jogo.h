#include "Jogador.h"
#include "Tabuleiro.h"

class Jogo{
	private:
		//Por definição, o jogador 0 sempre terá as brancas, fazendo-o assim, sempre ser o primeiro.
		Jogador jogador_0;
		Jogador jogador_1;		
		Tabuleiro tab; //Criamos um atributo Tabuleiro.
		bool vez; 		//Se for 0 é a vez do jogador 0, se for 1 é a vez do jogador 1.
		
		int estado; 	/*A variável estado, assume, 0 se for início do jogo, 1 meio do jogo, 2 se algum jogador está em xeque,
						  3 se algum jogador recebeu xeque-mate.*/
	
	public:
		Jogo(Jogador nome_jogador0, Jogador nome_jogador1); //O construtor do jogo recebe dois objetos Jogador que serão os jogadores.
		void estadoDoJogo();		/*O estado do jogo, de modo genérico, imprimi o estado atual 
									(inicio do jogo, meio do jogo, xeque (e quem está em xeque) e xeque-mate (e quem recebeu xeque-mate) */
		void mudarVezDoJogador();   //Muda a vez do jogador.
		void setEstado(int e); 	    //Muda o estado do jogo.
};
		
