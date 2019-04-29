#include <iostream>
#include "Posicao.h"

class Tabuleiro{
	private:
		static const int tamanho = 8;		//Uma constante para a matriz.
		Posicao tab[tamanho][tamanho];		//uma matriz de Posicao de 8 X 8.
	
	public:
		Tabuleiro(); 						//Construtor do tabuleiro.
		void imprimirTabuleiro();			//Imprimindo o tabuleiro.
		void iniciarTabuleiro(); 			//Iniciando o tabuleiro.
};
