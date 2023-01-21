#include<iostream>
using namespace std;
void counting(int num);
main()
{
   int num;
   cout<<"Enter a number : ";
   cin >>num;
   counting(num);
}
void counting(int num)
{
    int i=1;
    while(i<=num)
    {
        cout<<"\t" <<i <<endl;
        i = i+1;
    }
}