#pragma once
#include <iostream>
using namespace std;
#include"Vehicle.h"
class Audi : public Vehicle
{
private:
	string Tunning_Type;
	double Tunning_Price;
protected:
	string Manufacturer_Location;
public:
	void set_name(string name);
	virtual void set_age(double age);
	virtual void transport_method();

	void set_tunning_type(string tt);
	string get_tunning_type();
	void set_tunning_price(double tp);
	double get_tunning_price();
	void set_manufacturer_location(string ml);
	string get_manufacturer_location();
	void set_value(double val);
};