#include<iostream>
int validinteger(int number);
main()
{
    int number;
    cout<<"Enter a number : ";
    cin >>number;
    result=validinteger( number);
    cout<<result;
}
int validinteger(int number)
{
    while(number<=0)
    {
        cout <<"Error ! Please insert number greater than 0" <<endl;
        cout<<"Enter the number again : ";
        cin>>number;

    }
    return number;
}