#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int numDigits(int n)
{
	if (n < 10) return 1;
	return 1 + numDigits(n / 10);
}

int main()
{
	int int_input = 1, check_digit, odd_alts[4], even_alts[4], sum = 0, total_sum, mult10, diff;
	char char_input[9];

	printf("SIN Validator\n");
	printf("=============\n");

	while (int_input != 0)
	{
		printf("SIN (0 to quit) : ");
		scanf("%d", &int_input);

		if (numDigits(int_input) == 9)
		{
			sprintf(char_input, "%ld", int_input);
			check_digit = char_input[8] - '0';
			int i, count = 0, counts = 0;
			for (i = 0; i < 8; i++)
			{
				if (i % 2 != 0){
					odd_alts[count] = (char_input[i] - '0') * 2;
					count++;
				}
				else{
					even_alts[counts] = (char_input[i] - '0');
					counts++;
				}
			}

			int j;
			for (j = 0; j<4; j++)
			{
				while (odd_alts[j] > 0)
				{
					sum += odd_alts[j] % 10;
					odd_alts[j] /= 10;
				}
				sum += even_alts[j];
			}


			if (sum % 10){
				mult10 = sum + (10 - sum % 10);
			}

			diff = mult10 - sum;

			if (diff == check_digit){
				printf("This is a valid SIN.\n");
			}
			else {
				printf("This is not a valid SIN.\n");
			}
		}

		// resetting variables
		memset(&char_input[0], 0, sizeof(char_input));
		sum = 0;
	}
	printf("Have a Nice Day!\n");
}
