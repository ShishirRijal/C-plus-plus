#include <iostream>
using namespace std;

class Time
{
    int hr;
    int min;
    int sec;

public:
    Time(int h, int m, int s)
    {
        hr = h;
        min = m;
        sec = s;
    }
    void display()
    {
        cout << hr << " hour, " << min << " minute, " << sec << " second" << endl;
    }
    void add(Time t)
    {
        sec = sec + t.sec;
        min = min + t.min + sec / 60;
        hr = hr + t.hr + min / 60;
        sec = sec % 60;
        min = min % 60;
    }
    void subtract(Time t)
    {
        sec = sec - t.sec;
        if (sec < 0)
        {
            sec += 60;
            min--;
        }
        min = min - t.min;
        if (min < 0)
        {
            min += 60;
            hr--;
        }
        hr = hr - t.hr;
    }
};

int main()
{
    Time t1(12, 23, 24);
    t1.display();
    Time t2(4, 59, 67);
    t1.add(t2);
    t1.display();
    t1.subtract(t2);
    t1.display();
    return 0;
}