#include <stdio.h>
#include <string.h>

void catter(char str[],char str2[],int len){
    for(int i=0;i<len;i++){
        str[i+6]=str2[i];
    }
}

int main() {
    
    
    char str1[]="Avada "; char str2[]="Kedavra"; int len;

    len=strlen(str1)+strlen(str2)+1;
    char str[len];
    strcpy(str,str1);
    catter(str,str2,len);

 printf("%s",str);
 return 0; 
 }
