#include<iostream>
using namespace std;
float result,tax;
float taxCalculator(char type,float price)
{
    if(type=='M')
    {
    tax=(price*6)/100;
    result=tax+price;
    return result;
    }
if(type=='E')
    {
    tax=(price*8)/100;
    result=tax+price;
    return result;
    }
    if(type=='S')
    {
    tax=(price*10)/100;
    result=tax+price;
    return result;
    }
    if(type=='V')
    {
    tax=(price*12)/100;
    result=tax+price;
    return result;
    }
    if(type=='M')
    {
    tax=(price*12)/100;
    result=tax+price;
    return result;
    }
}
main()
{
    char type;
    float price;
    cout << "Enter the vehicle type code (M, E, S, V, T): ";
    cin >> type;
    cout << "Enter the price of the vehicle: $";
    cin >> price;
    taxCalculator(type,price);
    cout <<"The final price of a vehicle of type " <<type << " after adding the tax is $" << result <<".";

}

