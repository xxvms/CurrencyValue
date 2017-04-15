// CurrencyValue.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>



int main()
{
	const double usDollar = 1.00;
	double gbp = 1.23;
	double  yen = 0.0092;
	double euro = 1.06;
	double yuan = 0.15;
	char choice = 'a';
	double amountToSwitch = 0.00;
	double transactionValue = 0.00;

	while (true)
	{
		std::cout << "Please provide which currency do you want to convert to USD: " << std::endl;
		std::cout << "Brithish pounds - press B " << std::endl;
		std::cout << "Japanense yen - press Y " << std::endl;
		std::cout << "Euro - press E " << std::endl;
		std::cout << "Chinses Yuan - press C " << std::endl;
		std::cout << "To exit press Q " << std::endl;
		char choice;
		std::cin >> choice;

		if (choice == 'q' || choice == 'Q')
		{
			std::cout << "Thank you for using our program, see you soon :) " << std::endl;
			break;
		}
		std::cout << "How much do you want to exchange?: ";
		std::cin >> amountToSwitch;

		if (choice == 'b' || choice == 'B')
		{
			system("cls");
			transactionValue = amountToSwitch * gbp;
			std::cout << "You want to exchange " << amountToSwitch << " into USD" << std::endl;
			std::cout << std::endl;
			std::cout << "1 GBP is: " << gbp << " US Dollars" <<  std::endl;
			std::cout << "Amount exchanged: " << transactionValue << " US Dollars" << std::endl;
			std::cout << std::endl << std::endl;
		}
		if (choice == 'y' || choice == 'Y')
		{
			system("cls");
			transactionValue = amountToSwitch * yen;
			std::cout << "You want to exchange " << amountToSwitch << " into USD" << std::endl;
			std::cout << std::endl;
			std::cout << "1 Yen is: " << yen << " US Dollars" << std::endl;
			std::cout << "Amount exchanged: " << transactionValue << " US Dollars" << std::endl;
			std::cout << std::endl << std::endl;
		}
		if (choice == 'e' || choice == 'E')
		{
			system("cls");
			transactionValue = amountToSwitch * euro;
			std::cout << "You want to exchange " << amountToSwitch << " into USD" << std::endl;
			std::cout << std::endl;
			std::cout << "1 Euro is: " << euro << " US Dollars" << std::endl;
			std::cout << "Amount exchanged: " << transactionValue << " US Dollars" << std::endl;
			std::cout << std::endl << std::endl;
		}
		if (choice == 'c' || choice == 'C')
		{
			system("cls");
			transactionValue = amountToSwitch * yen;
			std::cout << "You want to exchange " << amountToSwitch << " into USD" << std::endl;
			std::cout << std::endl;
			std::cout << "1 Yuan is: " << yuan << " US Dollars" << std::endl;
			std::cout << "Amount exchanged: " << transactionValue << " US Dollars" << std::endl;
			std::cout << std::endl << std::endl;
		}
		

	}

	system("pause");
    return 0;
}

