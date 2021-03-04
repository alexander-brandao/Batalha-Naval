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

//funcao que inicia o tabuleiro
void iniciaTabuleiro(char tabuleiro[10][10]) {

	// variaveis auxiliares para percorrer linhas e colunas
	int linha, coluna;

	//(precorrer a matriz) um "for" para linhas e um "for" para colunas
	for (linha = 0; linha < 10; linha++) {
		for (coluna = 0; coluna < 10; coluna++) {
			//inserindo "A" agua em todas as linhas e colunas
			tabuleiro[linha][coluna] = 'A';
		}
	}
}

// funcao exibe tabuleiro
void exibeTabuleiro(char tabuleiro[10][10]) {
	
	// variaveis auxiliares para percorrer linhas e colunas
	int linha, coluna;
	// Exibe o tabuleiro
	for (linha = 0; linha < 10; linha++) {
		for (coluna = 0; coluna < 10; coluna++) {
			//inserindo "A" agua em todas as linhas e colunas
			cout << " " << tabuleiro[linha][coluna];
		}
		cout << "\n";
	}
}

// funcao jogo
void jogo() {
	
	// matriz de caractere de 10 linhas e 10 colunas
	char tabuleiro[10][10];
	// variaveis auxiliares para percorrer linhas e colunas
	int linha, coluna;

	// funcao inicia tabuleiro
	iniciaTabuleiro(tabuleiro);

	// Exibe o tabuleiro
	exibeTabuleiro(tabuleiro);

}


//funcao que inicializa o jogo
void menuInicial() {

	// variavel opçao escolhida pelo usuario
	int opcao = 0;

	//enquanto o jogador nao digita uma opcao valida, mostra o menu novamente:
	while (opcao < 1 || opcao > 3) {
		limpaTela();
		// area grafica do menu
		cout << "Bem vindo ao Jogo Batalha Naval";
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
			jogo();
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