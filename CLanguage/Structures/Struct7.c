#include <stdio.h>

struct Complex {
    int Real;
    int Imaginary;
};

int main(){

    struct Complex C1;
    struct Complex C2;

    printf("Enter real part for first number: ");
    scanf("%d",&C1.Real);
    printf("Enter Imaginary part for first number: ");
    scanf("%d",&C1.Imaginary);
    
    
    printf("Enter real part for second number: ");
    scanf("%d",&C2.Real);
    printf("Enter Imaginary part for number number: ");
    scanf("%d",&C2.Imaginary);

    int add1 = C1.Real + C2.Real;
    int add2 = C1.Imaginary +C2.Imaginary;

    printf("Added Complex number: %d + %di\n",add1,add2);

    int mult1= C1.Real*C2.Real - C1.Imaginary*C2.Imaginary;
    int mult2= C1.Imaginary*C2.Real+C1.Real*C2.Imaginary;

    printf("Multiplied Complex number: %d + %di",mult1,mult2);

    return 0;
}
