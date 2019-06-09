#include <stdio.h> 

int main() 
{ 
	float arr[5] = {12.5, 10.0, 13.5, 90.5, 0.5}; 
	float *ptr1 = &arr[0]; 
	float *ptr2 = ptr1 + 3; 

	printf("%p ", ptr1); 
	printf("%p ", ptr2); 

	printf("%f ", *ptr2);
    printf("%f ", *ptr1);  
	printf("%ld", ptr2 - ptr1); 

return 0; 
} 