import java.lang.*;

class Bagz {
    public static void main(String args[]){
        int bag[] = {120,84,75,45,43};
        int bagz[][] = new int[5][];
        for(int i = 0;i<5;i++){
            bagz[i] = new int[bag[i]/10+1];
        }
        for(int i=0;i<bagz.length;i++){
            for(int j=0;j<bagz[i].length-1;j++){
                bagz[i][j] = 10;
                bagz[i][bagz[i].length-1] = bag[i]%10;
            }
        }
        for(int[] baskets:bagz){
            for(int elements:baskets){
                if(elements==0){continue;}
                else
                System.out.print(elements+" ");
            }
            System.out.println();
        }
    }    
}
