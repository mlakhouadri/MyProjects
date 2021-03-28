package at.ac.fhcampuswien;

import org.junit.*;
import static org.junit.Assert.assertEquals;

public class TestAdditionCalculator {
    int x;
    int y;
    int result1;

    @Test
    public void testAdd() {
        AdditionCalculator additionCalculator = new AdditionCalculator();
        int expected = 15;
        int actual = additionCalculator.add(10, 5);
        assertEquals(expected,actual);
    }
}
