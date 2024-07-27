import java.lang.*;
import java.util.*;

class JaggedArray{
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        int array[][] = new int[3][];
        for(int i=0;i<3;i++){
            int column = input.nextInt();
            array[i] = new int[column];
        }
        for(int i=0;i<array.length;i++){
            for(int j=0;j<array[i].length;j++){
                array[i][j] = input.nextInt();
            }
        }
        for(int[] row:array){
            for(int elements:row){
                System.out.println(elements+"\n");
            }
        }
        input.close();
    }
}
