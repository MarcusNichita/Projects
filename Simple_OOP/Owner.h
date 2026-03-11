#pragma once
#include <iostream>
using namespace std;
class Owner
{
private:
	string Name;
	double Age;
public:
	void set_name(string name);
	string get_name();
	void set_age(double age);
	double get_age();
};