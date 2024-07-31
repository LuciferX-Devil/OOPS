import java.uyil.Scanner;

class Greatest{
  public static void main(String args[]){
    Scanner input = new Scanner(System.in);
    int a,b,c;
    a=input.nextInt();b=input.nextInt();c=input.nextInt();
    if(a>b){
      if(a>c){System.out.print(a+" is greatest.");}
      else{System.out.print(c+" is greatest.");}
    }
    else{
      if(b>c){System.out.print(b+" is greatest.");}
      else{System.out.print(c+" is greatest.");}
    }
  }
}
