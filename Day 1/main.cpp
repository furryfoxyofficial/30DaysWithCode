#include <iostream>
using namespace std;
int main()
{
	int mat[10][9] = { {1,2,3,4,5,6,7,8,9},{1,2,3} };
	int res[10][9];
	for (int i = 0;i < 10;i++)
	{
		for (int j = 0; j < 10; j++)
		{
			mat[i][j] = (i) * (j);
			cout << mat[i][j] << "    ";
		}
		cout << endl;
	}
	system("pause");
}
