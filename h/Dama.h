#include <iostream>


class Dama{
	private:
		bool capturada;//True se estiver capturada ou false se estiver livre.
		const bool cor; //True se a cor for preta ou false se a cor for branca.
	public:
		Dama(bool color);//Iniciamos a peça com a respectiva cor.
		char desenha();//Retorna um char com a letra da peça (a cor dela fará o retorno ser maiúscolo u minúsculo.)
		bool checaMovimento(int linhaOrigem, int colunaOrigem, int linhaDestino, int colunaDestino); //Checa se o movimento é válido
																									 //apenas dentro da matriz.
		void captura();//Captura a peça setando o atributo capturada.
		bool getCapturada(); //Retorna true caso a peça esteja capturada.
};
