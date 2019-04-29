#include "Torre.h"


//Construtor que inicializa o atributo cor e o atributo capturada para falso.
Torre::Torre(bool color):cor(color){
	capturada = false;
}

bool Torre::checaMovimento(int linhaOrigem, int colunaOrigem, int linhaDestino, int colunaDestino){
	//A torre só anda se a o destino tiver a linha ou coluna igual ao da origem.
	if(linhaOrigem == linhaDestino || colunaOrigem == colunaDestino){
		return true;
	}
	
	return false;
}

//O atributo capturada é trocado para true.
void Torre::captura(){
	capturada = true;
}

char Torre::desenha(){
	//Se for preta é maiúsculo.
	if(cor) return 'T';
	
	return 't';
}

//Retorna true caso a peça esteja capturada.
bool Torre::getCapturada(){
	return capturada;
}
