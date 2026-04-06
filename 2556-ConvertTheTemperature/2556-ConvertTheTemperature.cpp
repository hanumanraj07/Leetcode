// Last updated: 4/6/2026, 5:55:38 PM
class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        double kelvin = celsius + 273.15;
        double fahrenheit = celsius * 1.80 + 32.00;
        
        return {kelvin, fahrenheit};
    }
};