// ConsoleApplication3.cpp : Defines the entry point for the console application.
//

#include "Time.h"

int main(int argc, char *argv[]) {

	Time myTime(8, 40);									// instantiate time class 

	cout << "CM3 starts at " << myTime << endl;			// demonstrate overloaded stream insertion operator

	myTime.set(10, 30);									// change the time

	int h, ms;									// get changed time
	myTime.get(h, ms);
	cout << "Design 1 starts at " << ms << " past " << h;   // display time in another format


	Time temp(4, 60);
	temp++;
	cout << temp << endl;

	system("pause");
	return 0;

}




