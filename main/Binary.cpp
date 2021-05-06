#include "Binary.h"

//calling default constructor and destructor
Binary::Binary() = default;
Binary::~Binary() = default;

// inputs data as a binary number and declares them inside class for future operations
//also does check if number is binary
void Binary::Input(istream & in)
{
	cout << "\nInput the binary number: ";
	cin >> this->binary;
	if (binary % 10 != 1 || binary % 10 != 0) {
		cout << "\n Error: only 1 and 0: ";
		cout << "\nInput the binary number: ";
	}
}

//function to convert from binary to decimal
void Binary::BinToDec()
{
	long int decimalNumber = 0, i = 0, remainder;
	while (binary != 0) {
		remainder = binary % 10;
		binary /= 10;
		decimalNumber += remainder * (long)pow(2, i);
		++i;
	}
	cout << "\nThe decimal value: " << decimalNumber << "\n";
}

//function to convert from binary to octal
void Binary::BinToOct()
{
	long int octalnum = 0, j = 1, remainder;

	while (binary != 0)
	{
		remainder = binary % 10;
		octalnum = octalnum + remainder * j;
		j = j * 2;
		binary = binary / 10;
	}
	cout << "\nThe octal value: " << octalnum << "\n";
}

//function to convert from binary to hexadecimal
void Binary::BinToHex()
{
	long int octalnum = 0, j = 1, remainder;
	char hexaDeciNum[100];

	while (binary != 0)
	{
		remainder = binary % 10;
		octalnum = octalnum + remainder * j;
		j = j * 2;
		binary = binary / 10;
	}

	int i = 0;
	while (octalnum != 0) {
		int temp = 0;
		temp = octalnum % 16;

		if (temp < 10) {
			hexaDeciNum[i] = temp + 48;
			i++;
		}
		else {
			hexaDeciNum[i] = temp + 55;
			i++;
		}

		octalnum = octalnum / 16;
	}
	cout << "\nThe hexadecimal value: ";
	for (int j = i - 1; j >= 0; j--){
		cout << hexaDeciNum[j];
	}
	cout << "\n";
}

//function to print selection choice
void Binary::Print()
{
	cout << "\n=================================================================================================== \n";
	cout << "*                                Binary                                                       * ";
	cout << "\n=================================================================================================== \n\n";
	cout << "                          Please select the option                                      \n";
	cout << "\n[1].Convert to Decimal\n";
	cout << "[2].Convert to Octal\n";
	cout << "[3].Convert to Hexedecimal\n";
	cout << "[0].Exit \n";
}

//function to Run Binary option
void Binary::Run()
{
	int choice;
	bool isValid = true;

	while (isValid) {
		Binary::Print();
		cin >> choice;

		if (choice < 0) {
			cout << "\t**Error: Select from 0 to 3.\n\n";
			cin >> choice;
		}

		switch (choice)
		{
		case 1:
			Binary::Input(cin);
			Binary::BinToDec();
			break;
		case 2:
			Binary::Input(cin);
			Binary::BinToOct();
			break;
		case 3:
			Binary::Input(cin);
			Binary::BinToHex();
			break;
		case 0:
			isValid = false;
			break;
		}
	}
}