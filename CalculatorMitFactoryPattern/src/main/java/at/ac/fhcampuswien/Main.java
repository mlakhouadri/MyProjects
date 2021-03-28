package at.ac.fhcampuswien;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        System.out.println("Enter first and second number: ");
        Scanner scanner = new Scanner(System.in);
        int x;
        int y;

        x = scanner.nextInt();
        y = scanner.nextInt();

        System.out.println("Enter mode: 1 for addition, 2 for multiplication, 3 for substraction, 4 for division: ");
        int choice = scanner.nextInt();

        switch (choice) {
            case 1:
                System.out.println("Result: " + AdditionCalculator.add(x, y));
                break;

            case 2:
                System.out.println("Result: " + MultiplicationCalculator.mul(x, y));
                break;

            case 3:
                System.out.println("Result: " + SubstractionCalculator.sub(x, y));
                break;

            case 4:
                System.out.println("Result: " + DivisionCalculator.div(x, y));
                break;

            default:
                System.out.println("Enter mode: 1 for addition, 2 for multiplication, 3 for substraction, 4 for division: ");

        }
    }
}

