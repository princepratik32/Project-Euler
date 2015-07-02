#include<iostream>
#include<array>

using namespace std;
unsigned long int gcd(unsigned long int, unsigned long int);
unsigned long int lcm(unsigned long int, unsigned long int);
int main()
{
	array<unsigned long int, 20> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
	unsigned long int temp = a[0];
	for(int i = 1; i < a.size(); ++i)
	{
		temp = lcm(temp, a[i]);
	}
	cout<<temp<<endl;
	return 0;
}
unsigned long int gcd(unsigned long int a, unsigned long int b)
{
	unsigned long int temp;
	while(b != 0)
	{
		temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}
unsigned long int lcm(unsigned long int a, unsigned long int b)
{
	return (a * b)/gcd(a, b);	
}
