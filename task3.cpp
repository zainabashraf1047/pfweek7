#include<iostream>
using namespace std;
int totalDigits(int number);
main()
{
  int number;
  cout<<"Enter number : ";
  cin>>number;
  int digits=totalDigits( number);
  cout<<digits;
}
int totalDigits(int number)
{
    int digits=0;
    while(number>0)
    {
     digits=digits+1;
     number=number/10;

    }
  return digits;
}