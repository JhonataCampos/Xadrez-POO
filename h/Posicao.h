#include <iostream>

class Posicao{
	private:
		char peca;				//Assume a letra referente a peça na posição ou ' '(espaço vazio) caso não tenha nada.
	public:
		Posicao();				//Quando o objeto é criado iniciamos o char peca com ' ' (espacio vazio).
		void setPeca(char p);	//Recebe uma peça (letra).
		char getPeca();			//Retorna o char da peca.
};
