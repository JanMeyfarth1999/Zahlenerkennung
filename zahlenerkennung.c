#include <stdio.h>

int main() {
    int zahl_a;
    int zahl_b;
    int zahl_c; 
    

        printf("Tippe 3 zahlen ein und lasse bestimmen welches die größte ist: "); 
        scanf("%d" , &zahl_a);  
        scanf("%d" , &zahl_b);
        scanf("%d" , &zahl_c);


        if(zahl_a > zahl_b && zahl_a > zahl_c) {
            printf("%d\n", zahl_a);

        }
                                      
        if(zahl_b > zahl_a && zahl_b > zahl_c) {
            printf("%d\n", zahl_b);

        }

        if(zahl_c > zahl_a && zahl_c > zahl_b) {
            printf("%d\n", zahl_c);
        }    

        else  {
            printf("die Zahlen sind alle gleich\n");



        }




        










}