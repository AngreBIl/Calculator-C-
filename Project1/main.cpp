#include <iostream>

using std::cout;
using std::cin;
using std::endl;


int main()
{
	int continuation = 1;
	double result;
	do
	{
		int action;
		double numberOne;
		double numberTwo;
		cout << "Select an action" <<"\n1 = +"<<"\n2 = -"<<"\n3 = *"<<"\n4 = / " << "\nEnter:";
		cin >> action;
		if (continuation == 1)
		{
			cout << "Pleace enter number one:";
			cin >> numberOne;
			cout << "Pleace enter number two:";
			cin >> numberTwo;
			if (action == 1)
			{
				result = numberOne + numberTwo;
			}
			else if (action == 2)
			{
				result = numberOne - numberTwo;
			}
			else if (action == 3)
			{
				result = numberOne * numberTwo;
			}
			else if (action == 4)
			{
				result = numberOne / numberTwo;
			}
		}
		else if (continuation == 2)
		{
			cout << "Pleace enter number:";
			cin >> numberTwo;
			if (action == 1)
			{
				result = result + numberTwo;
			}
			else if (action == 2)
			{
				result = result - numberTwo;
			}
			else if (action == 3)
			{
				result = result * numberTwo;
			}
			else if (action == 4)
			{
				result = result / numberTwo;
			}
		}
		cout << result << endl;
		cout << "Choose an option to continue"<<"\nExit = 0" << "\nContinue = 1" << "\nContinue with saving the result = 2" << "\nEner:";
		cin >> continuation;
	} while (continuation == 1 or continuation == 2);
}