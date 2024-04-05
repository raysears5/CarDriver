// CarDriver.cpp 
// Ray Sears J00710706
#include <iostream> 
#include <string>
#include "Car.h" 
#include "DoublyLinkedList.h"
#include <limits>     // numeric_limits
#include "Node.h"
#include <conio.h>


void displayArray(Car array[], int length);
void pressAnyKey();
void getUserInput(string& model, string& brand, int& year);
using namespace std;

int main()
{
	/*
	
	// Declare, construct, and display list object.
	const int LENGTH = 5;
	Car Garage[LENGTH];
	Garage[0] = Car("911 GT3RS", "Porsche", 2019);
	Garage[1] = Car("242", "Volvo", 1990);
	Garage[2] = Car("S60", "Volvo", 2009);
	Garage[3] = Car("S10", "Chevrolet", 2004);
	Garage[4] = Car("Panamera", "Porsche", 2019);
	cout << endl << endl;
	
	// print using overloaded insertion operater << function
	displayArray(Garage, LENGTH);

	*/
	// Declare, construct, and display list object.

	DoublyLinkedList carList;

	// add a few records to work with
	carList.addFront(Car("Panamera", "Porsche", 2019));
	carList.addFront(Car("S60", "Volvo", 2009));

	carList.displayList();
	pressAnyKey();
	cout << "Ray Sears J00710706" << endl;
	system("pause");
	cout << endl;

	// Display menu for user choice
	int choice = 0;
	bool keepGoing = true;
	while (keepGoing) {
		cout << endl
			<< "---------------------------------------------------------------------\n"
			<< " Select an option from the menu below\n"
			<< " by entering the number of the choice\n"
			<< "---------------------------------------------------------------------\n"
			<< "\t1\tAdd a car to the front of the list\n"
			<< "\t2\tAdd a car to the back of the list\n"
			<< "\t3\tSearch for the list of cars by brand\n"
			<< "\t4\tEdit a specific item in the list\n"
			<< "\t5\tDelete a specific item from the list\n"
			<< "\t6\tDisplay all car in the list front to back\n"
			<< "\t7\tDisplay all car in the list back to front\n"
			<< "\t8\Display the car at the front of the list\n"
			<< "\t9\tEnd program\n"
			<< "---------------------------------------------------------------------\n\n"
			<< "Enter your choice : ";

		// Get user choice and process.
		cin >> choice;
		// check for bad input
		if (cin.fail()) {
			cin.clear();
			cin.ignore(std::numeric_limits<streamsize>::max(), '\n');
			cout << "\n\n\tOnly integer input please!. \n";
			pressAnyKey();
			continue;   // display the menu again
		}

		// remove newline character in case we call getline()
		std::cin.ignore(std::numeric_limits<streamsize>::max(), '\n');
		switch (choice) {
			// selections 2,3 and 4 are not implemented
			// aka Under Construction
		case 1:
		{  // added insert node at head for demonstration --ccd
			string model, brand;
			int year;
			getUserInput(model, brand, year);
			carList.addFront(Car(model, brand, year));
			pressAnyKey();
			break;
		}

		case 5:	// Display car list.
		{
			carList.displayList();
			pressAnyKey();
			break;
		}
		case 6: // Quit program.
		{
			keepGoing = false;		// Exit from menu loop and program.
			cout << "The program is now ending.\n";
			pressAnyKey();
			break;
		}
		default: // Catch all respones that are currently not ready.
		{
			cout << "That option is currently not available\n";
			pressAnyKey();
			break;
		}
		} // end switch
	} // end while	

	return 0;
}

// Display values of array - each on their own line.
void displayArray(Car array[], int length)
{
	int i = 0;
	while (i < length)
	{
		cout << array[i] << endl; 
			i++;
	}
	cout << endl;
}

// Press any key to continue.
void pressAnyKey() {
	char ch = '\0';
	cout << "Press any key to continue" << endl << endl;
	ch = _getch();		// Waits and gets next character entered.	
	system("cls");	       // clear the screen on Windows... system("clear") on linux
	return;
}



void getUserInput(string& title, string& name, int& year) {
	cout << endl << endl;

	cout << "\nCar Model: ";
	getline(std::cin, title);
	cout << "\nBrand of Car: ";
	getline(std::cin, name);
	cout << "\nYear of Car: ";
	cin >> year;
	return;
}