import java.util.*;

class Palindrome {
    public static void Palind(String number) {
        int check = 0;
        int j = number.length() - 1;
        for (int i = 0; i < number.length(); i++) {
            if (number.charAt(i) == number.charAt(j)) { check++; }
            j--;
        }
        if (check == number.length()) {
            System.out.println("Palindrome");
        } else {
            System.out.println("Not a palindrome");
        }
    }

    public static void main(String args[]) {
        Scanner input = new Scanner(System.in);
        String number = input.next();
        Palind(number);
    }
}
