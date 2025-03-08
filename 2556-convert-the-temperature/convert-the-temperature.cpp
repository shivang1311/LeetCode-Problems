class Solution {
public:
    // shivang agrawal
    vector<double> convertTemperature(double celsius) {
        vector<double> converted;
        double kelvin = celsius+273.15;
        kelvin = round(kelvin*100000)/100000;
        double fahr = (celsius*1.80)+32.00;
        fahr = (round(fahr*100000)/100000);
        converted.push_back(kelvin);
        converted.push_back(fahr);
        return converted;
    }
};