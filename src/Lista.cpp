#include "Lista.hpp"

Lista::Lista(){
	this->name = "";
	this->maxSize = -1;
	this->primeiro = NULL;
	this->ultimo = NULL;
}

Lista::Lista(string name, int maxSize){
	this->name = name;
	this->maxSize = maxSize;
	this->primeiro = NULL;
	this->ultimo = NULL;
}

Lista::Lista(string name, int maxSize, string value){
	this->name = name;
	this->maxSize = maxSize;
	this->primeiro = new Item(value);
	this->ultimo = primeiro;
}

string Lista::getName(){
	return this->name;
}

void Lista::setName(string name){
	this->name = name;
}

int Lista::getMaxSize(){
	return this->maxSize;
}

void Lista::setMaxSize(int maxSize){
	this->maxSize = maxSize;
}

Item* Lista::getPrimeiro(){
	return this->primeiro;
}

void Lista::setPrimeiro(Item* primeiro){
	this->primeiro = primeiro;
}

Item* Lista::getUltimo(){
	return this->ultimo;
}

void Lista::setUltimo(Item* ultimo){
	this->ultimo = ultimo;
}

bool Lista::checkEmpty(){
	return (this->primeiro == NULL);
}

int Lista::getSize(){
	if(checkEmpty()){
		return 0;
	}
	
	Item* aux = primeiro;
	int size = 0;
	
	do{
		size++;		
		aux = aux->getProx();
	}while(aux != NULL);
	
	return size;
}

void Lista::insertFinal(string value){
	Item* newItem = new Item(value);
	
	if(getSize() >= this->maxSize){
		cout << "\n\nERRO...ERRO...A lista " << this->name << " está cheia...ERRO...ERRO\n\n";
	}
	else{
		if(checkEmpty()){
			this->primeiro = newItem;
			this->ultimo = newItem;
		}
		else{
			this->ultimo->setProx(newItem);
			this->ultimo = newItem;
		}
	}
}

void Lista::printList(){
	if(checkEmpty()){
		cout << "\nA lista " << this->name << " está vazia.";
	}
	else{
		Item* aux = this->primeiro;
		
		cout << "\n\nLista - " << this->name << "\n";
		
		do{
			if(!(aux->checkNull())){
				cout << "\n" << aux->getValue();
			}		
			aux = aux->getProx();
		}while(aux != NULL);
	}

	cout << "\n\n------------------------------------------\n";
}

void Lista::clearList(){
	Item* aux = this->primeiro->getProx();

	do{
		free(this->primeiro);
		this->primeiro = aux;
		aux = this->primeiro->getProx();
	}while(primeiro != ultimo);
	
	free(this->primeiro);
	this->primeiro = NULL;
	this->ultimo = NULL;
}

void Lista::deleteTheRepeated(){
	Item* aux = this->primeiro;
	
	for(int i=1;i<=getSize();i++){
		Item* auxTwo = this->primeiro;
		
		for(int j=1;j<=getSize();j++){
			if((strcmp(aux->getValue().c_str(), auxTwo->getValue().c_str()) == 0) && (j != i)){
				auxTwo->setValue("");
			}
			
			auxTwo = auxTwo->getProx();
		}
		aux = aux->getProx();
	}

	cout << "\n-----> Repetições deletadas com sucesso!\n\n------------------------------------------\n";
}
