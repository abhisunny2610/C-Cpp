/* write the program to receive values of latitude (L1, L2) and longitude (G1, G2), in degress, of two places on the earth and output the distance (D) 
between them in nautical miles. 
The formula for distance in nautical miles is

D = 3963 cos( sin L1 sin L2 + cos L1 cos L2 * cos ( G2-G1))*/



#include<stdio.h>
#include<math.h>

int main(){
	
	float L1, L2, G1, G2;         // L1, L2 Latitude  G1, G2 Longitude
	
	printf("Enter the value of latitude and longitude of place1 L1 and G1: ");
	scanf("%f%f", &L1, &G1);
	
	printf("Enter the value of latitude and longitude of place2 L2 and G2: ");
	scanf("%f%f", &L2, &G2);
	
	L1 = L1*3.14/180;
	L2 = L2*3.14/180;
	G1 = G1*3.14/180;
	G2 = G2*3.14/180;
	
	float D = 3963* acos( sin(L1)* sin(L2) + cos(L1)* cos(L2)* cos( G2-G1));
	
	printf("The distance between place1 and place2 on the Earth is: %f ", D);
	
}
	
	
}
