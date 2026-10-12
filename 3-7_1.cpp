#include <iostream>
#include <cmath>

int main(){
    using namespace std;

    const float Pound = 2.2;
    const float Inch = 0.0254;
    const float Foot = 12.0;

    float foot, inch, weight;
    cin >> foot >> ws >> inch >> ws >> weight;
    cout << "The height is: " << foot* Foot + inch << "in";
    cout << "BMI = " << (weight / Pound ) / pow((foot* 12 + inch)*Inch, 2 );

    return 0;


}