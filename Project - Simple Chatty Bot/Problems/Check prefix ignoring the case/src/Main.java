import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String input = scanner.next();
        String input2 = input.toUpperCase();
        if (input2.startsWith("J")){
            System.out.println("true");
        }else{
            System.out.println("false");
        }
    }
}