#pragma once
#include <iostream>
using namespace std;
#include"Vehicle.h"
class Porsche : public Vehicle
{
private:
	string Tunning_Type;
	double Tunning_Price;
public:
	void set_name(string name);
	virtual void set_age(double age);
	virtual void transport_method();

	void set_tunning_type(string tt);
	string get_tunning_type();
	void set_tunning_price(double tp);
	double get_tunning_price();
};