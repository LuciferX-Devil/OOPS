import java.util.Scanner;

class Para{

    public static boolean isVowel(char letter){
        boolean c = false;
        if(letter=='a' || letter == 'e' || letter=='i' || letter == 'o' || letter == 'u' || letter=='A' || letter=='E' || letter=='I' || letter=='O' || letter=='U'){
            c=true;return c;}else return c;
        }
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        String para = new String(input.nextLine());
        String word[] = para.split(" ");
        System.out.println(word.length);
        String sentence[] = para.split("\\.");
        System.out.println(sentence.length);


        int indexThe=para.indexOf("The");
        int lastIndex = 0;
        StringBuilder resultpara = new StringBuilder();
        while(indexThe!=-1){
            resultpara = resultpara.append(para,lastIndex,indexThe);
            if((indexThe+4)<para.length() && isVowel(para.charAt(indexThe+4))==true){
                resultpara.append("An ");
            }
            else{
                resultpara.append("A ");
            }
            lastIndex=indexThe+4;
            indexThe = para.indexOf("The",indexThe+4);
        }
        resultpara.append(para.substring(lastIndex));
        para = resultpara.toString();


        int indexthe = para.indexOf("the");
        lastIndex=0;
        StringBuilder resultpara2 = new StringBuilder();
        while(indexthe!=-1){
            resultpara2 = resultpara2.append(para,lastIndex,indexthe);
            if((indexthe+4)<para.length() && isVowel(para.charAt(indexthe+4))==true){
                resultpara2.append("an ");
            }
            else{
                resultpara2.append("a ");
            }
            lastIndex=indexthe+4;
            indexthe = para.indexOf("the",indexthe+4);
        }
        resultpara2.append(para.substring(lastIndex));
        para = resultpara2.toString();

        System.out.println(para);

        input.close();
    }
}
