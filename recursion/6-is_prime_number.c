#include "main.h"

/**
 *find_prime - check if a number is a prime number
 *@n: integer 1
 *@i: integer 2
 *Returns: return 1 if prime number or 0 in other cases
 */
int find_prime(int n, int i)

{
	if (i == 1)
		return (1);
	if (n % i == 0)
		return (0);
	return (find_prime(n, i - 1));
}

/**
 *is_prime_number - test if the number is a prime number
 *@n: integer to test
 *return: int
 */
int is_prime_number(int n)

{
	return (test_prime(n, 2));
}
