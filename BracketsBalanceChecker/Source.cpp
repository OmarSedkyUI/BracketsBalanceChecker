#include <iostream>
#include <string>
#include <stack>
using namespace std;
int main()
{
	cout << "Enter Brackets To See If They Are Balanced And Then Press Enter" << endl;
	string s;
	stack<char>Stack;
	cin >> s;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == '(')
		{
			Stack.push(s[i]);
		}
		else if (s[i] == ')')
		{
			if (!Stack.empty())
			{
				Stack.pop();
			}
			else
			{
				cout << "It is Not Balanced" << endl;
				system("pause");
				return 0;
			}
		}
	}
	if (Stack.empty())
	{
		cout << "It is Balanced" << endl;
	}
	else
	{
		cout << "It is Not Balanced" << endl;
	}
	system("pause");
	return 0;
}