/* Programmer: Drew Welbourn
Lab: Will Tarzan save the missionaries?
Purpose: To determine if Tarzan will save any missionaries*/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{

	int tarzan = 80, active_eaters = 30, time = 0, nightBegin = 3, nightEnd = 12, nightSpeed = 4, daySpeed = 7;
	double leftovers = 10, eatrate = .03, bodyParts = static_cast<int>(leftovers);

	cout << "Time: " << time << setw(4) << ' ' << "Survivors: " << leftovers << setw(4) << ' ' << "Cannibals: " << active_eaters << setw(4) << ' ' << "Tarzan: " << tarzan << endl;


	while (tarzan >= 0)

	{


		time++;
		leftovers = leftovers - active_eaters * eatrate;
		


		if (time > nightBegin && time <= nightEnd)
			tarzan = tarzan - nightSpeed;
		else
			tarzan = tarzan - daySpeed;

		active_eaters--;
		


		cout << "Time: " << time << setw(4) << ' ' << "Survivors: " << leftovers << setw(4) << ' ' << "Cannibals: " << active_eaters << setw(4) << ' ' << "Tarzan: " << tarzan << endl;
	}





	return 0;
}
