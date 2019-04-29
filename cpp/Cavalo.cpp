#include "Cavalo.h"

Cavalo::Cavalo(bool color):cor(color){
	capturada = false;
}

bool Cavalo::checaMovimento(int linhaOrigem, int colunaOrigem, int linhaDestino, int colunaDestino){
	
	if( //Não irei otimizar nenhuma comparação na primeira fase.
		//Aqui possui todas as 8 possíveis possições que um cavalo pode andar em L
	(linhaOrigem+2 == linhaDestino && colunaOrigem+1 == colunaDestino) ||
	(linhaOrigem+1 == linhaDestino && colunaOrigem+2 == colunaDestino) ||
	(linhaOrigem-1 == linhaDestino && colunaOrigem+2 == colunaDestino) ||
	(linhaOrigem-2 == linhaDestino && colunaOrigem+1 == colunaDestino) ||
	(linhaOrigem-2 == linhaDestino && colunaOrigem-1 == colunaDestino) ||
	(linhaOrigem-1 == linhaDestino && colunaOrigem-2 == colunaDestino) ||
	(linhaOrigem+1 == linhaDestino && colunaOrigem-2 == colunaDestino) ||
	(linhaOrigem+2 == linhaDestino && colunaOrigem-1 == colunaDestino)
	) {
		return true;
	}
	
	return false;
}

//O atributo capturada é trocado para true.
void Cavalo::captura(){
	capturada = true;
}

char Cavalo::desenha(){
	//Se for preta é maiúsculo.
	if(cor) return 'C';
	
	return 'c';
}

//Retorna true caso a peça esteja capturada.
bool Cavalo::getCapturada(){
	return capturada;
}

