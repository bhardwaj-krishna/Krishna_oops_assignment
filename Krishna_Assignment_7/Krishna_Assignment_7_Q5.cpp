// name: Krishna Bhardwaj
// roll number: 1024150316
#include <iostream>
using namespace std;

class Time {
    int hours, minutes, seconds;
public:
    Time(int h = 0, int m = 0, int s = 0) {
        hours = h; 
        minutes = m; 
        seconds = s;
    }
    
    Time operator +(Time otherTime) {
        Time tempTime;

        tempTime.seconds = seconds + otherTime.seconds;
        tempTime.minutes = minutes + otherTime.minutes + tempTime.seconds / 60;
        tempTime.seconds %= 60;
        
        tempTime.hours = hours + otherTime.hours + tempTime.minutes / 60;
        tempTime.minutes %= 60;
        
        return tempTime;
    }
    
    void show() {
        cout << hours << ":" << minutes << ":" << seconds << endl;
    }
};

int main() {
    Time time1(5, 15, 34), time2(9, 53, 58), timeResult;
    
    timeResult = time1 + time2;
    timeResult.show();
    
    return 0;
}