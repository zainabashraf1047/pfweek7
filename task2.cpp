#include<iostream>
using namespace std;

void printSeries(int number);
main()
{
  int number;
  cout<<"Enter a number : ";
  cin>>number;
  printSeries(number);
}
void printSeries(int number)
{
    int previous= 0;
    int current= 1;
    int next;
    cout<<previous<<"," <<current;
   for(int count=1 ; count<=number-2 ; count=count+1)
   {
      next=previous+current;
      cout<<","<<next ;
      previous=current;
      current=next;
   }
}