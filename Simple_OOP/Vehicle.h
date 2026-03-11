#pragma once
#include <iostream>
using namespace std;
#include "Owner.h"
class Vehicle
{
private:
	static int Vehicles_Passed;
	string Fuel_Type;
	string Poluation;
	double Year_Of_Fabrication;
	double Kilometres;
	double Cubic_Capacity;
protected:
	double Value;
	Owner Owner;
public:
	string Vehicle_Type;
	string Plate_Number;
	void set_name(string name);
	virtual void set_age(double age);
	virtual void transport_method();

	static int get_number_of_vehicles_passed();
	void set_vehicle_type(string vt);
	string get_vehicle_type();
	void set_plate_number(string pn);
	string get_plate_number();
	void set_fuel_type(string ft);
	string get_fuel_type();
	void set_poluation(string pol);
	string get_poluation();
	void set_year_of_fabrication(double yf);
	double get_year_of_fabrication();
	void set_kilometre(double km);
	double get_kilometre();
	void set_value(double val);
	double get_value();
	void set_cubic_capacity(double cc);
	double get_cubic_capacity();
	Vehicle(string vt, string ft, string pol, double yf, double km, double cc );
	Vehicle(string vt, string ft, string pol, double yf);
	Vehicle(string vt, string ft, string pol);
	Vehicle();
	virtual ~Vehicle();
};