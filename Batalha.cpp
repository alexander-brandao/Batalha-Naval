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
void iniciaTabuleiro(char tabuleiro[10][10], char mascara[10][10]) {

	// variaveis auxiliares para percorrer linhas e colunas
	int linha, coluna;

	//(precorrer a matriz) um "for" para linhas e um "for" para colunas
	for (linha = 0; linha < 10; linha++) {
		for (coluna = 0; coluna < 10; coluna++) {
			//inserindo "A" agua em todas as linhas e colunas
			tabuleiro[linha][coluna] = 'A';
			mascara[linha][coluna] = '*';
		}
	}
}

// funcao exibe tabuleiro
void exibeTabuleiro(char tabuleiro[10][10], char mascara[10][10]) {
	
	// variaveis auxiliares para percorrer linhas e colunas
	int linha, coluna;
	// Exibe o tabuleiro
	for (linha = 0; linha < 10; linha++) {
		for (coluna = 0; coluna < 10; coluna++) {
			//inserindo "A" agua em todas as linhas e colunas
			// cout << " " << tabuleiro[linha][coluna];
			cout << " " << mascara[linha][coluna];
		}
		cout << "\n";
	}
}

// funcao jogo
void jogo() {
	
	// 2 matrizes de caracteres de 10 linhas e 10 colunas, uma para a resposta e outra para a mascara
	char tabuleiro[10][10], mascara[10][10];

	// variaveis auxiliares para percorrer linhas e colunas
	int linha, coluna;

	// variaveis auxiliares para encontrar a escolha do jogador
	int linhaJogada, colunaJogada;

	// variavel auxiliar para estado de jogo, estado = 1 jogo acontecendo, estado = 0 fim de jogo
	int estadoDeJogo = 1;
	// funcao inicia tabuleiro
	iniciaTabuleiro(tabuleiro, mascara);

	while (estadoDeJogo = 1) {
		limpaTela();
		
		// Exibe o tabuleiro
		exibeTabuleiro(tabuleiro, mascara);

		cout << "\nDigite uma linha: ";
		cin >> linhaJogada;
		cout << "\nDigite uma coluna: ";
		cin >> colunaJogada;

		// revela o que esta no tabuleiro
		mascara[linhaJogada][colunaJogada] = tabuleiro[linhaJogada][colunaJogada];
	}

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