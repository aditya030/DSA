#include<iostream>
using namespace std;

//Function to find the sum of two numbers.
int Print_Sum(int n1, int n2)
{
    cout<<"Sum of the two numbers has been generated."<<endl<<endl;
    int sum=n1+n2;

    cout<<"Current value of num1 from the PrintSum function: "<<n1<<endl;
    n1++;

    cout<<"Current value of num2 from the PrintSum function: "<<n2<<endl<<endl;
    n2++;

    cout<<"Updated value of num1 from the PrintSum function: "<<n1<<endl;
    cout<<"updated value of num2 from the PrintSum function: "<<n2<<endl<<endl;

    //Returning the sum opf two numbers that we have generated.
    return sum;
}

int main()
{
    int n1, n2,sum=0;
    
    
    cout<<"Enter the two numbers: "<<endl;
    cin>>n1>>n2;

    cout<<"Current value of num1 from the main function: "<<n1<<endl;
    cout<<"Current value of num2 from the main function: "<<n2<<endl<<endl;

    
    sum=Print_Sum(n1,n2);
    cout<<"Sum of the inputted numbers is: "<<sum<<endl;
    cout<<"Sum has been printed."<<endl<<endl;

    
    cout<<"Value of num1 from the main function after execution of PrintSum function: "<<n1<<endl;
    cout<<"Value of num2 from the main function after execution of PrintSum function: "<<n2<<endl;
    return 0;
}