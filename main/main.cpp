// including header file that contains all other header files
#include "Header.h"

// function to print main menu and get the choice number
void DisplayMenu(int& choice) {
	cout << "\n--------------------------------------------------------------------------------------------------- \n";
	cout << "=================================================================================================== \n\n";
	cout << "*                             SUPER-ADVANCED CALCULATOR                                                  * \n\n";
	cout << "=================================================================================================== \n";
	cout << "--------------------------------------------------------------------------------------------------- \n";
	cout << "\n\n\n";
	cout << "SELECT: \n";
	cout << "1. Arithimatical Operations \n";
	cout << "2. Trigonometry \n";
	cout << "3. Binary \n";
	cout << "4. Geometry \n";
	cout << "0. Exit \n";
	cin >> choice;

	if (choice > 4 || choice < 0) {
		cout << "\t**Error: Select from 0 to 4.\n\n";
		cin >> choice;
	}

}

// function to print "Geometry" selection menu and and get the choice number for "Geometry"
void DisplayGeometry(int& choice) {
	cout << "\n=================================================================================================== \n";
	cout << "*                                Geometry                                                       * ";
	cout << "\n=================================================================================================== \n\n";
	cout << "                          Please select the option                                      \n";
	cout << "\n[1]. Calculate Square\n";
	cout << "[2]. Calculate Rectangle\n";
	cout << "[3]. Calculate Triangle\n";
	cout << "[4]. Calculate Circle\n";
	cout << "[0]. Exit \n";
	cin >> choice;

	if (choice > 4 || choice < 0 ) {
		cout << "\t**Error: Select from 0 to 4.\n\n";
		cin >> choice;
	}
}

//function to run "Geometry" selection and get the choice number
void RunGeometry(IShape**& C)
{
	C[0] = new Square;
	C[1] = new Rectangle;
	C[2] = new Triangle;
	C[3] = new Circle;

	int choice = 1;
	bool isValid = true;

	while (isValid) {
		DisplayGeometry(choice);
		switch (choice) {
		case 1:
			C[0]->Run();
			break;
		case 2:
			C[1]->Run();
			break;
		case 3:
			C[2]->Run();
			break;
		case 4:
			C[3]->Run();
			break;
		case 0:
			isValid = false;
			break;
		}
	}
}

//main 
int main()
{
	//declaring values for while loop and switch expression
	int main_choice = 1;
	bool isValid = true;

	//declaring first 3 selections of main menu
	ICalculator** A = new ICalculator * [3];
	A[0] = new Arithmetic;
	A[1] = new Trigonometry;
	A[2] = new Binary;

	//declaring Geometry selection of main menu
	IShape** C = new IShape * [4];

	//start of the program
	while (isValid) {
		DisplayMenu(main_choice); //function to Print main menu
		switch (main_choice) {
		case 1:
			A[0]->Run(); //running Arithmetic files
			break;
		case 2:
			A[1]->Run(); //running Trigonometry files
			break;
		case 3:
			A[2]->Run(); //running Binary files
			break;
		case 4:
			RunGeometry(C); //running Rectangle, Square, Triangle, Circle files
			break;
		case 0:
			cout << "\nprogram quit" << endl;
			isValid = false;
			break;
		}
	}

	// deleting data to prevent from leaking
	delete[] A;
	delete[] C;

	return 0;
}

