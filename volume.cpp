#include<iostream>
using namespace std;
double pyramidVolume(double l,double w,double h,string unit);
main()
{
    double l,w,h;
    string unit;
    cout << "Enter the length of the pyramid (in meters): ";
    cin >> l;
    cout << "Enter the width of the pyramid (in meters): ";
    cin >> w;
    cout << "Enter the height of the pyramid (in meters): ";
    cin >> h;
    cout << "Enter the desired output unit (millimeters, centimeters, meters, kilometers): ";
    cin >> unit;
    pyramidVolume(l,w,h,unit);
}
double pyramidVolume(double l,double w,double h,string unit)
{
    if(unit=="millimeters")
{
    double mili=10^3;
    double volume=(l*mili)*(w*mili)*(h*mili)/3;
    cout <<"The volume of the pyramid is: "<< volume << " cubic milimeters";
}    
if(unit=="centimeters")
{
    double centi=10^-2;
    double volume=(l*centi)*(w*centi)*(h*centi)/3;
    cout <<"The volume of the pyramid is: "<< volume << " cubic centimeters";
} 
if(unit=="kilometers")
{
    double kilo =10^3;
    double volume=(l*kilo)*(w*kilo)*(h*kilo)/3;
    cout <<"The volume of the pyramid is: "<< volume  << " cubic kilometers";
}     
if(unit=="meters")
{

    cout <<"The volume of the pyramid is: "<<  (l*w*h)/3 << " cubic meters";
}   
}
