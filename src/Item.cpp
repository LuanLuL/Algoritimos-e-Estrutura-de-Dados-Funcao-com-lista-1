#include "Item.hpp"

Item::Item(){
	this->value = "";
	this->prox = NULL;
}

Item::Item(string value){
	this->value = value;
	this->prox = NULL;
}

string Item::getValue(){
	return this->value;
}

void Item::setValue(string value){
	this->value = value;
}

Item* Item::getProx(){
	return this->prox;
}

void Item::setProx(Item* prox){
	this->prox = prox;
}

bool Item::checkNull(){
	bool boolReturn = false;
	
	if(strcmp(this->value.c_str(), "") == 0){
		boolReturn = true;
	}
	return boolReturn;
}
