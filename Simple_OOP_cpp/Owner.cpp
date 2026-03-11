#include <iostream>
using namespace std;
#include "Owner.h"
void Owner::set_name(string name)
{
	Name = name;
}
string Owner::get_name()
{
	return Name;
}
void Owner::set_age(double age)
{
	Age = age;
}	
double Owner::get_age()
{
	return Age;
}