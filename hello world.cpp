#include <stdio.h>
 int main() 
 { 
 	int i,n;
 	
	int a=8, b=9; 
	 float x=127.895, y=-123.456; 
	
	printf("%d,%d\n",a,b) ;
	printf("%5d,%5d\n",a,b) ;
	printf("%f,%f\n",x,y) ; 
	printf("%-12f,%-12f\n",x,y) ; 
	printf("%8.3f,%8.3f,%.3f,%.3f,%4f,%5f\n",x, y,x,y,x,y) ;
	
 	return 0; 
 }
