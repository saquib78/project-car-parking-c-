/*        car parking project
	REQUIRMENTS
	There are four type of vehical to be parked in parking
	1] Rickshaw        Amount==75
	2]car              Amount==100
	3]truck			   Amount==150
	4]buses            Amount==200
	
	Maximum number of vehical to be parked 50
	
	should be able to see the record {total amount+no of vehical which are parked in parking}also individul no of vehical
	
	shoud be able to delet the whole record     */         

#include<iostream>
using namespace std;

int main()
{
	int count=0;
	int amount=0;
	int x;
	int r=0;	//for rickshaw
	int c=0;	//for car
	int b=0;	//for bus
	int t=0;	//for truck
while(true)
{
		
	
	cout<<"for rickshaw press 1 "<<endl;
	cout<<"for car press 2 "<<endl;
	cout<<"for truck press 3"<<endl;
	cout<<"for bus press 4"<<endl;
	cout<<"total number of vehical and amount press 5 "<<endl;
	cout<<"for delet the data press 6 "<<endl;
	cout<<"for end the program press 7"<<endl<<endl;	
	cout<<"enter your command"<<endl;
	cin>>x;
	
	if(x==1)
	{
		if(count<=50)
		{
			
	count=count+1;
	amount=amount+75;
	r++;
	
		}
		else
		cout<<"parking is full"<<endl;
	}
	else if(x==2)
	{
		if(count<=50)
		
		{
	count=count+1;
	amount=amount+100;
	c++;
	
		}
		else
		cout<<"parking is full"<<endl;
	}
	else if(x==3)
	{
		if(count<=50)
		{
			
	count=count+1;
	amount=amount+150;
	t++;
	
		}
        else
		cout<<"parking is full"<<endl;
	}
	else if(x==4)
	{
		if(count<=50)
		{
			
	count=count+1;
	amount=amount+200;
	b++;
	
 		}
		else
		cout<<"parking is full"<<endl;
	}
	else if(x==5)
	{
	cout<<"*****************************************************************"<<endl<<endl;
	cout<<"total number of vehical parked in parking = "<<count<<endl<<endl;
	cout<<"total amount collected by vicheal parking = "<<amount<<endl;
	cout<<"total number of rickshaw = "<<r<<endl;
	cout<<"total number of car = "<<c<<endl;
	cout<<"total number of truck = "<<t<<endl;
	cout<<"total number of bus = "<<b<<endl;
	cout<<"*****************************************************************"<<endl<<endl;
	}
	else if(x==6)
	{
	count=0;
	amount=0;
	r=0;
	c=0;
	t=0;
	b=0;
	cout<<"***************************************************************"<<endl<<endl;
	cout<<"your all data is deleted"<<endl;
	cout<<"****************************************************************"<<endl<<endl;
	}
	else if(x==7)
	{
		return 0;
	}
	
}
	
}
