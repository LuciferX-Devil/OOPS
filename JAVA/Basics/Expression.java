class Expression {

    static char[] isOperator(String expression){
        int count=0;
        for(char temp:expression.toCharArray()){
            if(!Character.isDigit(temp)){
                count++;
            }
        }
        char operators[] = new char[count];
        int index=0;
        for(char temp:expression.toCharArray()){
            if(temp=='+'||temp=='-'||temp=='*'||temp=='/'||temp=='('||temp==')'){
                operators[index++]=temp;
        }
    }
        return operators;
    }

    static int[] isOperand(String expression){
        int count = 0; boolean inNumber = false;
        for(char temp:expression.toCharArray()){
            if(Character.isDigit(temp)==true){
                if(inNumber==false){
                    count++;
                    inNumber=true;
                }
            }
            else{
                inNumber=false;
            }
        }
        StringBuilder number = new StringBuilder();
        int operands[] = new int[count]; int index=0;
        for(char temp:expression.toCharArray()){
            if(Character.isDigit(temp)==true){
                number.append(temp);
            }
            else{
                if(number.length()>0){
                    operands[index++]=Integer.parseInt(number.toString());
                    number.setLength(0);
                }
            }
        }
        if(number.length()>0){
            operands[index]=Integer.parseInt(number.toString());
        }
        return operands;
    }

    static void calCulator(char operators[],int operands[]){
        int result = operands[0];int index=1;
        for(int temp:operators){
            if(temp=='+'){result+=operands[index++];}
            else if(temp=='-'){result-=operands[index++];}
            else if(temp=='*'){result*=operands[index++];}
            else if(temp=='/'){result/=operands[index++];}
        }
        System.out.print(result);
    }

    public static void main(String args[]){
        String expression  = "(2+3-3+5)";
        calCulator(isOperator(expression),isOperand(expression));
    }
}   
