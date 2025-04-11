#include <iostream>
using namespace std;

struct Vagon
{
	int number;
	int amount_seats;
	int amount_sitters;
};

class Train
{
	string model;
	int amount_vagons;
	Vagon* vagon;
public:
	Train()
	{
		model = "no model";
		amount_vagons = 0;
		vagon = nullptr;

	}
	Train(string model)
	{
		this->model = model;
		amount_vagons = 0;
		vagon = nullptr;
	}
	void Show()
	{
		cout << "\nModel: " << model << '\n';
		cout << "Amount of cars: " << amount_vagons << '\n';
		if (amount_vagons != 0)
		{
			for (int i = 1; i < amount_vagons; i++)
			{
				cout << "Car " << i << ':' << '\n';
				cout << "Car number:" << vagon[i - 1].number << '\n';
				cout << "Amount of seats: " << vagon[i - 1].amount_seats << '\n';
				cout << "Amount of sitters: " << vagon[i - 1].amount_sitters << '\n';
			}
		}
	}

	void AddVagon()
	{
		amount_vagons++;
		Vagon* temp = new Vagon[amount_vagons];
		for (int i = 0; i < amount_vagons-1; i++)
		{
			temp[i] = vagon[i];
		}
		temp[amount_vagons - 1].number = amount_vagons;
		cout << "Enter amount of seats at car: ";cin >> temp[amount_vagons-1].amount_seats;
		while (temp[amount_vagons - 1].amount_seats < 0)
		{
			cout << "Enter amount of seats at car: ";cin >> temp[amount_vagons - 1].amount_seats;
		}
		cout << "Enter amount of sitters at car: ";cin >> temp[amount_vagons-1].amount_sitters;
		while (temp[amount_vagons - 1].amount_sitters > temp[amount_vagons - 1].amount_seats || temp[amount_vagons - 1].amount_sitters < 0)
		{
			cout << "Enter amount of sitters at car: ";cin >> temp[amount_vagons - 1].amount_sitters;
		}
		vagon = temp;
	}

	void AddSitter(int number)
	{
		if (amount_vagons != 0)
		{
			for (int i = 0; i < amount_vagons; i++)
			{
				if (vagon[i].number == number)
				{
					if (vagon[i].amount_sitters == vagon[i].amount_seats)
					{
						cout << "In car lack of seats" << endl;
						return;
					}
					else
					{
						vagon[i].amount_sitters++;
						cout << "A passanger come in the car" << endl;
						return;
					}
				}
			}
		}
		else
		{
			cout << "There is no cars" << '\n';
		}
	}
	Train(const Train& other)
	{
		this->model = other.model;
		this->amount_vagons = other.amount_vagons;
		this->vagon = new Vagon[other.amount_vagons];
		for (int i = 0; i < other.amount_vagons; i++)
		{
			this->vagon[i] = other.vagon[i];
		}
	}



	~Train()
	{
		if (vagon != nullptr)
			delete[] vagon;
	}
};


int main()
{
	Train t;
	t.Show();
	t.AddVagon();
	t.Show();
	t.AddSitter(1);
	t.Show();
	Train copy(t);
	t.Show();
}
