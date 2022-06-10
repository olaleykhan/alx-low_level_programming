#include "main.h"
<<<<<<< HEAD
/** * largest_number - returns the largest of 3 numbers * @a: first 
 integer * @b: second integer * @c: third integer * Return: largest 
 number */
int largest_number(int a, int b, int c) { int largest; if (a >= b && a 
>= c)
{ largest = a;
}
else if (b >= a && b >= c) { largest = b;
}
else { largest = c;
}
=======

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
int largest;

if (a >= b && a >= c)
{
largest = a;
}
else if (b >= a && b >= c)
{
largest = b;
}
else
{
largest = c;
}

>>>>>>> c58736ef0baaa5635e61508d1f263ac56cf24878
return (largest);
}
