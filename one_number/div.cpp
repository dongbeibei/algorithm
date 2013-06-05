/*
 * the initial version: using diving 2 to count the number
 */


#include <iostream>

using namespace std;

int Count(int v);

int main(void)
{
	int test;

	while(cin>>test)
		cout<<"the result is:\t"<<Count(test)<<endl;

	return 0;
}

int Count(int v)
{
	int num = 0;
	while(v)
	{
		if(v%2 == 1)
			num++;
		v /= 2;
	}

	return num;
}
