//  Write a C++ program to add two distances in inch-feet using structure.

#include <iostream>
using namespace std;

struct Distance {
    int feet;
    int inches;
};

Distance addDistances(dis d1, dis d2){
    dis result;
    result.inch = d1.inch+d2.inch;

    if(result.inch>= 12){
        result.feet = d1.feet + d2.feet + result.inch/12 ;
        result.inch %= 12;
    }
    else{
        result.feet = d1.feet+d2.feet;
    }
    return result;
}



int main() {
    Distance dis1, dis2;

    cout << "Enter the first distance:" << endl;
    cout << "Feet: ";
    cin >> dis1.feet;
    cout << "Inches: ";
    cin >> dis1.inches;

    cout << "\nEnter the second distance:" << endl;
    cout << "Feet: ";
    cin >> dis2.feet;
    cout << "Inches: ";
    cin >> dis2.inches;

    Distance sum = addDistances(dis1, dis2);

    cout<< "Sum of distance "<< sum.feet <<" Feet " << sum.inch << "Inches"

    return 0;
}
