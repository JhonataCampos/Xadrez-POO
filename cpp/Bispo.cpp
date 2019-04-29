#include "Bispo.h"
#include <cmath>

//Construtor que inicializa o atributo cor e o atributo capturada para falso.
Bispo::Bispo(bool color):cor(color){
	capturada = false;
}

/*Esse método identifica uma constante K para linha e para coluna, e se o módulos delas serem iguais,
 * então a peça está andando corretamente. */
bool Bispo::checaMovimento(int linhaOrigem, int colunaOrigem, int linhaDestino, int colunaDestino){
	
	if(fabs(linhaOrigem - linhaDestino) == fabs(colunaOrigem - colunaDestino)){
		return true;
	}
	
	return false;
}
//O atributo capturada é trocado para true.
void Bispo::captura(){
	capturada = true;
}

char Bispo::desenha(){
	//Se for preta é maiúsculo.
	if(cor) return 'B';
	
	return 'b';
}

//Retorna true caso a peça esteja capturada.
bool Bispo::getCapturada(){
	return capturada;
}
