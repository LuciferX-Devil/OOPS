#include <stdio.h>

struct Cars {

    int car_id;
    char model[12];
    int rent_rate;

}c1,c2,c3;




int main(){
    
    printf("Enter details of Car 1: ");
    scanf("%d",&c1.car_id);
    scanf("%s",c1.model);
    scanf("%d",&c1.rent_rate);

    printf("Enter details of Car 2: ");
    scanf("%d",&c2.car_id);
    scanf("%s",c2.model);
    scanf("%d",&c2.rent_rate);

    printf("Enter details of Car 3: ");
    scanf("%d",&c3.car_id);
    scanf("%s",c3.model);
    scanf("%d",&c3.rent_rate);        

    int days;
    printf("Enter number of days: ");
    scanf("%d",&days);

    printf("Rental cost of Car1: %d\n",days*c1.rent_rate);
    printf("Rental cost of Car2: %d\n",days*c2.rent_rate);
    printf("Rental cost of Car3: %d",days*c3.rent_rate);
    
    return 0;
    }
