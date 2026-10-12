#include <iostream>
#include <cmath>

int main(){
    using namespace std;

    int degree, minutes, seconds;
    float degree_di;
    const float CHANGE = 60.0;

    cout << "Enter a latitude in degrees, minute, and seconds: " << endl;
    cout << "Enter the degree:";
    cin >> degree;
    cout << "Enter the minutes:";
    cin >> minutes;
    cout << "Enter the seconds:";
    cin >> seconds;

    degree_di = (float)degree + (minutes * CHANGE + seconds)/pow(CHANGE, 2);

    cout << degree << " degreees," << minutes << " munites," << seconds << " seconds, " << "= " << degree_di << " degrees" << endl;

    return 0;
}