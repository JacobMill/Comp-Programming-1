#include <iostream>

using namespace std;
 
int main()
{
	double fuelTankAmount, fuelMPG, distance;
	
	cout << "Imput Fuel Tank Capacity and Cars Miles per Gallon." << endl;
	cin >> fuelTankAmount >> fuelMPG;
	
	distance = fuelTankAmount / fuelMPG;
	
	cout << "Your Car can travel " << distance << " miles before refueling";
	
	return 0;
	
}