#ifndef LISTA__HPP
#define LISTA__HPP
#include <iostream>
#include <stdlib.h>
#include<locale>
#include "Item.hpp"

using namespace std;

class Lista{
    private:
    	string name; //identifier
    	int maxSize;
    	Item* primeiro;
    	Item* ultimo;
    	
    public:
    	Lista(); //Create List NULL
    	Lista(string name, int maxSize); //Create List empty
    	Lista(string name,  int maxSize, string value); //Create List starting one value
    	string getName();
		void setName(string name);
		int getMaxSize();
		void setMaxSize(int maxSize);
		Item* getPrimeiro();
		void setPrimeiro(Item* primeiro);
		Item* getUltimo();
		void setUltimo(Item* ultimo);
		bool checkEmpty();
		int getSize();
		void insertFinal(string value);
		void printList();
    	void clearList();
    	void deleteTheRepeated();
    	void insertInEmpty(string value);
};

#endif
