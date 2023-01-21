#include<iostream>
using namespace std;
int hcf(int number1,int number2);
int calculatelcm(int number1,int number2,int gcd);
main()
{
    int number1 ;
    int number2 ;
    int gcd ;
    cout<<"Enter  number 1: ";
    cin>>number1;
    cout<<"Enter  number 2: ";
    cin>>number2;
    gcd = hcf(number1,number2);
    cout<<"GCD is : "<<gcd;
    int lcm;
   
    lcm = calculatelcm(number1,number2,gcd);
    cout<<"   lcm is:"<< lcm;
    

}
int hcf(int number1,int number2)
{
    int gcd=0;
    for(int count=2; count<=number2 ; count=count+1)
     {
        if(number1%count==0 && number2%count ==0 )
        {
           gcd=count;
        }
     
     }
        return gcd;
}
int calculatelcm(int number1,int number2,int gcd)
{
   int lcm;
   lcm = (number1*number2)/gcd;
   return lcm;
}
