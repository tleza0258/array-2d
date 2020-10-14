#include <iostream>
#include <iomanip>
using namespace std;
int main (void)
{
	int val[2][4];
	for (int i = 0;i < 2; ++i)
	{
		cout << "Enter test ["<<i+1<<"] :";
		cin >> val[i][0];
		cout << "Enter midterm ["<<i+1<<"] :";
		cin >> val[i][1];
		cout << "Enter final ["<<i+1<<"] :";
		cin >> val[i][2];
		val [i][3] = val[i][0]+val[i][1]+val[i][2];
		cout << setw(60) << setfill('-')<<" " << endl;

	}
		cout << setw(60) << setfill('-')<<" " << endl;
		cout << "No.\t Subtest\t Midterm\t Final\t Total"<< endl;

		for (int i = 0;i < 2; i++ )
		{	
			cout << endl;
			cout << i+1 << "\t" << val[i][0] << "\t" << val[i][1] << "\t" << val[i][2] << "\t" << val[i][3] <<endl;
		}
	return 0;
}