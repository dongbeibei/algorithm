/*
 * the last zero number of the factorial(n)
 */


#include <iostream>

using namespace std;

int main(void)
{
	int	n,i,j, ret = 0;

	cin>>n;

	for(i=1 ; i<=n ; i++)
	{
		j = i;
		while(j%5 == 0)
		{
			ret++;
			j /= 5;
		}
	}

	cout<<"the result is:\t"<<ret<<endl;

	return 0;
}
