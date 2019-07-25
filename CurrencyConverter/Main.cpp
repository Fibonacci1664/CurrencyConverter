/*
A simple currency converter for limited currencies, converted in to GBP.

© D. Green 2019.
*/

#include"D:\Visual_Studio_Projects_Cpp_book\std_lib_facilities.h"

int main()
{
	constexpr double yenToGBP = 0.0074;
	constexpr double kronerToGBP = 0.12;
	constexpr double usdToGBP = 0.80;

	/*double amount = 0;
	string currencyType = " ";

	cout << "Please enter an amount followed by one of the following currency codes: \n"
		<< "For Yen		-		'JPY'\n"
		<< "For Kroner	-		'DKK'\n"
		<< "For USD		-		'USD'\n";

	cin >> amount >> currencyType;

	if (currencyType == "JPY")
	{
		cout << amount << "yen = " << char(156) << (amount * yenToGBP) << ".\n";
	}
	else if (currencyType == "DKK")
	{
		cout << amount << "kroner = " << char(156) << (amount * kronerToGBP) << ".\n";
	}
	else if (currencyType == "USD")
	{
		cout << amount << "USD = " << char(156) << (amount * usdToGBP) << ".\n";
	}
	else
	{
		cout << "Sorry i cannot conver that!\n";
	}*/

	double amount = 0;
	char currencyType = ' ';

	cout << "Please enter an amount followed by one of the following currency codes: \n"
		<< "For Yen		-		'y'\n"
		<< "For Kroner	-		'k'\n"
		<< "For USD		-		'u'\n";

	cin >> amount >> currencyType;

	switch (currencyType)
	{
	case 'y':
		cout << amount << "yen = " << char(156) << (amount * yenToGBP) << ".\n";
		break;
	case 'k':
		cout << amount << "kroner = " << char(156) << (amount * kronerToGBP) << ".\n";
		break;
	case 'u':
		cout << amount << "USD = " << char(156) << (amount * usdToGBP) << ".\n";
		break;
	defualt:
		cout << "Cannot convert that at this time!\n";
		break;
	}

	return 0;
}