#include <iostream>
#include <string>
#include "MathStuff.h"

using namespace std;
PosTracker::PosTracker()
{
}
PosTracker::~PosTracker()
{
}
void PosTracker::createMatrix3x3(float a_x, float a_y)
{
	firstmtrx[0][0] = a_x;
	firstmtrx[0][1] = 0;
	firstmtrx[0][2] = 0;
	firstmtrx[1][0] = 0;
	firstmtrx[1][1] = a_y;
	firstmtrx[1][2] = 0;
	firstmtrx[2][0] = 0;
	firstmtrx[2][1] = 0;
	firstmtrx[2][2] = 1;

}