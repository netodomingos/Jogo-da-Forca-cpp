#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
		
	char palavra[30];
	char letra[1];
	char secreta[30];
	
	int tamanho;
	int chances;
	int acertos;
	int i;
	
	bool acerto = false;
	
//	Constrollers

	chances = 6;
	tamanho = 0;
	i = 0;
	acerto = false;
	acertos = 0;
	
//	Inicio da estrutura do Jogo!
	
	cout << "Seja Bem Vindo ao Jogo da Forca!\n";
	cout << "( Recomendo que os advinhadores fiquem de olhos fechados! ) \n\n";
	
	cout << "Digite a palavra secreta: ";
	cin >> palavra;

//	Limpa a tela após a inserção da palavra secreta!
	system("cls");
	
	while(palavra[i] != '\0'){
		i++;
		tamanho++;
	}
	
	for(i = 0; i < 30; i++){
		secreta[i] = '-';
	}
	
	while(( chances > 0 ) && ( acertos < tamanho )){
		cout << "CHANCES RESTANTES: " << chances << "\n\n";
		
		cout << "PALAVRA SECRETA: ";
		for( i = 0; i < tamanho; i++ ){
			cout << secreta[i];
		}
		
		cout << "\n\nDigite uma Letra: ";
		cin >> letra[0];
		
		for( i = 0; i < tamanho; i++ ){
			if( palavra[i] == letra[0] ){
				
				acerto = true;
				secreta[i] = palavra[i];
				acertos++;
			}
		}
		if( !acerto ){
			
			chances--;
		}
		acerto = false;
		system("cls");
	}
	
	
	if( acertos == tamanho ){
		cout << "You Win!!! \n\n";
		cout << "A palavra secreta era: " << secreta << " \n\n";
	} else{
		cout << "You Lose! :(";
		cout << "A palavra secreta era: " << secreta << " \n\n";
	}
	
	return 0;
}
