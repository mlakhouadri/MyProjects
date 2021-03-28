package at.ac.fhcampuswien;

class DivisionCalculator implements Calculator {
    public static int div(int x, int y) {
        if (y == 0) {
            throw new ArithmeticException("division by zero");
        } else {
            try {
                int result4 = x / y;
                return result4;
            } catch (Exception exception) {
                System.out.println("Division by zero not possible");
            }
            return 0;
        }
    }
}
