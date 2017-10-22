#include <iostream>
#include <string>
#include <thread>
using namespace std;

const unsigned int SECOND = 1000;
const unsigned int HALFSECOND = 500;
const unsigned int TAKEOFFBLINKING = 5000;

/* 
the countdown function 
arguments: string to print
return: void
*/
void countdown(string s);
/*
the bliking function
arguments: non
return: void
*/
void bliking();

void main(void)
{
	for (int i = 12; i > 0; i--)
	{
		countdown("Time until takeoff: " + to_string(i));
	}
	bliking();
}

void countdown(string s)
{
	cout <<"\r" << s << endl;
	this_thread::sleep_for(std::chrono::milliseconds(SECOND));
	system("cls");
}

void bliking()
{
	int temp = 0;
	while (TAKEOFFBLINKING >= temp)
	{
		cout << "\r" << "Takeoff" << endl;
		this_thread::sleep_for(std::chrono::milliseconds(HALFSECOND));
		temp += HALFSECOND;
		system("cls");
		this_thread::sleep_for(std::chrono::milliseconds(HALFSECOND));
		temp += HALFSECOND;
	}

}