#include <iostream>
#include <locale>
#include <fstream>
#include "Lista.hpp"
#include "Item.hpp"

#define MAX_SIZE 100

using namespace std;

int main() {
	
	system("chcp 1252");
	setlocale(LC_ALL, "Portuguese");
	
	string file;
	cout << "\nDigite o nome do arquivo onde a lista se encontra: ";
	cin >> file;
	
	ifstream inFile(file.c_str());
	
	if(!inFile){
		cerr << "\nERRO...ERRO...Não foi possível abrir o arquivo...ERRO...ERRO\n\nSaindo...\n";
		return -1;
	}

	Lista listNomes("Nomes", MAX_SIZE);
	string value;

	while(!inFile.eof()){
		inFile >> value;
		listNomes.insertFinal(value);
	}

	inFile.close();

	int op;

	do{
		cout << "\n1 - Imprimir lista\n2 - Retirar nomes repetidos\n3 - Inserir em espaço vazio\n4 - Sair\n\nEscolha uma opção: ";
		cin >> op;
	
		switch (op){
			case 1:
			{
				listNomes.printList();
				break;
			}
			case 2:
			{
				listNomes.deleteTheRepeated();
				break;
			}
			case 3:
			{
				string value;
				cout << "\nDigite o nome que deseja inserir: ";
				cin >> value;
				
				listNomes.insertInEmpty(value);
				break;
			}
			case 4:
			{
				cout << "\nSaindo...\n\n";
				break;
			}
			default: 
			{
				cerr << "\n\nERRO...ERRO...Opção inválida...ERRO...ERRO\n\n";
			}
		}
	
	}while(op != 4);
	
	return 0;
}

