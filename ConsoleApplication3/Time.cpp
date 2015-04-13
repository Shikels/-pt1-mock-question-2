#include "Time.h"



Time::Time(int h, int m)
{
	hours = h;
	minutes = m;

}

void Time::set(int h, int m)
{
	hours = h;
	minutes = m;

}

void Time::get(int &h, int &ms)
{
	h = hours;
	ms = minutes;
}
Time::~Time()
{
}

ostream& operator <<(ostream& var1, const Time& var2)
{
	var1 << var2.hours << ":" << var2.minutes << endl;
	return var1;

}

Time &Time::  operator++()
{
	return *this;
}


Time Time :: operator++(int)
{
	Time temp(*this);
	operator ++();
	return temp;

}



