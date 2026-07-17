#include <stdio.h>

int main() {
    int zahl_a;
    int zahl_b;
    int zahl_c; 
    

        printf("Tippe 3 zahlen ein und lasse bestimmen welches die größte ist: "); 
        scanf("%d", &zahl_a);  
        scanf("%d", &zahl_b);
        scanf("%d", &zahl_c);

        

        if(zahl_a == zahl_b && zahl_b == zahl_c) {
            printf("Alle Zahlen sind gleich: %d\n", zahl_a);

        }

        else if(zahl_a > zahl_b && zahl_a > zahl_c) {
            printf("%d\n", zahl_a);

        }
                                      
        else if(zahl_b > zahl_a && zahl_b > zahl_c) {
            printf("%d\n", zahl_b);

        }

        else {
            printf("%d\n", zahl_c);

        }
    
        return 0;
    

 
    }