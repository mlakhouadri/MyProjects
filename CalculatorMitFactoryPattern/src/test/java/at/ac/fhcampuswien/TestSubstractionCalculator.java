package at.ac.fhcampuswien;

import org.junit.*;
import static org.junit.Assert.assertEquals;

public class TestSubstractionCalculator {
    int x;
    int y;
    int result3;

    @Test
    public void testSub() {
        SubstractionCalculator substractionCalculator = new SubstractionCalculator();
        int expected = 5;
        int actual = substractionCalculator.sub(10, 5);
        Assert.assertEquals(expected, actual);
    }

}
