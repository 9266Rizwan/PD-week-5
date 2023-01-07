#include <iostream>
using namespace std;
float taxcalculator(char type,float price);
string Vehicle(char type);
main()
{
    system("cls");
    char type;
    float price;
    float result;
    string backvalue;
    cout << "Enter Vehicle type  : ";
    cin >> type;
    cout << "Enter Vehicle Price : ";
    cin >> price;
    backvalue=Vehicle(type);
    result=taxcalculator(type,price)+price;
    cout << "The final price on a vehicle of type "<<backvalue<<" after adding the tax is "<<result;
}
float taxcalculator(char type,float price)
{
    if(type=='M')
    {
        float taxprice=price*0.06;
        return taxprice;
    }
    if(type=='E')
    {
        float taxprice=price*0.08;
        return taxprice;
    }
    if(type=='S')
    {
        float taxprice=price*0.10;
        return taxprice;
    }
    if(type=='V')
    {
        float taxprice=price*0.12;
        return taxprice;
    }
    if(type=='T')
    {
        float taxprice=price*0.15;
        return taxprice;
    }
    return 0;
}
string Vehicle(char type)
{
    if(type=='M')
    {
        string vehicle;
        vehicle="Motorcycle (M)";
        return vehicle;
    }
    if(type=='E')
    {
        string vehicle;
        vehicle="Electric (E)";
        return vehicle;
    }
    if(type=='S')
    {
        string vehicle;
        vehicle="Sedan (S)";
        return vehicle;
    }
    if(type=='V')
    {
        string vehicle;
        vehicle="Van (V)";
        return vehicle;
    }
    if(type=='T')
    {
        string vehicle;
        vehicle="Truck (T)";
        return vehicle;
    }
    
    return 0;
}