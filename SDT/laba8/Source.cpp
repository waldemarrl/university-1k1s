#include <iostream>
#include <iomanip> 
using namespace std;

int getSum(int x, int y);
int getMul(int x, int y);

int main(int arcg, char* arvg[])
{
	int parm1 = 5;
	for (int i = 0; i < 5; i++)
	{
		int parm2 = parm1 + i;
		int result_getSum = getSum(parm1, parm2);
		cout << "i = " << i << "\t";
		cout << "getSum( " << parm1 << " , " << parm2 << " ) = " << result_getSum << endl;
	}
	int result_getMul = getMul(2, 3);
	cout << result_getMul << endl;

	system("pause");
	return 0;
}
