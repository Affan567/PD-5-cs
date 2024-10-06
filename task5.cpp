#include <iostream>
using namespace std;
int  project_time(float hours,float days,float workers);
int main()
{
    float h, d,w;
    cout<<"Enter number of hours needed: ";
    cin>>h;
    cout<<"Enter number of days firm has: ";
    cin>>d;
    cout<<"Enter number of workers: ";
    cin>>w;
    project_time(h,d,w);
    
    return 0;

}

int  project_time(float hours,float days,float workers)
{
    float t_hours_1days = workers * 10;
    float t_hours_ndays = t_hours_1days * days;
    float excluded_hours = (days * 0.1) * t_hours_1days;
    float hours_rem = t_hours_ndays - excluded_hours;
    float h_left;
    if (hours_rem > hours)
    {
        
        float h_left = hours_rem - hours;
        cout<<"Yes " <<h_left<<"hours are lest";
    }
    if ( hours > hours_rem)
    {
        
        float h_need =  hours - hours_rem ;
        cout<<"No"<<h_need<<"hours are needed";
        
    }
}
