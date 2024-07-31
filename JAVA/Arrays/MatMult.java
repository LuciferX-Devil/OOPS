import java.util.Scanner;

class MatMult {
    public static void Multi(int array1[][], int array2[][], int r1, int c1, int r2, int c2) {
        int solarray[][] = new int[r1][c2];
        for (int i = 0; i < r1; i++) {
            for (int j = 0; j < c2; j++) {
                solarray[i][j] = 0;
                for (int k = 0; k < r2; k++) {
                    solarray[i][j] += array1[i][k] * array2[k][j];
                }
            }
        }

        for (int i = 0; i < r1; i++) {
            for (int j = 0; j < c2; j++) {
                System.out.print(solarray[i][j] + " ");
            }
            System.out.println();
        }
    }

    public static void main(String args[]) {
        Scanner input = new Scanner(System.in);
        int r1 = input.nextInt(); int c1 = input.nextInt();
        int r2 = input.nextInt(); int c2 = input.nextInt();
        if (c1 != r2) {
            System.out.println("Invalid Size!");
        } else {
            int array1[][] = new int[r1][c1];
            for (int i = 0; i < r1; i++) {
                for (int j = 0; j < c1; j++) {
                    array1[i][j] = input.nextInt();
                }
            }

            int array2[][] = new int[r2][c2];
            for (int i = 0; i < r2; i++) {
                for (int j = 0; j < c2; j++) {
                    array2[i][j] = input.nextInt();
                }
            }

            Multi(array1, array2, r1, c1, r2, c2);
        }
        input.close();
    }
}
