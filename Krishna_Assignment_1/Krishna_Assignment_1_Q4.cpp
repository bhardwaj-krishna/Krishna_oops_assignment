// name: Krishna Bhardwaj
// roll number:1024150316
#include <iostream>
using namespace std;

int main() {
    float tempCelsius, tempFahrenheit;

    cout << "Enter temperature in Celsius: ";
    cin >> tempCelsius;
    
    tempFahrenheit = (9 * tempCelsius / 5) + 32;
    
    cout << "Temperature in Fahrenheit: " << tempFahrenheit;
    
    return 0;
}