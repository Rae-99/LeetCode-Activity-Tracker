class Solution {
public:
    vector<double> convertTemperature(double cel) {
        return {cel+273.15, cel*1.80+32.00};
    }
};