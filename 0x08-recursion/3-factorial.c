#include "main.h"
/**
 * factorial - calc factorial or @n
 * @n:number
 * Return: number
 */
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n > 0)
{
return (n * factorial(n - 1));
}
else if (n == 0)
{
return (1);
}
else
{
return (1);
}
}
