#include <stdio.h>
int main(){
    char *pSvalue=NULL;
    char str[] = {"HELLO"};
    pSvalue=&str[0];
    printf("%c",*(pSvalue+1));
    return 0;
}
