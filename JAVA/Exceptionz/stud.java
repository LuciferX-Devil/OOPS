import java.util.*;

class stud{
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        String reg_no;String mob_no;
        reg_no = input.nextLine();mob_no=input.nextLine();
        char reg[] = reg_no.toCharArray();char mob[] = mob_no.toCharArray();boolean sum1=true;boolean sum2=true;boolean sum3=true;
        for(char temp:reg){
            sum1 = sum1&Character.isLetterOrDigit(temp);
        }
        for(char temp:mob){
            sum2 = sum2&Character.isDigit(temp);
        }
        try{            
            if(reg_no.length()>9 || reg_no.length()<9){throw new IllegalArgumentException("invalid");}
            else if(!sum1){throw new NoSuchElementException("invalid");}
        }
        catch(IllegalArgumentException e){
            System.out.println(e);
            sum3=sum3&false;
        }   
        catch(NoSuchElementException e){
            System.out.println(e);
            sum3=sum3&false;
        }
        try{
            if(mob_no.length()>10 || mob_no.length()<10){throw new IllegalArgumentException("invalid");}
            if(!sum2){throw new NumberFormatException("invalid");}
        }
        catch(NumberFormatException e){
            System.out.println(e);
            sum3=sum3&false;
        }
        catch(IllegalArgumentException e){
            System.out.println(e);
            sum3=sum3&false;
        }       
        if(sum3){System.out.println("valid");}
        input.close();
    }
}
