#include<iostream>
using namespace std;
void printTable(int number);
main()
{
    int number;
    cout<<"enter number : ";
    cin>>number;
    printTable(number);
}
void printTable(int number)
{
   for(int count = 1; count <=10 ; count = count +1)
   {
    cout<<number <<"*" <<count <<" = " <<number*count <<endl;
   }
}