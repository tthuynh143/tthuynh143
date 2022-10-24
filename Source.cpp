#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	//To declare the variables to store input
	float initInvAmount, monDeposit, AnuInterest, months, years;
	//To store the total amounts year end, interest, and year end interest
	float totalAmount, intAmount, yearTotInterest;

	//Print heading
	cout << "*************\n";
	cout << "********** Data Input **********\n";
	cout << "Initial Investment Amount: \n";
	cout << "Monthly Deposit: \n";
	cout << "Annual Interest: \n";
	cout << "Number of years: \n";
	//Get input from user to continue
	system("PAUSE");
	//Gets the data from user
	cout << "************\n";
	cout << "********** Data Input **********\n";
	cout << "Initial Investment Amount: $";
	cin >> initInvAmount;
	cout << "Monthly Deposit: $";
	cin >> monDeposit;
	cout << "Annual Interest: %";
	cin >> AnuInterest;
	cout << "Number of years: ";
	cin >> years;
	months = years * 12;
	//Get input from user to continue
	system("PAUSE");
	//Sets total amount to initial investments 
	totalAmount = initInvAmount;
	//Displays the years data without the monthly deposits
	cout << "\nBalance and Interest Without Additional Monthly Deposits\n";
	cout << "=================================\n";
	cout << "Year\t\tYear End Balance\tYear End Earned Interest\n";
	cout << "---------------------------------------\n";

	for (int i = 0; i < years; i++) {
		//Caculates the yearly interest
		intAmount = (totalAmount) * ((AnuInterest / 100));
		//Caculates the year end totals
		totalAmount = totalAmount + intAmount;
		//Show results to table showcasing to show only 2 decimal points
		cout << (i + 1) << "\t\t$" << fixed << setprecision(2) << totalAmount << "\t\t\t$" << intAmount << "\n";
	}
	//Monthly updated 
	totalAmount = initInvAmount;
	//Display monthly deposits year data
	cout << "\n\nBalance and Interest With Additional Monthly Deposits\n";
	cout << "===========================================\n";
	cout << "Year\t\tYear End Balance\tYear End Earned Interest\n";
	cout << "----------------------------------------\n";
	for (int i = 0; i < years; i++) {
		//Yearly interest set to zero at the beginning of the year
		yearTotInterest = 0;
		for (int j = 0; j < 12; j++) {
			//Calculating monthly interest
			intAmount = (totalAmount + monDeposit) * ((AnuInterest / 100) / 12);
			//Calculating end of month interest
			yearTotInterest = yearTotInterest + intAmount;
			//Calculating end of month total
			totalAmount = totalAmount + monDeposit + intAmount;
		}
		//Display results to table showcasing with only 2 decimal places
		cout << (i + 1) << "\t\t$" << fixed << setprecision(2) << totalAmount << "\t\t\t$" << yearTotInterest << "\n";

	}
	return 0;
}





