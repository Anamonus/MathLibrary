#include <iostream>
#include <string>
using namespace std;
int main()
{
	int firstmtrx[3][3] = { {1, 0, 0} , {0, 1, 0} , {0, 0, 1 } };
	int secondmtrx[3][3] = {{ 2, 0, 0 }, { 0, 2, 0 }, { 0, 0, 1 } };
	int resultmtrx[3][3];
	int temp;

	temp = (firstmtrx[1][1] * secondmtrx[1][1]) +
		(firstmtrx[2][1] * secondmtrx[1][2]) +
		(firstmtrx[3][1] * secondmtrx[1][3]);
	resultmtrx[1][1] = temp;

	temp = (firstmtrx[1][2] * secondmtrx[2][1]) +
		(firstmtrx[2][2] * secondmtrx[2][2]) +
		(firstmtrx[3][2] * secondmtrx[2][3]);
	resultmtrx[2][2] = temp;

	temp = (firstmtrx[1][3] * secondmtrx[3][1]) +
		(firstmtrx[2][3] * secondmtrx[3][2]) +
		(firstmtrx[3][3] * secondmtrx[3][3]);
	resultmtrx[3][3] = temp;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << resultmtrx[i][j];
		}
	}

}