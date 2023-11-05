class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        double kel = celsius + 273.15;
        double far = celsius * 1.80 + 32.00;
            
        vector<double> vect;
 
        vect.push_back(kel);
        vect.push_back(far);
        
        return vect;
    }
};