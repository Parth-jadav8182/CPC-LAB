// 3. Print the first 50 numbers in the series 1, 4, 7, 10, ...

#include <stdio.h>

int main()
{
	int i = 1;
	int count = 1;

	
	while(count <= 50)
	{
		printf("%d ", i);
		i += 3;
		count++;
	}

	return 0;
}