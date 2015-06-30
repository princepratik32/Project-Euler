#include<iostream>

using namespace std;

int main()
{
	const unsigned int MAXNUMBER = 1000;
	unsigned int sum = 0, i = 0, num3 = 0, num5 = 0;
	while(i < MAXNUMBER)
	{
		if(!(i % 3) || !(i % 5))
			sum += i;
		++i;
	}
	cout<<"SUM: "<<sum<<endl;
	return 0;
}
