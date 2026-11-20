 #include <stdio.h>
 int main()
 {
 	int a, b, c;
 	printf("Enter three integer: ");
 	scanf("%d %d %d", &a, &b, &c);
 	if(a == b && b == c) 
 {
 	printf("All three number are equal.\n");
 }
 else if (a == b)
 {
 	printf("First and second number are equal.\n");
 	printf("Largest = %d\n", a > c ? a : c);
 	
 }
 else if (a == c)
 {
 	printf("First and third number equal.\n");
 	printf("Largest = %d\n", a > b ? a : b);
 	
 }
 else if (b == c)
 {
 	printf("Second and third number are equal.\n");
 	printf("Largest = %d\n", b > a ? b : a);
 	
 }
 else if (a > b)
 {
 	if (a > c)
 	    printf("Largest = %d\n", a);
 	else
 	    printf("Largest = %d\n", c);
 	}
 	else
 	{
 		if (b > c)
 		printf("Largest = %d\n", b);
 		else
 		printf("Largest = %d\n", c);
 		
	 }
	 return 0;
}