#include <iostream>
using std::string;
/*Essa é uma classe genérica para podermos fazer a implementação parcial do jogo, ou seja, ela está muito limitada.*/
class Jogador{
		private:
			string nome; 					//Nome do jogador.
			const bool cor; 				//Vai ser importante para definir a cor das peças do jogador.
		public:
			Jogador(bool color,string n); 	//Construtor que recebe a cor e o nome do jogador.
			Jogador(const Jogador &j);    	/*Construtor de cópia, foi necessário para poder inicializar os atributos 
											Jogador da classe Jogo.*/
			string getNome(); 				//Apenas retorna o nome do jogador.
};
