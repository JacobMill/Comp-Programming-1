#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double imput1, imput2, imput3, imput4, imput5, summ, output;
	
	cout << "Please Input Values" << endl;
	cin >> imput1 >> imput2 >> imput3 >> imput4 >> imput5;
	
	summ = (imput1 + imput2 + imput3 + imput4 + imput5); 
	output = lround(summ);
	
	cout << output;
	cout << endl;	
	
	return 0;
	
}

