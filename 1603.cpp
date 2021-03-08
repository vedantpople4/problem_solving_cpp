class ParkingSystem {

private:
    int b = 0, m = 0, s = 0;
    
public:
    ParkingSystem(int big, int medium, int small) {
        b = big;
        m = medium;
        s = small;
    }
    
    bool addCar(int carType) {
        if(carType == 1){
            b--;
            return (b >= 0) ? true : false;
        }
        else if(carType == 2){
            m--;
            return (m >= 0) ? true : false;
        }
        
        s--;
        return (s >= 0) ? true : false;
    }
};
