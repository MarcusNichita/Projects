#include <iostream>
using namespace std;
#include "Porsche.h"
void Porsche::transport_method()
{
	cout << "Abstract Function in Porsche" << endl;
}
void Porsche::set_name(string name)
{
	Owner.set_name(name);
	cout << "Owner of Porsche is " << name << endl;
}
void Porsche::set_age(double age)
{
	Owner.set_age(age);
	cout << "Age of owner of Porsche is " << age << endl;
}
void Porsche::set_tunning_type(string tt)
{
	Tunning_Type = tt;
}
string Porsche::get_tunning_type()
{
	return Tunning_Type;
}
void Porsche::set_tunning_price(double tp)
{
	Tunning_Price = tp;
}
double Porsche::get_tunning_price()
{
	return Tunning_Price;
}