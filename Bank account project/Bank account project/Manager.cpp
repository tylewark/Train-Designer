#include <iostream>
#include <string>
#include "windows.h"
using namespace std;

string action;
float account = 0;

float Account(float amount)
{
	if (action == "Deposit")
		account += amount;
	if (action == "Withdraw")
		account -= amount;
	return account;
}

int history(float amount)
{
	float hist[5] = { 0.0, 0.0, 0.0, 0.0, 0.0 };
	hist[4] = hist[3];
	hist[3] = hist[2];
	hist[2] = hist[1];
	hist[1] = hist[0];
	hist[0] = amount;
	cout << "History: " << hist[0] << ", " << hist[1] << ", " << hist[2] << ", " << hist[3] << ", " << hist[4] << endl;
	return 0;
}

int main(void)
{
	float a = 0;
	cin >> a;
	history(a);
	getchar();
	return 0;
}