#include <iostream>

using namespace std;

int main()
{

	double testScore1;
	double testScore2;
	double testScore3;
	double testScore4;
	double testScore5;
	double testScoreAverage;
	
	cout << "Imput Test Scores";
	cout << endl;
	cin >> testScore1 >> testScore2 >> testScore3 >> testScore4 >> testScore5;
	
	testScoreAverage = (testScore1 + testScore2 + testScore3 + testScore4 + testScore5) / 5;
	
	cout << "Your Average Test score is: " << testScoreAverage;
	cout << endl;
	
	return 0;
}