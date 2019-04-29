#include "Jogador.h"

/*Como já foi explicado no Jogador.h temos dois construtores para diferentes ocasiões. */
Jogador::Jogador(bool color, string n):cor(color){ nome = n; }
Jogador::Jogador(const Jogador &j):cor(j.cor){ nome = j.nome; }

//Apenas retorna o nome.
string Jogador::getNome(){
		return nome;
}
