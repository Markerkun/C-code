//#include <iostream>
//#include <iomanip>
//
//using namespace std;
//
////1
//float Sum(int a, int b)
//{
//	return a + b;
//}
//float Sub(int a, int b)
//{
//	return a - b;
//}
//float Division(int a, int b)
//{
//	return a / b;
//}
//float Multy(int a, int b)
//{
//	return a * b;
//}
///////////////////////
//
////2
//
//void toUppercase(string& str)
//{
//	for (auto i : str)
//	{
//		if (islower(i))
//		{
//			i = toupper(i);
//		}
//		cout << i;
//	}
//	cout << "\n";
//}
//
//void toLowercase(string& str)
//{
//	for (auto i : str)
//	{
//		if (isupper(i))
//		{
//			i = tolower(i);
//		}
//		cout << i;
//	}
//	cout << "\n";
//}
//
//void reverseString(string& str)
//{
//	cout << str.size() << "\n";
//	for (auto i = str.size(); i > -1; i--)
//	{
//		cout << str[i];
//	}
//	cout << "\n";
//
//}
//
//void capitalize(string& str)
//{
//	int counter = 0;
//	for (auto i : str)
//	{
//		if (isspace(i))
//		{
//			str[counter+1] = toupper(str[counter + 1]);
//		}
//		cout << i;
//		counter++;
//	}
//	cout << "\n";
//
//
//	
//}
//
//void main()
//{
//	//1
//
//	/*float (*FuncArr[4])(int, int) = { Sum, Sub, Multy, Division };
//	int x = 6, y = 2;
//	char c = '+';
//
//	while (c != 'S')
//	{
//		cout << "Enter operation: ";
//		cin >> c;
//		cout << "Enter your numbers: " << "\n";
//		cin >> x >> y;
//		switch (c)
//		{
//		case '+':
//			cout << "Sum of numbers (x + y) : " << FuncArr[0](x, y) << "\n";
//			break;
//		case '-':
//			cout << "Sub of numbers (x - y) : " << FuncArr[1](x, y) << "\n";
//			break;
//		case '*':
//			cout << "Multy of numbers (x * y) : " << FuncArr[2](x, y) << "\n";
//			break;
//		case '/':
//			cout << "Division of numbers (x / y) : " << FuncArr[3](x, y) << "\n";
//			break;
//		default:
//			c='S';
//			break;
//		}
//	}*/
//
//
//
//	//2
//
//	string str = "Hi Earth! I love u";
//
//	toUppercase(str);
//	toLowercase(str);
//	reverseString(str);
//	capitalize(str);
//
//
//
//
//}
