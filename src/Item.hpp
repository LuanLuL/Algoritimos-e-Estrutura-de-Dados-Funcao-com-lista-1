#ifndef __ITEM_HPP
#define __ITEM_HPP

#include <iostream>
#include <cstring>

using namespace std;

class Item{
	private: 
		string value;
		Item *prox;
		
	public:
		Item();
		Item(string value);
		string getValue();
		void setValue(string value);
		Item* getProx();
		void setProx(Item* newProx);
		bool checkNull();
};
#endif
