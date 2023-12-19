#include<iostream>

using namespace std;

static int ntotalWays = 0;
int noOfWays(int nCurrenCount, int nSteps)
{
	int nTempCount = 0;
	if (nCurrenCount < nSteps)
	{
		for (int i = 1; i <= 3; i++)
		{
			nTempCount = nCurrenCount + i;
			if (nTempCount > nSteps)
				break;
			else if (nTempCount == nSteps)
			{
				ntotalWays++;
				return 0;
			}
			else
				noOfWays(nTempCount, nSteps);
		}
	}
	return 0;
}
int main()
{
	int nSteps = 0;
	cout << "enter the no of steps";
	cin >> nSteps;

	if (nSteps <= 0)
		cout << "enter Valid no of steps";

	noOfWays(0, nSteps);

	cout << ntotalWays;


}