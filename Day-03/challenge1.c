#include <stdbool.h>
#include <stdio.h>

int main(void)
{
	bool digit_seen[10] = {false};
	bool digit_repeated[10] = {false};
	int digit;
	long n, original;

	printf("Entrez un nombre : ");
	scanf("%ld", &n);
	original = n;

	while (n > 0)
	{
		digit = n % 10;
		if (digit_seen[digit])
			digit_repeated[digit] = true;
		digit_seen[digit] = true;
		n /= 10;
	}

	int has_repeats = 0;
	for (int i = 0; i < 10; i++)
	{
		if (digit_repeated[i])
		{
			if (!has_repeats)
			{
				printf("Chiffres repetes : ");
				has_repeats = 1;
			}
			printf("%d ", i);
		}
	}

	if (!has_repeats)
		printf("Aucun chiffre repete.\n");
	else
		printf("\n");

	return 0;
}
