#include <stdlib.h>
#include <iostream>

using namespace std;

// Console output text
string HEADER = "-------------------------\n- Temperature Converter -\n-------------------------\n";

// Units of Measurement class
class unit {
    public:
        string name;
        char c;
};

string getName(char c) {
    string name = "Initial";
    switch(c) {
        case 'C':
            name = "Celsius";
            break;
        case 'F':
            name = "Fahrenheit";
            break;
        case 'K':
            name = "Kelvin";
            break;
        default:
            cerr << "Unexpected index for unit";
    }
    return name;
}

long double convert(char from, char to, long double t) {
    long double ans = t;
    
    return ans;
}

bool input() {
    unit from;
    unit to;
    long double t = 0;
    long double ct = 0;
    string exit;

    cout << endl << "Enter tempurature: ";
    cin >> t;
    cout << endl << "Enter initial units (C = Celsius, F = Fahrenheit, K = Kelvin): ";
    cin >> from.c;
    cout << "Enter conversion units (C = Celsius, F = Fahrenheit, K = Kelvin): ";
    cin >> to.c;
    // Get unit names
    from.name = getName(from.c);
    to.name = getName(to.c);
    // Get converted temperature
    ct = convert(from.c, to.c, t);
    // Print conversion
    cout << endl << t << "° " << from.name << " = " << ct << "° " << to.name << endl;
    // Prompt user to exit
    cout << "Continue converting? (y/n): ";
    cin >> exit;
    return (exit == "n" || exit == "N" || exit == "no" || exit == "No") ? true : false;
}

int main() {
    bool exit = false;

    cout << HEADER;
    exit = input();
    while(!exit) {
        exit = input();
    }
}