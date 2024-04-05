//Car.h
//Ray Sears J00710706

#pragma once
#ifndef Car_H
#define Car_H
#include<iostream>
#include<string>
using std::string;
using std::cout;
using std::endl;
using std::ostream;
// Class declaration for Car class
class Car
{
	friend ostream& operator << (ostream& out, const Car& theCar);

	// Member methods (generally public)
public: 
	// Default constructor
	Car(); 
		// Other constructors
		Car(string theModel, string theBrand, int theYear);
	
	string getModel() const;
	string getBrand() const;
	int getYear() const;
	void setModel(string theModel);
	void setBrand(string theBrand);
	void setYear(int Year);
	// Utility member functions
	void print();
	
private: 
	string Model;
	string Brand;
	int year;
};
#endif


