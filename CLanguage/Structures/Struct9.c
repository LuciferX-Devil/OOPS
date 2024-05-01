//Write a C program that defines a structure named "Device" with pointer attributes including an ID (integer), name (string), and status (boolean). 
//Additionally, define a nested structure called "Light" within "Device," which features pointer attributes such as Watts (integer) and Light_Type (Modern/Classic). 
//Implement a main() function to test the structure variables, utilising dynamic memory concepts (malloc()/calloc() function) for the pointer attributes in both structures (Device and Light). 
//Furthermore, ensure the main() function reads values for these attributes and prints the results accordingly.

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

struct Device{
    int *ID;
    char *name;
    bool *status;
    struct Lights{
        int *watts;
        char *Light_Type;
    }*light1;
};

int main(){
    struct Device *device1;
    device1 = (struct Device*)malloc(sizeof(struct Device));
    if(device1 == NULL){printf("Mem alloc of Dev failed.\n");return 1;}
    device1->ID = (int*)malloc(sizeof(int));
    device1->name = (char*)malloc(8*sizeof(char));
    device1->status = (bool*)malloc(sizeof(bool));
    if(device1->ID==NULL||device1->name==NULL||device1->status==NULL){printf("Mem Alloc for instance failed!\n");}
    device1->light1 = (struct Lights*)malloc(sizeof(struct Lights));
    if(device1->light1 == NULL){printf("Mem alloc for lights failed.\n");}
    device1->light1->watts = (int*)malloc(sizeof(int));
    device1->light1->Light_Type = (char*)malloc(7*sizeof(char));
    if(device1->light1->watts==NULL||device1->light1->Light_Type==NULL){printf("Mem alloc for instance failed!\n");}
    device1->ID =  101;
    device1->name = "Peelips";
    device1->status = 1;
    device1->light1->watts = 10;
    device1->light1->Light_Type = "Modern";
    printf("%d\n%s\n%d\n%d\n%s",device1->ID,device1->name,device1->status,device1->light1->watts,device1->light1->Light_Type);

    return 0;
}
