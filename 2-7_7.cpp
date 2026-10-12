#include <iostream>

void print(int, int);
int h, m;

int main(){
    using namespace std;
    cout << "Enter the number of hours: ";
    cin >> h;
    cout << "Enter the number of minutes: ";
    cin >> m;
    print(h, m);
    return 0;
}

void print(int h, int m ){
    std::cout   << "Time: "
                << h
                << ": "
                << m
                << std::endl;
}