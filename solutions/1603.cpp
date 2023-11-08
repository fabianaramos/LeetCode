class ParkingSystem {
public:
     int smallSpace;
     int mediumSpace;
     int bigSpace;

    ParkingSystem(int small, int medium, int big) {
        smallSpace = small;
        mediumSpace = medium;
        bigSpace = big;
    }
    
    bool addCar(int carType) {
        if (carType == 1) {
           if(smallSpace == 0) {
                return false;
           }
            else {
                smallSpace--;
                }
           }
           else if (carType == 2) {
             if (mediumSpace == 0) {
               return false;
           }
            else {
                mediumSpace--;
            } 
           }
            else if (carType == 3) {
             if (bigSpace == 0) {
               return false;
           }
            else {
                bigSpace --;
            } 
           }
        return true;
    }
};