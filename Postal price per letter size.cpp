// Postal price per letter size.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main() {

    double length, width, thickness, rate;
    int Dimensions = 0;


    cout << " Enter the length, width and thickness " << endl;
    cin >> length >> width >> thickness, rate;

    Dimensions = length * width * thickness;


    if (Dimensions <= 141000) {
        cout << " The postal rate is R " << 2.50;
    }

    else if (Dimensions >= 141000 && Dimensions <= 440000) {
        cout << " The postal rate is R" << 5;

    }

    else if (Dimensions >= 440000 && Dimensions <= 2647500) {
        cout << " The postal rate is R" << 6.25;

    }

    else if (Dimensions >= 2647500) {
        cout << " This is no longer a letter its a parcel" << endl;
        cout << " Parcel rate is R" << 10;

    }




    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
