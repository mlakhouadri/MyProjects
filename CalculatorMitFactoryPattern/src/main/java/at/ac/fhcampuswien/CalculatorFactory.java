package at.ac.fhcampuswien;

public class CalculatorFactory implements Calculator {

    public static int add(int x, int y) {
        AdditionCalculator additionCalculator = new AdditionCalculator();
        return additionCalculator.add(x, y);
    }

    public static int mul(int x, int y) {
        MultiplicationCalculator multiplicationCalculator = new MultiplicationCalculator();
        return multiplicationCalculator.mul(x, y);
    }

    public static int sub(int x, int y) {
        SubstractionCalculator substractionCalculator = new SubstractionCalculator();
        return substractionCalculator.sub(x, y);
    }

    public static double div(int x, int y) {
        DivisionCalculator divisionCalculator = new DivisionCalculator();
        return divisionCalculator.div(x, y);
    }
}
