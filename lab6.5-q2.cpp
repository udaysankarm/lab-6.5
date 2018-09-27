#include<iostream>
using namespace std;
int data()//function to receive the needed data in this case it is number of shoes
{
	int a; //varible in the function to store the number of shoes 
	cout<<"\nEnter the number of shoes that you usually sell";
	cin>>a;//receving the vnumber of shoes he sells
	return a; //giving this value to the main function
}
int case1()//fuction to display the weekely salary by the first option
{
	cout<<"according to the first given option your tottal weekely salary would be: 600\n";//
	cout<<"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$";
	return 600;
}
int case2(int b)//function to calculate the weekely salary for the second option 
{
	int s; //variable to store the weekely salary
	s = 7*40 + b*225/10; //calculatting the weekly salary (7 per hour for 40 hours plus commission from sales)
	cout<<"\nthe weekely salary according to the second option is:"<<s<<endl;
	cout<<"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$";
	return s;
}
int  case3(int c)//function to calculate the weekely salary for the third option
{
	int s;
	s = c*(20 + 225*20/100);
	cout<<"\nthe weekely salary according to the third option is:"<<s;//printing the weekely salary for third case 20 per sale + 20% of 225
	cout<<"\n$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$";
	return s;
}
int main() //main function or driver function
{    
    int NoSh,s1,s2,s3; //varible in the main function to store number of shoes sold
    NoSh=data(); //assinging the returned value from the function to NoSh
    cout<<endl;
    s1=case1();
    s2=case2(NoSh);
    s3=case3(NoSh);
    cout<<endl;
    if(s1>s2&&s1>s3)
    cout<<"\nfirst option is the best and your weekely salary will be:"<<s1;
    if(s2>s1&&s2>s3)
    cout<<"\nsecond option is the best and your weekely salary will be:"<<s2;
    if(s3>s1&s3>s2)
    cout<<"\nthird option is the best and your weekely salary will be:"<<s3;
    return 0;
}
