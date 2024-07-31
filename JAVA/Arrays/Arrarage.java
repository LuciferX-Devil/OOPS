import java.util.Scanner;

class Arrarage {

    public static int Arrader(int array[]){
        int sum = 0;
        for (int i : array) {
            sum += i;
        }
        return sum;
    }
    public static void main(String args[]) {
        Scanner input = new Scanner(System.in); int size = input.nextInt();
        int array[] = new int[size];
        for (int i = 0; i < size; i++) {
            array[i] = input.nextInt();
        }

        int avg = Arrader(array) / size;
        System.out.print("Average is: " + avg);
        input.close();
    }
}
