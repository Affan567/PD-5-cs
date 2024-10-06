#include <iostream>
using namespace std;
float volumep (float length,float height,float width,string unit);

main()
{
    float l, w,h;
    string u;
    cout<<"Enter value of length of the pyramid:";
    cin>>l;
    cout<<"Enter value of height of the pyramid:";
    cin>>h;
    cout<<"Enter value of width of the pyramid:";
    cin>>w;
    cout<<"Enter the desired units(meter,millimeters,centimeters,kilometers,): ";
    cin>>u;
    float v = volumep(l,h,w,u);
    cout<<"The Volume of the pyramid is:"<<v <<"cubic "<<u ;

}

float volumep (float length,float height,float width,string unit)
{
    float volume;
    volume = (length * height * width)/3;
    return volume;
    if (unit == "millimeters")
    {
        volume = volume * 1000*1000 *1000 ; 
        return volume;
        
    }
    if (unit == "meters")
    {
        volume = volume * 1; 
        return volume;
    }
    if (unit == "centimeters")
    {
        volume = volume  * 100 * 100 *100;
        return volume; 
    }
    if(unit == "kilometers")
    {
        volume = volume/1000 *1000 *1000;
        return volume;
    }


}