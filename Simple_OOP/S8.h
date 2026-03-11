#pragma once
#include <iostream>
using namespace std;
#include"Audi.h"
class S8 : public Audi
{
private:
	string S_line;
	string Quattro;
public:
	void set_name(string name);
	virtual void set_age(double age);
	virtual void transport_method();

	void set_sline(string sline);
	string get_sline();
	void set_quattro(string qt);
	string get_quattro();
};