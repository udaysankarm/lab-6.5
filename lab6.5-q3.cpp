#include<iostream>
#include<cmath>//for using function to find square root
using namespace std;
int main()
{
	long  i,s=1,k=1; /*declaring variables and the sum here k is used find position of the number in the line of such numbers*/
	int r; //declaring r for storing their square root
	cout<<endl;
	//i is intiated with 2 ans s is intiated 1 with to avoid the case of being considered as an result
	for(i=2;k<=4;i++)/*loop for summation of numbers and for checking whether they are perfect square or not. if s is not 
	perfect square r will have some fractional part this will not be stored sice r is int thus square of integer part 
	of r will not equal to s*/
	{
		s=s+i; //storing the sum of numbers from 1 to some n
		r=sqrt(s); //storing the square root of s
		if((r*r)==s) //checking whether the number is perfect square 
		{
		     cout<<endl<<"case "<<k<<" is:"<<s<<"\n\tthis number is the square of:"<<r; //printing the number
		     cout<<"\n \tsum of first "<<i<<" numbers give this number"<<endl; //printing the specifications of that number
		     cout<<"##################################################";
		     k++; /*increamenting value of k here k is the control variable which controls the loop*/
		     
		}
	}
	
	return 0;
}
