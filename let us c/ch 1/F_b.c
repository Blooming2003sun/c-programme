/*Topic:-distance convert
Author-Rudreswar_Pal*/
#include<stdio.h>
int main(void)
{
    float distance_in_km,distance_in_meter,distance_in_feet,distance_in_inch,distance_in_cm;
    printf("Enter the distance in km. \n");
    scanf("%f",&distance_in_km);
    distance_in_cm=distance_in_km*100000;
    distance_in_meter=distance_in_km*1000;
    distance_in_feet=distance_in_km*3280.8399;
    distance_in_inch=distance_in_km*39370.1;
    printf("distance in meters is %.2f \n",distance_in_meter);
    printf("distance in feets is %.2f \n",distance_in_feet);
    printf("distance in inch is %.2f \n",distance_in_inch);
    printf("distance in centimeters is %.2f ",distance_in_cm);

    return 0;
}