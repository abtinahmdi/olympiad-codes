#include<bits/stdc++.h>
using namespace std;

int main()
{
	double bmi , w , h;
	cin >> w >> h;
	bmi = w / (h * h);
	if (bmi < 18.5){
		cout << fixed << setprecision(2) << bmi << endl << "Underweight" << endl;
	}
	if (bmi >= 18.5 && bmi <= 25){
		cout << fixed << setprecision(2) << bmi << endl << "Normal" << endl;
	}
	if (bmi >= 25 && bmi <= 30){
		cout << fixed << setprecision(2) << bmi << endl << "Overweight" << endl;
	}
	if (bmi >= 30){
		cout << fixed << setprecision(2) << bmi << endl << "Obese" << endl;
	}
	return 0;
}