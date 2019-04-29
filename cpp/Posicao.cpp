#include "Posicao.h"

//Construtor simples que inicializa a peca com a posição vazia.
Posicao::Posicao(){
	peca = ' ';
}

//Métodos set e get.
void Posicao::setPeca(char p){	peca = p; }
char Posicao::getPeca(){	return peca; }
