package at.ac.fhcampuswien;

import org.junit.Test;
import static org.junit.Assert.assertEquals;
import static junit.framework.TestCase.assertEquals;

public class TestDivisionCalculator {
    int x;
    int y;
    int result1;

    @Test
    public void testAdd() {
        DivisionCalculator divisionCalculator = new DivisionCalculator();
        double expected = 2.0;
        double actual = DivisionCalculator.div(10, 5);
        assertEquals(expected,actual);
    }

    @Test(expected = ArithmeticException.class)
    public void testDivDivisionByZero() {
        DivisionCalculator divisionCalculator = new DivisionCalculator();
        divisionCalculator.div(x, y);
    }
}
