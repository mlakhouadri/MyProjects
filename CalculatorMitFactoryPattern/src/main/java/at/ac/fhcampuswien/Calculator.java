package at.ac.fhcampuswien;

public interface Calculator {

    public static AdditionCalculator add(int x, int y){
        AdditionCalculator result1 = new AdditionCalculator();
        return result1;
    }

    public static MultiplicationCalculator mul(int x, int y){
        MultiplicationCalculator result2 = new MultiplicationCalculator();
        return result2;
    }

    public static SubstractionCalculator sub(int x, int y) {
        SubstractionCalculator result3 = new SubstractionCalculator();
        return result3;
    }

    public static DivisionCalculator div(int x, int y) {
        ;
        DivisionCalculator result4 = new DivisionCalculator();
        return result4;
    }
}
