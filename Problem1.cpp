/*If we list all the natural numbers below 10 that are multiples
  of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
  Find the sum of all the multiples of 3 or 5 below 1000.*/

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
