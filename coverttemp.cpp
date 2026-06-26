#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<double> convertTemperature(double celsius) {

        double kelvin = celsius + 273.15;
        double Fah = celsius * 1.80 + 32.00;

        return {kelvin, Fah};
    }
};