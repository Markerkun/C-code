#include <iostream>
using namespace std;

class Time
{
    int seconds;
	int minutes;
	int hours;
	int TotalSeconds() const
	{
		return this->hours * 3600 + this->minutes * 60 + this->seconds;
	}
public:
	Time()
	{
		seconds = 0;
		minutes = 0;
		hours = 0;
	}
	Time(int s, int m, int h)
	{
		while (s > 59)
		{
			m++;
			if (m > 59)
			{
				h++;
				seconds = s - 60;
			}
			s = s - 60;
		}
		seconds = s;
		if (s < 0)
		{
			cout << "Invalid seconds" << endl;
		}
		else
			seconds = s;

		while (m>59)
		{

			h++;
			minutes = m - 60;
		}
		if (m < 0)
		{
			cout << "Invalid minutes" << endl;
		}
		else
			minutes = m;
		hours = h;
	}
	explicit Time(int s)
	{
		if (s < 0)
		{
			cout << "Invalid seconds" << endl;
		}
		else
		{
			seconds = s % 60;
			minutes = (s / 60) % 60;
			hours = s / 3600;
		}
	}
	void AddSecond()
	{
		seconds++;
		if (seconds > 59)
		{
			minutes++;
			seconds = 0;
			if (minutes > 59)
			{
				hours++;
				minutes = 0;
			}
		}
	}
	Time operator +(Time& other)const
	{ 
		Time res((*this).TotalSeconds() + other.TotalSeconds());
		return res;
	}
	Time operator -(Time& other)const
	{ 
		Time res((*this).TotalSeconds() - other.TotalSeconds());
		return res;
	}
	Time operator *(Time& other)const
	{ 
		Time res((*this).TotalSeconds() * other.TotalSeconds());
		return res;
	}
	Time operator /(Time& other)const
	{ 
		Time res((*this).TotalSeconds() / other.TotalSeconds());
		return res;
	}
	bool operator >(Time& other)const
	{ 
		return ((*this).TotalSeconds() > other.TotalSeconds());
	}
	bool operator <(Time& other)const
	{ 
		return ((*this).TotalSeconds() < other.TotalSeconds());
	}
	bool operator >=(Time& other)const
	{ 
		return ((*this).TotalSeconds() >= other.TotalSeconds());
	}
	bool operator <=(Time& other)const
	{ 
		return ((*this).TotalSeconds() <= other.TotalSeconds());
	}
	bool operator ==(Time& other)const
	{ 
		return ((*this).TotalSeconds() == other.TotalSeconds());
	}
	bool operator !=(Time& other)const
	{ 
		return ((*this).TotalSeconds() != other.TotalSeconds());
	}
	void Print()
	{
		cout << "Time: ";
		if (hours < 10)
		{
			cout << '0';
		}
		cout << hours << ":";
		if (minutes < 10)
		{
			cout << '0';
		}
		cout << minutes << ":";
		if (seconds < 10)
		{
			cout << '0';
		}
		cout << seconds << endl;
	}


};





int main()
{
	Time t1(59, 59, 0);
	Time t2(1200);
	t1.Print();
	t2.Print();
	t1.AddSecond();
	t2.AddSecond();
	t1.Print();
	t2.Print();
	cout << "t1 > t2 = " << (t1 > t2) << endl;
	cout << "t1 < t2 = " << (t1 < t2) << endl;
	cout << "t1 >= t2 = " << (t1 >= t2) << endl;
	cout << "t1 <= t2 = " << (t1 <= t2) << endl;
	cout << "t1 == t2 = " << (t1 == t2) << endl;
	cout << "t1 != t2 = " << (t1 != t2) << endl;
	Time t3(t1 + t2);
	cout << "t1 + t2: ";
	t3.Print();
	cout << "t1 - t2: ";
	t3 = t1 - t2;
	t3.Print();
	cout << "t1 * t2: ";
	t3 = t1 * t2;
	t3.Print();
	cout << "t1 / t2: ";
	t3 = t1 / t2;
	t3.Print();
	
	

}
