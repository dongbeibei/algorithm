/*
 * the last zero number of the factorial(n)
 */


#include <iostream>

using namespace std;

int main(void)
{
	int	n, ret = 0;

	cin>>n;

	while(n)
	{
		ret += n/5;
		n /= 5;
	}

	cout<<"the result is:\t"<<ret<<endl;

	return 0;
}
