//PreMadeItem.h
#ifndef PREMADEITEM_H
#define PREMADEITEM_H

#include "IceCreamItem.h"

class PreMadeItem : public IceCreamItem {
public: 
	//small: $4.00, medium: $6.00, large: $7.50
	PreMadeItem (std::string name, std::string size);
	virtual ~PreMadeItem();
	std::string composeItem();
	double getPrice();

protected:
	std::string name;


};

#endif
