#include "Torre.h"
#include "Cavalo.h"
#include "Bispo.h"
#include "Dama.h"
#include "Rei.h"
#include "Peao.h"

int main(){
	
	//Iremos testar todas as classes específicas.
	//Observe que as classes específicas estão usando o seus devidos construtores.
	Torre torre(0);
	Cavalo cavalo(0);
	Bispo bispo(0);
	Dama dama(0);
	Rei rei(0);
	Peao peaoBranco(0);
	Peao peaoPreto(1);
	int ocorrenciaCorretas = 0;
	int opc = 0;
	int linhaOrigem = 3, colunaOrigem =4;
	
	cout<<"\nTestar classes específicas"<<endl;
	cout<<"1. Torre\n2. Cavalo\n3. Bispo\n4. Dama\n5. Rei\n6. Peao Branco\n7. Peao Preto\n8. Trocar posição inicial\n0. Sair\n"<<endl<<endl;
	
	do{
		cin>>opc;
		switch(opc){
			case 1:
				cout<<"Testando a classe Torre."<<endl;
					for(int i = 0; i < 8; i++){
							for(int j = 0; j < 8; j++){
								//Colocando a torre perto do centro do tabuleiro ((3,4) = (5,d)).
								if(torre.checaMovimento(linhaOrigem,colunaOrigem,i,j) &&  !(linhaOrigem == i && colunaOrigem == j)){
									cout<<"Moveu de ("<<linhaOrigem<<","<<colunaOrigem<<") para: ("<<i<<","<<j<<")"<<endl;
									ocorrenciaCorretas++;
								}
							}
					}
				cout<<"Apartir da posição 3,4 na matriz a torre poderia se mover para "<<ocorrenciaCorretas<<" possíveis posições."<<endl<<endl;;
			break;
			
			case 2:
				cout<<"Testando a classe Cavalo."<<endl;
				ocorrenciaCorretas = 0;
					for(int i = 0; i < 8; i++){
							for(int j = 0; j < 8; j++){
								//Colocando a torre perto do centro do tabuleiro ((3,4) = (5,d)).
								if(cavalo.checaMovimento(linhaOrigem,colunaOrigem,i,j) &&  !(linhaOrigem == i && colunaOrigem == j)){
									cout<<"Moveu de ("<<linhaOrigem<<","<<colunaOrigem<<") para: ("<<i<<","<<j<<")"<<endl;
									ocorrenciaCorretas++;
								}
							}
					}
				cout<<"Apartir da posição 3,4 na matriz o cavalo poderia se mover para "<<ocorrenciaCorretas<<" possíveis posições."<<endl<<endl;
			break;
			
			
			case 3:
				cout<<"Testando a classe Bispo."<<endl;
				ocorrenciaCorretas = 0;
					for(int i = 0; i < 8; i++){
							for(int j = 0; j < 8; j++){
								//Colocando a torre perto do centro do tabuleiro ((3,4) = (5,d)).
								if(bispo.checaMovimento(linhaOrigem,colunaOrigem,i,j) &&  !(linhaOrigem == i && colunaOrigem == j)){
									cout<<"Moveu de ("<<linhaOrigem<<","<<colunaOrigem<<") para: ("<<i<<","<<j<<")"<<endl;
									ocorrenciaCorretas++;
								}
							}
					}
				cout<<"Apartir da posição 3,4 na matriz o bispo poderia se mover para "<<ocorrenciaCorretas<<" possíveis posições."<<endl<<endl;
			break;
			
			case 4:
				ocorrenciaCorretas = 0;
				cout<<"Testando a classe Dama."<<endl;
				ocorrenciaCorretas = 0;
					for(int i = 0; i < 8; i++){
							for(int j = 0; j < 8; j++){
								//Colocando a torre perto do centro do tabuleiro ((3,4) = (5,d)).
								if(dama.checaMovimento(linhaOrigem,colunaOrigem,i,j) &&  !(linhaOrigem == i && colunaOrigem == j)){
									cout<<"Moveu de ("<<linhaOrigem<<","<<colunaOrigem<<") para: ("<<i<<","<<j<<")"<<endl;
									ocorrenciaCorretas++;
								}
							}
					}
				cout<<"Apartir da posição 3,4 na matriz a dama poderia se mover para "<<ocorrenciaCorretas<<" possíveis posições."<<endl<<endl;
			break;
			
			case 5:
				cout<<"Testando a classe Rei."<<endl;
				ocorrenciaCorretas = 0;
					for(int i = 0; i < 8; i++){
							for(int j = 0; j < 8; j++){
								//Colocando a torre perto do centro do tabuleiro ((3,4) = (5,d)).
								if(rei.checaMovimento(linhaOrigem,colunaOrigem,i,j) &&  !(linhaOrigem == i && colunaOrigem == j)){
									cout<<"Moveu de ("<<linhaOrigem<<","<<colunaOrigem<<") para: ("<<i<<","<<j<<")"<<endl;
									ocorrenciaCorretas++;
								}
							}
					}
				cout<<"Apartir da posição 3,4 na matriz a rei poderia se mover para "<<ocorrenciaCorretas<<" possíveis posições."<<endl<<endl;
			
			break;
			
			case 6:
				cout<<"Testando a classe peão branco."<<endl;
				ocorrenciaCorretas = 0;
					for(int i = 0; i < 8; i++){
							for(int j = 0; j < 8; j++){
								//Colocando a torre perto do centro do tabuleiro ((3,4) = (5,d)).
								if(peaoBranco.checaMovimento(linhaOrigem,colunaOrigem,i,j) &&  !(linhaOrigem == i && colunaOrigem == j)){
									cout<<"Moveu de ("<<linhaOrigem<<","<<colunaOrigem<<") para: ("<<i<<","<<j<<")"<<endl;
									ocorrenciaCorretas++;
								}
							}
					}
				cout<<"Apartir da posição 3,4 na matriz o peão branco poderia se mover para "<<ocorrenciaCorretas<<" possíveis posições."<<endl<<endl;
			
			break;
			
			case 7:
				cout<<"Testando a classe peão preto."<<endl;
				ocorrenciaCorretas = 0;
					for(int i = 0; i < 8; i++){
							for(int j = 0; j < 8; j++){
								//Colocando a torre perto do centro do tabuleiro ((3,4) = (5,d)).
								if(peaoPreto.checaMovimento(linhaOrigem,colunaOrigem,i,j) &&  !(linhaOrigem == i && colunaOrigem == j)){
									cout<<"Moveu de ("<<linhaOrigem<<","<<colunaOrigem<<") para: ("<<i<<","<<j<<")"<<endl;
									ocorrenciaCorretas++;
								}
							}
					}
				cout<<"Apartir da posição 3,4 na matrz o peão preto poderia se mover para "<<ocorrenciaCorretas<<" possíveis posições."<<endl<<endl;
			
			break;
			
			default: cout<<"Opção inválida"<<endl<<endl;
		}
	}while(opc);
	return 0;
}



