#include <iostream>

using namespace std;
 
int main()
{
	
	double pennies, nickles, dimes, quarters, dollars;
	
	cout << "Please imput number of Pennies"; 
	cout << endl;
	cin >> pennies;
	
	cout << "Please imput number of Nickles";
	cout << endl;
	cin >> nickles;
	
	cout << "Please imput number of Dimes";
	cout << endl;
	cin >> dimes;
	
	cout << "Please imput number of Quarters";
	cout << endl;
	cin >> quarters;
	
	dollars = pennies + (nickles * 5) + (dimes * 10) + (quarters * 25);
	
	cout << "You have " << dollars << " Pennies of Value";
	cout << endl;
	
	return 0;
	
	
}