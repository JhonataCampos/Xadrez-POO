
#include "Rei.h"


//Construtor que inicializa o atributo cor e o atributo capturada para falso.
Rei::Rei(bool color):cor(color){
	capturada = false;
}

bool Rei::checaMovimento(int linhaOrigem, int colunaOrigem, int linhaDestino, int colunaDestino){
	//Existem 8 possíveis posições que o rei pode andar.
	if(((linhaOrigem+1 == linhaDestino) || (linhaOrigem-1 == linhaDestino) || (linhaOrigem == linhaDestino)) &&
		((colunaOrigem+1 == colunaDestino) || (colunaOrigem-1 == colunaDestino) || (colunaOrigem == colunaDestino))){
		return true;
	}
	
	return false;
}

//O atributo capturada é trocado para true.
void Rei::captura(){
	capturada = true;
}

char Rei::desenha(){
	//Se for preta é maiúsculo.
	if(cor) return 'R';
	
	return 'r';
}

//Retorna true caso a peça esteja capturada.
bool Rei::getCapturada(){
	return capturada;
}
