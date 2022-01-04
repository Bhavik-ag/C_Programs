/*
In	 this	 problem,	 you	 need	 to compute	 the	 derivative	 of	 a	degree-5	 polynomial of	 one	
variable	x:	 a5x^5	+	a4x^4	+	a3x^3	+	a2x^2	+	a1x	+	a0
Assume	that	the	coefficients	(ai) of	the	polynomial	are	integers.	Input the	6	coefficients	from	the	user.	
Print	 the	 polynomial,	 and	 then	 compute	 and	 print	 the	 derivative	 polynomial.	 A	 sample	 input	 and	
output are	given	below;	stick	to	the	format	shown	below.
Enter	coefficient	of	1:	5
Enter	coefficient	of	x:	2
Enter	coefficient	of	x^2:	-2
Enter	coefficient	of	x^3:	7
Enter	coefficient	of	x^4:	0
Enter	coefficient of	x^5:3
Polynomial:	3*x^5	+	7*x^3	- 2*x^2	+	2*x	+ 5
Derivative:	15*x^4	+	21*x^2	- 4*x	+	2
Note	that,	the	numbers	given	above are	only	examples.	You	should	write	the	program	such	that	the	
coefficients	can	be	any	valid	integer (different	from what	is	given	in	the	example)	and	the	program	still	
works.
*/

#include <stdio.h>

int main(){
    int c0,c1,c2,c3,c4,c5;
    printf("Enter co-efficient of 1: ");
    scanf("%d", &c0);
    printf("Enter co-efficient of x: ");
    scanf("%d", &c1);
    printf("Enter co-efficient of x^2: ");
    scanf("%d", &c2);
    printf("Enter co-efficient of x^3: ");
    scanf("%d", &c3);
    printf("Enter co-efficient of x^4: ");
    scanf("%d", &c4);
    printf("Enter co-efficient of x^5: ");
    scanf("%d", &c5);

    printf("Polynomial: ");
    if (c5 != 0)
    {
        printf("%d*x^5 + ",c5);
    }
    if (c4 != 0)
    {
        printf("%d*x^4 + ",c4);
    }
    if (c3 != 0)
    {
        printf("%d*x^3 + ",c3);
    }
    if (c2 != 0)
    {
        printf("%d*x^2 + ",c2);
    }
    if (c1 != 0)
    {
        printf("%d*x + ",c1);
    }
    if (c0 != 0)
    {
        printf("%d ",c0);
    }
    printf("\n");
    return 0;
}