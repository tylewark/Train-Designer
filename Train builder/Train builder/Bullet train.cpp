#include <iostream>
#include <string>
#include "windows.h"
using namespace std;

float length = 0;
int destination(string a) // destination() stores the length of the routes to be included in the calculations in the main method
{
	if (a == "Hiroshima")
		length = 676.0;
	if (a == "Kagoshima")
		length = 961.0;
	if (a == "Kanazawa")
		length = 487.0;
	if (a == "Kyoto")
		length = 513.0;
	if (a == "Akita")
		length = 449.0;
	if (a == "Hakodate")
		length = 681.0;
	return 0;
}

float Shinkansen(void) // Shinkansen() stores the top speed of the Japanese bullet train
{
	float topSpeed = 320.0;
	return topSpeed;
}

int main(void) // The main method uses string input to check where the person wants to go, adds approximately 10 minutes for transfer and returns the distance and time.
{
	string travel;
	float time = 0.0;
	while (1 == 1) // This while statement allows the program to loop forever.
	{
		cout << "Select a destination. Route begins at Tokyo." << endl;
		cout << "Destinations: Hiroshima, Kagoshima, Kanazawa, Kyoto, Akita, Hakodate." << endl;
		cin >> travel;
		destination(travel);
		time = length / Shinkansen();
		if (travel == "Hakodate")
			time = time + 0.16666667;
		if (travel == "Akita")
			time = time + 0.16666667;
		if (travel == "Kagoshima")
			time = time + 0.32222222;
		if (travel == "Hiroshima")
			time = time + 0.16666667;
		cout << " " << endl;													// This line provides a space between the question and the answer to improve readability
		cout << "Distance to travel: " << length << " kilometers" << endl;
		cout << "Time elapsed traveling: " << time << " hours" << endl;
		cout << " " << endl;													// The next three lines create space between the answer and the next question
		cout << "----------------------------------------------" << endl;
		cout << " " << endl;
		Sleep(5000); // This function is called from the "windows.h" header file to allow for a 5 second delay before asking for another destination
	}
	getchar();
	return 0;
}