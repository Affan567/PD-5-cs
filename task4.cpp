#include <iostream>
using namespace std;
int price(char c,int p);

int main()
{
    int v, finalprice;
    char code;
    cout<<"Enter vehicle type code: ";
    cin>>code;
    cout<<"Enter the price of vehicle:$ ";
    cin>>v;
    finalprice = price (code,v);
    cout<<"The final price of a vehicle of type "<<code<<"after adding the tax is: $ "<<finalprice;
    return 0;

}

int price(char c,int p)
{
    float tax_rate,tax_amount,f_p;
    if (c == 'M')
    {
        tax_rate=6;
        tax_amount = p * (tax_rate/100);
    }
    if (c == 'E')
    {
        tax_rate=8;
        tax_amount = p * (tax_rate/100);
    }
    if (c == 'S')
    {
        tax_rate=10;
        tax_amount = p * (tax_rate/100);
    }
    if (c == 'V')
    {
        tax_rate=12;
        tax_amount = p * (tax_rate/100);
    }
    if (c == 'T')
    {
        tax_rate=12;
        tax_amount = p * (tax_rate/100);
    }
    f_p = p + tax_amount;
    return f_p;

}