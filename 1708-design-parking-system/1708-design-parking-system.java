class ParkingSystem {
    private int _big = 0;
    private int _medium = 0;
    private int _small = 0;

    public ParkingSystem(int big, int medium, int small) {
        _big = big;
        _medium = medium;
        _small = small;
        System.gc();
    }
    
    public boolean addCar(int carType) {
        switch (carType) {
            case 1:
                _big--;
                return _big >= 0;
            case 2:
                _medium--;
                return _medium >= 0;
            case 3:
                _small--;
                return _small >= 0;
        }

        return true;
    }
}

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem obj = new ParkingSystem(big, medium, small);
 * boolean param_1 = obj.addCar(carType);
 */