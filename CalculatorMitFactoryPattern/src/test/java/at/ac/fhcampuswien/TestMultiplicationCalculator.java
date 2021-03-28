package at.ac.fhcampuswien;

import org.junit.*;
import static org.junit.Assert.assertEquals;

public class TestMultiplicationCalculator {
    int x;
    int y;
    int result2;

    @Test
    public void testMul(){
        MultiplicationCalculator multiplicationCalculator = new MultiplicationCalculator();
        int expected = 50;
        int actual = multiplicationCalculator.mul(10, 5);
        assertEquals(expected, actual);
    }
}
