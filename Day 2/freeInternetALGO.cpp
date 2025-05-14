#include <iostream>
#include <string>
using namespace std;
int main()
{
	int streetNumber{}, XoperatorScore = 0, YopertorScore = 0;
	string n = "";
	//bool isAllSame;
	cin >> n;
	for (int i = 0;i < 3;i++)
	{
		if (n[i] == 'Y')
		{
			XoperatorScore++;
		}
		if (n[i] == 'X')
		{
			YopertorScore++;
		}
	}
	if (XoperatorScore < 3 && YopertorScore < 3)
	{
		cout << "yes";
	}
	
	if (XoperatorScore == 3 || YopertorScore == 3)
	{
		cout << "no";
	}
}
