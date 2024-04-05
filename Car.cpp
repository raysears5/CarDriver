//Car.cpp
//Ray Sears J00710706
#include "Car.h"

using namespace std;

// Default constructor.
Car::Car() {
	setModel("");
	setBrand("");
	setYear(0);
}

Car::Car(string theModel, string theBrand, int theYear)
{
	setModel(theModel);
	setBrand(theBrand);
	setYear(theYear);
}

// Get and set methods.
string Car::getModel() const 
{
	return Model; 
} 
string Car::getBrand() const
{
	return Brand;
}
int Car::getYear() const
{
	return year;
}
void Car::setModel(string theModel)
{
	Model = theModel;
}
void Car::setBrand(string theBrand)
{
	Brand = theBrand;
}
// Control data and flag bad data with default value.
void Car::setYear(int theYear)
{
	if (theYear < 0)
	{
		year = 0;
	}
	else
	{
		year = theYear;
	}
}
// Utility member functions.
void Car::print()
{
	cout << Model << " by " << Brand << " made in " << year;
	cout << "This is a " << year << Brand << Model << endl;
	

}
// operator overloading
ostream& operator << (ostream& out, const Car& theCar)
{
	out << theCar.Model << " by " << theCar.Brand << " made in " <<
		theCar.year << endl;
	
	return out;
}
