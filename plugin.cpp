#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include<math.h>

#define GRAV_KONST 9.81
using namespace std;

double deltaE(double R, double v, double M)
{
    double vysledok, zatvorka;
    double c1, c2, c3, c4;
    
    c3= v/4.0;
    
    c1= sqrt( c3*c3 + R*R );
    c4= sqrt(R*R + v*v);
    c2=0.75*v*(R/c4);
    
    zatvorka= c1 - c2 ;
    
    
    vysledok = M * GRAV_KONST * zatvorka;
    
     return vysledok;  
       
       
       
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



