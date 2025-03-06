//#include<iostream>
//
//using namespace std;
//void main()
//{
//	//int length;
//	//cout << "Enter length of cycle"; cin >> length;
//	//for (int i = 0; i < length; i++)
//	//{
//	//	cout << i << " ";
//	//}
//
//	//2
//	//int start, end;
//	//cout << "Enter a start of cycle: "; cin >> start;
//	//cout << "Enter an end  of cycle: "; cin >> end;
//	//
//	//if (start < end)
//	//{
//	//	//2.1
//	//	cout << "Even" << endl;
//	//	for (int i = start; i <= end; i++)
//	//	{
//	//		
//	//		if (i % 2 == 0)
//	//		{
//	//			cout << i << " ";
//	//		}
//
//	//		
//	//	}
//	//	//2.2
//	//	cout << endl << "Odd" << endl;
//	//	for (int i = start; i <= end; i++)
//	//	{
//
//	//		if (i % 2 == 0)
//	//		{
//	//			continue;
//	//		}
//	//		cout << i << " ";
//
//	//	}
//	//	//2.3
//	//	cout << endl << "Multiples of seven" << endl;
//	//	for (int i = start; i <= end; i++)
//	//	{
//
//	//		if (i % 7 == 0)
//	//		{
//	//			cout << i << " ";
//	//		}
//
//
//	//	}
//	//}
//	//else
//	//{
//	//	//2.1
//	//	cout << "Even" << endl;
//	//	for (int i = end; i <= start; i++)
//	//	{
//
//	//		if (i % 2 == 0)
//	//		{
//	//			cout << i << " ";
//	//		}
//
//
//	//	}
//	//	//2.2
//	//	cout << endl << "Odd" << endl;
//	//	for (int i = end; i <= start; i++)
//	//	{
//
//	//		if (i % 2 == 0)
//	//		{
//	//			continue;
//	//		}
//	//		cout << i << " ";
//
//	//	}
//	//	//2.3
//	//	cout << endl << "Multiples of seven" << endl;
//	//	for (int i = end; i <= start; i++)
//	//	{
//
//	//		if (i % 7 == 0)
//	//		{
//	//			cout << i << " ";
//	//		}
//
//
//	//	}
//	//}
//
//	//3
//	/*int start, end, sum = 0;
//	cout << "Enter a start of cycle: "; cin >> start;
//	cout << "Enter an end of cycle: "; cin >> end;
//
//	if (start > end) 
//	{
//		for (int i = end; i <= start; i++) 
//		{ 
//			sum += i;
//		}
//	}
//	else 
//	{
//		for (int i = start; i <= end; i++) 
//		{ 
//			sum += i;
//		}
//	}
//
//	cout << "Sum: " << sum << endl;
//	cout << sum;*/
//	
//
//	//4
//	/*int sum = 0, num;
//	for (int i = 0; i < 2;)
//	{
//		cout << "Enter number to add\n[print '0' to stop adding]\n"; cin >> num;
//		if (num == 0)
//		{break;}
//		sum += num;
//		cout << "Sum: " << sum << endl;
//	}*/
//	
//	//5
//	/*int magic_number = 499, user_num = 0, tries = 0;
//	cout << "GUESS THE NUMBER!" << endl;
//	for (int i = 0; i < 2;) 
//	{
//		if (user_num == magic_number)
//		{
//			cout << "YOU WON!";
//			break;
//		}
//
//		else
//		{
//			cout << "Your guess: "; cin >> user_num;
//			if (user_num < magic_number)
//			{
//				cout << "My number is higher" << endl;
//				tries++;
//				continue;
//			}
//			else
//			{
//				cout << "My number is lower" << endl;
//				tries++;
//				continue;
//			}
//		}
//		if (user_num == 0)
//		{
//			cout << "Bye-bye~";
//			break;
//		}
//		
//	}*/
//
//	//6
//	const float dollar = 41.5, euro = 43.8, rupia = 4.7, zloti = 10.5, yen = 2.8;
//	int key, user_fortune;
//	cout << "Enter amount of grn: "; cin >> user_fortune;
//	do
//	{
//		
//		cout << endl;
//		cout << "Choose the operation " << endl;
//		cout << " [ 1 ] - grn in dol " << endl;
//		cout << " [ 2 ] - grn in euro" << endl;
//		cout << " [ 3 ] - grn in rupi " << endl;
//		cout << " [ 4 ] - grn in zloti " << endl;
//		cout << " [ 5 ] - grn in yen " << endl;
//		cout << " [ 9 ] - if you want to change amount of grn " << endl;
//		cout << " [ 0 ] - Exit  " << endl;
//		cin >> key;
//		cout << endl;
//
//		switch (key)
//		{
//		case 1:
//			cout << user_fortune / dollar << " dollar" << endl;
//			break;
//		case 2:
//			cout << user_fortune / euro << " euro" << endl;
//			break;
//		case 3:
//			cout << user_fortune / rupia << " rupi" << endl;
//			break;
//		case 4:
//			cout << user_fortune / zloti << " zloti" << endl;
//			break;
//		case 5:
//			cout << user_fortune / yen << " yen" << endl;
//			break;
//		case 9:
//			cout << "Enter amount of grn: "; cin >> user_fortune;
//			break;
//		default:
//			break;
//		}
//	} while (key != 0);
//	
//
//}