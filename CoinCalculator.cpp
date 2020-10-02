/*Stephen Thompson CS 231 9/20/20
Coin Calculator
User inputs an amount of each type of coin, returns total value of coins in dollars and cents*/

#include <iostream>
using namespace std;

int main()
{
	double total_amount = 0.0;
	string coin_names[]{ "pennies", "nickels", "dimes", "quarters", "half dollars", "dollar coins" };
	double coin_values[]{ 0.01, 0.05, 0.1, 0.25, 0.5, 1.0 };
	int coin_amounts[6]{};

	cout << "Welcome to the Coin Calculator!" << endl;

	//asks user how many of each coin, returns error message if negative value
	for (int i = 0; i < 6; i++) {
		cout << "How many " << coin_names[i] << " do you have? ";
		cin >> coin_amounts[i];
		while (coin_amounts[i] < 0) {
			cout << "Please enter a correct value: ";
			cin >> coin_amounts[i];
		}
	}

	//prints amount of each coin, calculates total dollar amount
	for (int i = 0; i < 6; i++) {
		cout << "You have " << coin_amounts[i] << " " << coin_names[i] << "." << endl;
		total_amount += coin_amounts[i] * coin_values[i];
	}

	cout << "The value of all of your coins is $" << total_amount << ".";
}