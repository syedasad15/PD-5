#include<iostream>
using namespace std;
main()
{
    float hours,days,workers,time,off,totaltime;
    cout << "Enter the needed hours: ";
    cin >>hours;
    cout <<"Enter the days that the firm has: ";
    cin >>days;
    cout<< "Enter the number of all workers: ";
    cin >> workers;
    time=10;
    off=(time*10)/100;
    totaltime=(time-off)*days*workers;
    if(totaltime<hours)
    {
        float final;
        final=hours-totaltime;
        cout <<"Not enough time! "<<final << " hours needed.";
    }
    if(totaltime>hours)
    {
    float final;
    final=totaltime-hours;
    cout << "Yes! " <<final << " hours left.";
    }

}