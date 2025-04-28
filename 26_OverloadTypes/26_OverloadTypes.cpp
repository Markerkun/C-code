#include <iostream>
using namespace std;

class plane
{
	string model;
	string type;
	int amount_sitters;
	int max_amount_sitters;
public:
	plane()
	{
		model = "None model";
		type = "None type";
		amount_sitters = 0;
		max_amount_sitters = 0;
	}
	plane(string model, string type, int amount_sitters, int max_amount_sitters)
	{
		this->model = model;
		this->type = type;
		this->amount_sitters = amount_sitters;
		this->max_amount_sitters = max_amount_sitters;
	}
	void show()
	{
		cout << "Model: " << model << endl;
		cout << "Type: " << type << endl;
		cout << "Amount sitters: " << amount_sitters << endl;
		cout << "Max amount sitters: " << max_amount_sitters << endl;
	}

	void operator ++()
	{
		if (amount_sitters == max_amount_sitters)
		{
			cout << "Plane is full!" << endl;
		}
		else
		{
			amount_sitters++;
		}
	}
	void operator --()
	{
		if (amount_sitters == 0)
		{
			cout << "Amount of seaters almost 0!" << endl;
		}
		else
		{
			amount_sitters--;
		}
	}

	void operator ()(int count)
	{
		if (count == max_amount_sitters)
		{
			cout << "That's more than max passangers" << endl;
		}
		else
		{
			amount_sitters = count;
		}
	}
	friend bool operator ==(const plane& left, const plane& right);
	friend bool operator > (const plane& left, const plane& right);
};

bool operator ==(const plane& left,const plane& right)
{
	return (left.type == right.type);
}

bool operator >(const plane& left, const plane& right)
{
	return (left.max_amount_sitters > right.max_amount_sitters);
}





int main()
{
	plane p1("Boeing 737", "Passenger", 0, 200);

	p1.show();
	cout << endl;
	++p1;
	p1.show();
	cout << endl;
	--p1;
	p1.show();
	cout << endl;
	--p1;
	cout << endl;
	p1.show();
	cout << endl;
	cout << "-----------------------------" << endl;
	plane p2("Boeing 738", "Passenger", 200, 200);
	p2.show();
	cout << endl;
	++p2;
	cout << endl;
	if (p1 == p2)
	{
		cout << "Planes are equal!" << endl;
	}
	else
	{
		cout << "Planes are not equal!" << endl;
	}
	cout << endl;
	if (p1 > p2)
	{
		cout << "Plane 1 is bigger!" << endl;
	}
	else
	{
		cout << "Plane 2 is bigger!" << endl;
	}

}
