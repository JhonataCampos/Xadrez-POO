#include "Dama.h"
#include <cmath>


//Construtor que inicializa o atributo cor e o atributo capturada para falso.
Dama::Dama(bool color):cor(color){
	capturada = false;
}

bool Dama::checaMovimento(int linhaOrigem, int colunaOrigem, int linhaDestino, int colunaDestino){
	
	//Usa a mesma lógica da torre e bispo.
	if((linhaOrigem == linhaDestino || colunaOrigem == colunaDestino) ||
	 fabs(linhaOrigem - linhaDestino) == fabs(colunaOrigem - colunaDestino)){
		return true;
	}
	
	return false;
}

//O atributo capturada é trocado para true.
void Dama::captura(){
	capturada = true;
}

char Dama::desenha(){
	//Se for preta é maiúsculo.
	if(cor) return 'D';
	
	return 'd';
}

//Retorna true caso a peça esteja capturada.
bool Dama::getCapturada(){
	return capturada;
}

