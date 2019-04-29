#include "Peao.h"


//Construtor que inicializa o atributo cor e o atributo capturada para falso.
Peao::Peao(bool color):cor(color){
	capturada = false;
}

bool Peao::checaMovimento(int linhaOrigem, int colunaOrigem, int linhaDestino, int colunaDestino){
	int aux = 1;
	
	if(!cor){ //Se a cor for branca, teremos que descer de um em um na nossa matriz com o pião, por isso, fazemos
			  //a nossa auxiliar ficar negativa.
		aux = -aux;
	}
	
	if(linhaOrigem+aux == linhaDestino && colunaOrigem == colunaDestino){
		return true;
	}
	
	return false;
}

//O atributo capturada é trocado para true.
void Peao::captura(){
	capturada = true;
}

char Peao::desenha(){
	//Se for preta é maiúsculo.
	if(cor) return 'P';
	
	return 'p';
}

//Retorna true caso a peça esteja capturada.
bool Peao::getCapturada(){
	return capturada;
}
