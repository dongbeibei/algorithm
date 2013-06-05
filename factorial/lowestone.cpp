#include <iostream>

using namespace std;

int main(void)
{
	int n, ret = 0;

	cin>>n;
	while(n)
	{
		n >>= 1;
		ret += n;
	}

	cout<<"the result is:\t"<<ret<<endl;

	return 0;
}
