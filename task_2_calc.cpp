#include<iostream>
using namespace std;
int main()
{
    float num1, num2, sol;
    int choice=0;
    char ans='y';
    
    cout<<"*****Simple Calculator*****\n";
    cout<<"You can perform:\n";
    cout<<"1.Addition\n";
    cout<<"2.Subtraction\n";
    cout<<"3.Multiplication\n";
    cout<<"4.Division\n";
    
    cout<<"\nEnter your choice in number:";
    cin>>choice;

	while(ans=='y')
    {
        if(choice>4||choice<0)
		{
			cout<<"\nEnter a valid choice:";
        	cin>>choice;
		}
        else
    	{
        	cout<<"\nEnter first number:";
        	cin>>num1;
        	cout<<"Enter second number:";
        	cin>>num2;
			if(choice==1)
        	{
            	sol=num1+num2;
            	cout<<"Addition of given Numbers:"<<sol;
        	}
	        if(choice==2)
    	    {
        	    sol=num1-num2;
            	cout<<"Subtraction of given Numbers:"<<sol;
	        }
    	    if(choice==3)
        	{
            	sol=num1*num2;
            	cout<<"Multiplication of given Numbers:"<<sol;
        	}
	        if(choice==4)
    	    {
        		sol=num1/num2;
            	cout<<"Division of given Numbers:"<<sol;
    	    }
    	}
        cout<<"\n\nEnter small 'y' to do more operations or any other key to exit:";
        cin>>ans;
        if(ans=='y')
        {
			cout<<"\nEnter your choice in number:";
    		cin>>choice;
    	}
	}
    return 0;
}
