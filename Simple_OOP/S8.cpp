#include <iostream>
using namespace std;
#include "S8.h"
void S8::transport_method()
{
	cout << "Abstract Function in S8" << endl;
}
void S8::set_name(string name)
{
	Owner.set_name(name);
	cout << "Owner of S8 is " << name << endl;
}
void S8::set_age(double age)
{
	Owner.set_age(age);
	cout << "Age of owner of S8 is " << age << endl;
}
void S8::set_sline(string sline)
{
	S_line = sline;
}
string S8::get_sline()
{
	return S_line;
}
void S8::set_quattro(string qt)
{
	Quattro = qt;
}
string S8::get_quattro()
{
	return Quattro;
}