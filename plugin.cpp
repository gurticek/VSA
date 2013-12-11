#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include<math.h>

#define GRAV_KONST 9.81

       
       
       
       }
       
int main()
{
    double polomer, vyska, hmotnost;
    double vysledok;
    
    printf("Zadaj polomer: ");
    scanf("%lf", &polomer);
    printf("Zadaj vysku: ");
    scanf("%lf", &vyska);
    printf("Zadaj hmotnost: ");
    scanf("%lf", &hmotnost);
    
    vysledok = deltaE( polomer, vyska, hmotnost);
    
    printf("polomer:%.3lf\n", polomer);
    printf("vyska:%.3lf\n", vyska);
    printf("hmotnost:%.3lf\n", hmotnost);
    
    
    printf("%lf\n", vysledok);
    
    system("PAUSE");
    return 0;
}



