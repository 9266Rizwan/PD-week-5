#include <iostream>
using namespace std;
float volume();
main()
{
    cout << volume();
}
float volume()
{
    float length;
    float width;
    float height;
    string unit;
    cout << "Enter length : ";
    cin >> length;
    cout << "Enter Width  : ";
    cin >> width;
    cout << "Enter Height : ";
    cin >> height;
    cout << "Enter Unit i.e centimeters,millimeters,kilometers  : ";
    cin >> unit;

    if(unit=="millimeters")
    {
        float result=(length*width*height/3)*1000;
        cout << result;
    }
    if(unit=="centimeters")
    {
        float result=(length*width*height/3)*100;
        cout << result;
    }
    /*if(unit=="meters")
    {
        float result=(length*width*height/3);
        cout << result;
    }*/
    if(unit=="kilometers")
    {
        float result=(length*width*height/3)*0.001;
        cout << result;
    }
    return 0;
    
}