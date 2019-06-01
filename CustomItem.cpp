//CustomItem.cpp
#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
#include <map>
#include "CustomItem.h"

using namespace std;

CustomItem::CustomItem (string size) : IceCreamItem(size) {
         if(size == "small")
		 price = 3;
         else if(size == "medium")
                 price = 5;
         else
                 price = 6.5;

}

CustomItem::~CustomItem() {

}

void CustomItem::addTopping (string topping) {
	bool same = false;
	map<string, int>::iterator i;
	for(i = toppings.begin(); i != toppings.end(); i++) {
		if (i->first == topping){
			same = true;
			i->second++;
		}
	}
	
	if (!same) {
		toppings.insert(pair<string, int>(topping, 1)); 
	}

	price += .4;
}

double CustomItem::getPrice() {
	return price;
}


string CustomItem::composeItem() {
	string out;
	out = "Custom Size: " + size + "\n" + "Toppings:" + "\n";
	

	map<string, int>::iterator i;
	for (i = toppings.begin(); i != toppings.end(); i++) {
		out += i->first + ": " + to_string(i->second) + " oz" + "\n";
	}
 	
	stringstream stream;
	stream << fixed << setprecision(2) << price;
	out += "Price: $" + stream.str() + "\n";

	return out;
}





	
