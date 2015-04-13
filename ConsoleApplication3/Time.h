#pragma once
#ifndef TIME_H
#define TIME_H
#include <iostream>
#include <string>
using namespace std;

class Time
{
private:
	int hours;
	int minutes;


public:
	Time(int, int);
	~Time();

	void set(int, int);
	void get(int &, int&);

	friend ostream& operator <<(ostream&, const Time&);

	Time& operator++();
	Time operator++(int);
};

ostream& operator <<(ostream& var1, const Time& var2);

#endif
