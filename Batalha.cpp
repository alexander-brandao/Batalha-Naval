#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>

// atalho para escrita em c++
using namespace std;

//funcao que limpa tela
void limpaTela() {
	system("CLS");
}

//funcao que inicializa o jogo
void menuInicial() {

	// variavel opçao escolhida pelo usuario
	int opcao = 0;

	//enquanto o jogador nao digita uma opcao valida, mostra o menu novamente:
	while (opcao < 1 || opcao > 3) {
		limpaTela();
		// area grafica do menu
		cout << "Bem vindo ao Jogo";
		cout << "\n 1 - Jogar";
		cout << "\n 2 - Sobre";
		cout << "\n 3 - Sair";
		cout << "\n Escolha uma opcao e tecle Enter: ";
		// le a opcao do jogador
		cin >> opcao;

		// casos 
		switch (opcao)
		{

		case 1:

			break;
		case 2:
			cout << "Informacoes do jogo";
			break;
		case 3:
			cout << "\nAte mais!";
			break;

		default:
			break;
		}
	}

}

//funcao principal
int main() {
	
	menuInicial();
	

	return 0;
}