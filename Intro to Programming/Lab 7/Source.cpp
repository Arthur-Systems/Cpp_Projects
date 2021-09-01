#include <iostream>

using namespace std;

void multiFunction(int secoundnum, int firstnum)
{
	int total = secoundnum * firstnum;
	cout << firstnum << "*" << secoundnum << "=" << total << endl;
};

int main()
{
	int firstnum = 1, secoundnum = 0;
	while (firstnum <= 12)
	{
		for (int x = 0; x < 12; x++)
		{
			secoundnum++;
			multiFunction(secoundnum, firstnum);
		}
		if (secoundnum >= 12)
		{
			cout << endl;
			secoundnum = 0;
			firstnum++;
		}
	}
}

//cout<<"test" <<endl;
