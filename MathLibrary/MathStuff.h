#ifndef _MATHSTUFF_H_
#define _MATHSTUFF_H_

class PosTracker
{
public:
	PosTracker();
	~PosTracker();
	int firstmtrx[3][3];
	int secondmtrx[3][3];
	int resultmtrx[3][3];
	PosTracker operator=(PosTracker &rhs)
	{
		int temp;
		temp = firstmtrx[0][0];
		resultmtrx[0][0] = temp;
		temp = firstmtrx[0][1];
		resultmtrx[0][1] = temp;
		temp = firstmtrx[0][2];
		resultmtrx[0][2] = temp;
		temp = firstmtrx[1][0];
		resultmtrx[1][0] = temp;
		temp = firstmtrx[1][1];
		resultmtrx[1][1] = temp;
		temp = firstmtrx[1][2];
		resultmtrx[1][2] = temp;
		temp = firstmtrx[1][2];
		resultmtrx[1][2] = temp;
		temp = firstmtrx[2][0];
		resultmtrx[2][0] = temp;
		temp = firstmtrx[2][1];
		resultmtrx[2][2] = temp;
		temp = firstmtrx[2][2];
		resultmtrx[2][2] = temp;
	}
	PosTracker operator*(PosTracker &rhs)
	{
		int temp;
		temp = (firstmtrx[0][0] * secondmtrx[0][0]) +
			(firstmtrx[0][0] * secondmtrx[1][0]) +
			(firstmtrx[0][0] * secondmtrx[2][0]);
		resultmtrx[0][0] = temp;
		temp = (firstmtrx[0][1] * secondmtrx[0][1]) +
			(firstmtrx[0][1] * secondmtrx[1][1]) +
			(firstmtrx[0][1] * secondmtrx[2][1]);
		resultmtrx[0][1] = temp;
		temp = (firstmtrx[0][2] * secondmtrx[0][2]) +
			(firstmtrx[0][2] * secondmtrx[1][2]) +
			(firstmtrx[0][2] * secondmtrx[2][2]);
		resultmtrx[0][2] = temp;
		temp = (firstmtrx[1][0] * secondmtrx[0][0]) +
			(firstmtrx[1][0] * secondmtrx[1][0]) +
			(firstmtrx[1][0] * secondmtrx[2][0]);
		resultmtrx[1][0] = temp;
		temp = (firstmtrx[1][1] * secondmtrx[0][1]) +
			(firstmtrx[1][1] * secondmtrx[1][1]) +
			(firstmtrx[1][1] * secondmtrx[2][1]);
		resultmtrx[1][1] = temp;
		temp = (firstmtrx[1][2] * secondmtrx[0][2]) +
			(firstmtrx[1][2] * secondmtrx[1][2]) +
			(firstmtrx[1][2] * secondmtrx[2][2]);
		resultmtrx[1][2] = temp;
		temp = (firstmtrx[2][0] * secondmtrx[0][0]) +
			(firstmtrx[2][0] * secondmtrx[1][0]) +
			(firstmtrx[2][0] * secondmtrx[2][0]);
		resultmtrx[2][0] = temp;
		temp = (firstmtrx[2][1] * secondmtrx[0][1]) +
			(firstmtrx[2][1] * secondmtrx[1][1]) +
			(firstmtrx[2][1] * secondmtrx[2][1]);
		resultmtrx[2][1] = temp;
		temp = (firstmtrx[2][2] * secondmtrx[0][2]) +
			(firstmtrx[2][2] * secondmtrx[1][2]) +
			(firstmtrx[2][2] * secondmtrx[2][2]);
		resultmtrx[2][2] = temp;
	}

private:

};



#endif