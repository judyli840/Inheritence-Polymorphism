//PreMadeItem.cpp
#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include "PreMadeItem.h"

using namespace std;

PreMadeItem::PreMadeItem (string name, string size) : IceCreamItem(size) {
	this->name = name;

	if (size == "small") 
		price = 4;
	else if (size == "medium")
		price = 6;
	else
		price = 7.5;
}

PreMadeItem::~PreMadeItem() {
}

string PreMadeItem::composeItem() {
	string out;
	out = "Pre-made Size: " + size + "\n";
	out += "Pre-made Item: " + name + "\n";
	stringstream stream;
	stream << fixed << setprecision(2) << price; 
	out += "Price: $" + stream.str() + "\n";
	return out;
}

double PreMadeItem::getPrice() {
	return price;
}
