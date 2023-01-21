#include<iostream>
using namespace std;
void printPercentage(int n);
main()
{
    int n;
    printPercentage(n);
   

}
void printPercentage(int n)
{
    int digit;
    float p1=0.0;
    float p2=0.0;
    float p3=0.0;
    float p4=0.0;
    float p5=0.0;
    float result=0.0;
    cout<<"Enter no of digits :";
    cin>>n;
    for(int count=1;count<=n;count=count+1)
    {
        cout<<"Enter number : ";
        cin>>digit;
        if(digit>0 && digit<200)
        {
            p1=p1+1;

        }
        if(digit>=200 && digit<=399)
        {
            p2=p2+1;
            
        }
        if(digit>=400 && digit<=599)
        {
            p3=p3+1;
        
        }
        if(digit>=600 && digit<=799)
        {
            p4=p4+1;
    
        }
        if(digit>=800 && digit<1000)
        {
            p5=p5+1;
        }
 
    }
    float prcnt1 =(p1/n)*100;
   float prcnt2 =(p2/n)*100;
   float prcnt3 =(p3/n)*100;
   float prcnt4 =(p4/n)*100;
   float prcnt5 =(p5/n)*100;


   cout<<"P1 = "<<prcnt1 <<"%" <<endl;
   cout<<"P2 = "<<prcnt2<<"%" <<endl;
   cout<<"P3 = "<<prcnt3<<"%" <<endl;
   cout<<"P4 = "<<prcnt4<<"%" <<endl;
   cout<<"P5 = "<<prcnt5<<"%" <<endl;

}