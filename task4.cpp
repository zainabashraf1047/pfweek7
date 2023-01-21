#include<iostream>
using namespace std;
int frequencychecker(int number,int digit);
main()
{
    int number;
    int digit;
  cout<<"Enter number : ";
  cin>>number;
  cout<<"Enter digit whose frequency you want to check : ";
  cin>>digit;
   int increment= frequencychecker(number,digit);
   cout<<increment;
}
int frequencychecker(int number,int digit)
{
  int firstmod;
  int increment=0;
  while(number>0)
    {
    firstmod = number%10;
    if(firstmod == digit )
    {
        increment=increment+1;
    }
    number=number/10;
    }
    return increment;
    
}