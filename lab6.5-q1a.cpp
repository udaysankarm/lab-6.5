#include<iostream>
using namespace std;
int main() //intiating main function
{
	float Ap,Ba,Ma,s,i=1; // decaring variables to store number of apples(Ap),number of bananas(Ba),number of mangos(Ma)and the tottal cost of bannas plus apples
	for(Ap=0;Ap<=100;Ap++) //loop to control the variable Ap
	{
		for(Ba=0;Ba<=(100-Ap);Ba++)//loop to control Ba varing from zero to macimum number of bananas such that the sum is 100
		{
			Ma=100-(Ap+Ba); //since the tottal number of friuts is 100  number of mangoes will be what remaing when number of apples and bananas are subtracted from 100
			s= Ap+Ma*3+Ba/2;// tottal cost of fruits  we need to consider only the cases in which this sum is 100
			if(s==100) //the cases in which the sum is 100
			{
				cout<<"\ncase :"<<i<<"\n \tnumber of apples bought:"<<Ap;//printing the number of apples
				cout<<"\n \tnumber of bananas bought:"<<Ba;//printing the number of bananas
				cout<<"\n \tnumber of mangoes bought:"<<Ma<<endl; //printing the number of Mangoes
				cout<<"######################################################################";
				i++;   //variable to represent the respectieve case 
		    }
		}
	}
return 0;
}
