#include<iostream>
using namespace std;
int digitSum(int number);
main()
{
    int sum;
  int number;
  cout<<"Enter number : ";
  cin>>number;
  sum =digitSum(number);
  cout<<sum;
}
int digitSum(int number)
{
    int sum;
    while(number>0)
    {
 
     number=number%10;
     number=number/10;
    int sum=number1+number2;
    }
    return sum;
}