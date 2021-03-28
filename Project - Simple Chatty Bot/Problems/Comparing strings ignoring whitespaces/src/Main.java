import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String string1 = scanner.nextLine();
        String string2 = scanner.nextLine();
        
        String string3 = string1.replaceAll(" ", "").trim();
        String string4 = string2.replaceAll(" ", "").trim();

        if (string4.equals(string3)) {
            System.out.println("true");
        }else{
            System.out.println("false");
        }
    }
}
