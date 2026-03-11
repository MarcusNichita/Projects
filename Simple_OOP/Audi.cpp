#include <iostream>
using namespace std;
#include "Audi.h"
void Audi::transport_method()
{
	cout << "Abstract Function in Audi" << endl;
}
void Audi::set_name(string name)
{
	Owner.set_name(name);
	cout << "Owner of Audi is " << name << endl;
}
void Audi::set_age(double age)
{
	Owner.set_age(age);
	cout << "Age of owner of Audi is " << age << endl;
}
void Audi::set_tunning_type(string tt)
{
	Tunning_Type = tt;
}
string Audi::get_tunning_type()
{
	return Tunning_Type;
}
void Audi::set_tunning_price(double tp)
{
	Tunning_Price = tp;
}
double Audi::get_tunning_price()
{
	return Tunning_Price;
}
void Audi::set_manufacturer_location(string ml)
{
	Manufacturer_Location = ml;
}
string Audi::get_manufacturer_location()
{
	return Manufacturer_Location;
}
void Audi::set_value(double val)
{
	val = val + Tunning_Price;
	Vehicle::set_value(val);
}