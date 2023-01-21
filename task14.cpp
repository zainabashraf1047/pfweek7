#include<iostream>
using namespace std;
float calculateMoney(int age,float machinePrice,int toyPrice);

main()
{
  int age;
  float machinePrice;
  int toyPrice;  
  cout<<"Enter lilli's age : ";
  cin>>age;
  cout<<"Enter price of washing machine : ";
  cin>>machinePrice;
  cout<<"Enter price of one toy : ";
  cin>>toyPrice;
  calculateMoney(age,machinePrice,toyPrice);
  cout<<calculateMoney;
  if(totalmoney>machineiPrice)

}
float calculateMoney(int age,float machinePrice,int toyPrice)
{
   int totalmoney;
   int totaltoys=0;
   int totalsavings;
   int savings=0;

   for(int count=2 ;count<=age ; count=count+2);
   {
    if(age%2==0) //evenage
    {
      savings=savings+(count*5);
      
    }
    totalsavings=savings-(age/2);
   }
    for(int count=1 ;count<=age;count=count+2)
    if(age%2 !=0 ) //oddage
    {
       toyprice=toyprice*count;

    }
    totalmoney=savings+toyprice;
    totalmoney=totalmoney-savings;


}
