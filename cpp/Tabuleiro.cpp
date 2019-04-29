#include "Tabuleiro.h"

using std::cout;
using std::endl;


/*O construtor chama o método iniciarTabuleiro que organiza as peças na posição correta do início do jogo.*/
Tabuleiro::Tabuleiro(){
	iniciarTabuleiro();
}

//Imprimi o tabuleiro e pinta as peças pretas.
void Tabuleiro::imprimirTabuleiro(){
	//system("clear"); //Vai ser usado para dar uma falsa impressão de dinamismo ao jogo.
	cout<<endl<<endl<<"						";
	cout<<"    a   b   c   d   e   f   g   h"<<endl;
	cout<<"						";
	cout<<"   _______________________________ "<<endl;
	//cout<<"  |---|---|---|---|---|---|---|---|"<<endl;
	for(int i = 0; i < tamanho; i++){

		cout<<"						";
		cout<<tamanho - i<<" ";
		
		for(int j = 0; j < tamanho; j++){
			cout<<"| ";
			if(isupper(tab[i][j].getPeca()))cout<<"\033[1;30m"<<tab[i][j].getPeca()<<"\033[0m";
			else cout<<tab[i][j].getPeca();
			cout<<" ";
			
		}
		cout<<"|"<<endl;
				cout<<"						";
		cout<<"  |___|___|___|___|___|___|___|___|"<<endl;
		//cout<<"  |---|---|---|---|---|---|---|---|"<<endl;
			
	}
	cout<<endl<<endl;
	
	
}

//Organiza o tabuleiro ao início do jogo.
void Tabuleiro::iniciarTabuleiro(){
	tab[0][0].setPeca('T');
	tab[0][1].setPeca('C');
	tab[0][2].setPeca('B');
	tab[0][3].setPeca('D');
	tab[0][4].setPeca('R');
	tab[0][5].setPeca('B');
	tab[0][6].setPeca('C');
	tab[0][7].setPeca('T');
					
	for(int j = 0; j < tamanho; j++){ 
		tab[1][j].setPeca('P');
		tab[6][j].setPeca('p');
	}
	
	tab[7][0].setPeca('t');
	tab[7][1].setPeca('c');
	tab[7][2].setPeca('b');
	tab[7][3].setPeca('r');
	tab[7][4].setPeca('d');
	tab[7][5].setPeca('b');
	tab[7][6].setPeca('c');
	tab[7][7].setPeca('t');
	
	for(int i = 2; i < tamanho-2; i++){
			for(int j = 0; j <tamanho; j++){
				tab[i][j].setPeca(' ');
			}
	}	
}
