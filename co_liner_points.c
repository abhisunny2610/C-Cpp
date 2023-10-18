/* Given three points (x1, y1), (x2, y2) and (x3, y3), write the program to check if the three points fall on one straight line */

/* check three points in straight line or not */

#include<stdio.h>
#include<math.h>


int main(){
	
	int x1, x2, x3, y1, y2, y3;
	int s1, s2, s3;
	
	printf("enter the point x1 and y1: ");
	scanf("%d%d", &x1, &y1);
	
	printf("enter the point x2 and y2: ");
	scanf("%d%d", &x2, &y2);
	
	printf("enter the point x3 and y3: ");
	scanf("%d%d", &x3, &y3);
	
	/* calculate slpoe of line between each pair of points */
	s1 = abs (x2-x1)/ abs(y2-y1);
	s2 = abs (x3-x1)/ abs(y3-y1);
	s3 = abs (x3-x2)/ abs(y3-y2);	
	
	if((s1 == s2) && (s1 == s3)){
		printf("Points are Co-liner\n");
	}
	else{
		printf("Points are NOT Co-liner\n");
	}
}
