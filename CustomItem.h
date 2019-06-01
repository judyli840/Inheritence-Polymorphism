//CustomItem.h
//Derived from IceCreamItem.h

#ifndef CUSTOMITEM_H
#define CUSTOMITEM_H

#include "IceCreamItem.h"
#include <map>

class CustomItem : public IceCreamItem {
public:
	//Constructs custom ice cream order with sizes: small, medium, large
	//small: $3.00, medium: $5.00, large: $6.50
	CustomItem (std::string size);
	//deallocate memory from heap
	virtual ~CustomItem();
	// each topping has a weight of 1oz
	// each oz increases price of Customitem by $0.40
	void addTopping (std::string topping);

	//inherited virtual functions
	virtual std::string composeItem();
	virtual double getPrice();
private:
	std::map<std::string, int> toppings;

};

#endif
