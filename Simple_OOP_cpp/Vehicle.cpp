#include <iostream>
using namespace std;
#include "Vehicle.h"
#include "Transport_Method.h"
#include "Owner.h"
#include "Audi.h"
#include "Porsche.h"
#include "S8.h"
int Vehicle::Vehicles_Passed = 0;
void Vehicle::transport_method()
{
	cout << "Abstract Function in Vehicle" << endl;
}
void Vehicle::set_name(string name)
{
	Owner.set_name(name);
	cout << "Owner of vehicle is " << name<<endl;
}
void Vehicle::set_age(double age)
{
	Owner.set_age ( age);
	cout << "Age of owner of vehicle is " << age << endl;
}
int Vehicle:: get_number_of_vehicles_passed()
{ 
	return Vehicles_Passed;
}
void Vehicle::set_vehicle_type(string vt)
{
	Vehicle_Type = vt;
}
string Vehicle::get_vehicle_type()
{
	return Vehicle_Type;
}
void Vehicle::set_plate_number(string pn)
{
	Plate_Number = pn;
}
string Vehicle::get_plate_number()
{
	return Plate_Number;
}
void Vehicle::set_fuel_type(string ft)
{
	Fuel_Type = ft;
}
string Vehicle::get_fuel_type()
{ 
	return Fuel_Type; 
}
void Vehicle::set_poluation(string pol)
{
	Poluation=pol;
}
string Vehicle::get_poluation()
{ 
	return Poluation; 
}
void Vehicle::set_year_of_fabrication(double yf)
{ 
	Year_Of_Fabrication = yf;
}
double Vehicle::get_year_of_fabrication()
{
	return Year_Of_Fabrication;
};
void Vehicle::set_kilometre(double km)
{
	Kilometres = km;
}
double Vehicle::get_kilometre()
{
	return Kilometres;
};
void Vehicle::set_value(double val)
{
	Value = val;
}
double Vehicle::get_value()
{
	return Value;
}
void Vehicle::set_cubic_capacity(double cc)
{
	Cubic_Capacity = cc; 
}
double Vehicle::get_cubic_capacity()
{ 
	return Cubic_Capacity;
};
Vehicle::Vehicle(string vt, string ft, string pol, double yf, double km, double cc) :Vehicle_Type{ vt },Fuel_Type { ft }, Poluation{ pol }, Year_Of_Fabrication{ yf }, Kilometres{ km }, Cubic_Capacity{ cc }
{
	//cout << "All parameters" << endl;
	++Vehicles_Passed;
}
Vehicle::Vehicle(string vt, string ft, string pol , double yf) : Vehicle{vt,ft,pol,yf,0,0}
{
	//cout << "Four parameters" << endl;
	++Vehicles_Passed;
}
Vehicle::Vehicle(string vt, string ft, string pol):Vehicle{vt,ft,pol,0,0,0 }
{
	//cout << "Three parameters" << endl;
	++Vehicles_Passed;
}
Vehicle::Vehicle(): Vehicle{"Default","Default","Default",0,0,0}
{
	//cout << "No parameter" << endl;
	++Vehicles_Passed;
}
Vehicle::~Vehicle()
{
	//cout << "Destroing " << Vehicle_Type << endl;
	--Vehicles_Passed;
}
int main()
{
	{
		Vehicle Vehicle_1;
		Vehicle Vehicle_2("Bike","Diesel", "Euro3");
		Vehicle Vehicle_3("Truck","Petrol","Euro4",2001);
		Vehicle Vehicle_4("Car","Diesel", "Euro5", 2018, 0, 2500);
	}
	Vehicle *Vehicle_5 = new Vehicle;
	(*Vehicle_5).set_fuel_type("Petrol");
	cout << "The fuel type is: " << (*Vehicle_5).get_fuel_type() << endl;
	cout << "The number of vehicles is: " << Vehicle::get_number_of_vehicles_passed()<<endl;
	Vehicle *Audi_2 = new Audi;
	Audi Audi_1;
	Audi_1.set_tunning_type("MTM");
	cout << "The tunning type is: " << Audi_1.get_tunning_type() << endl;
	Vehicle *Porsche_2 = new Porsche;
	Porsche Porsche_1;
	Porsche_1.set_tunning_type("Mansory");
	cout<< "The tunning type is: " << Porsche_1.get_tunning_type() << endl;
	Vehicle *S8_2 = new S8;
	S8 S8_1;
	S8_1.set_sline("Yes");
	cout << "Does the car have the S-Line pack? " << S8_1.get_sline() << endl;
	cout << "static" << endl;
	(*Vehicle_5).set_name("Marcus");
	(*Audi_2).set_name("Cornel");
	(*Porsche_2).set_name("Cosmin");
	(*S8_2).set_name("Marian");
	cout << "dynamic" << endl;
	(*Vehicle_5).set_age(20);
	(*Audi_2).set_age(24);
	(*Porsche_2).set_age(30);
	(*S8_2).set_age(36);
	cout << "abstract" << endl;
	(*Vehicle_5).transport_method();
	(*Audi_2).transport_method();
	(*Porsche_2).transport_method();
	(*S8_2).transport_method();
	delete Vehicle_5;
	delete Audi_2;
	delete Porsche_2;
	delete S8_2;
	return 0;
} 