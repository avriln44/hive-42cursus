#include <stdio.h>
int		max(int* tab, unsigned int len)
{
	int i;
	i = 1;
	if (len ==0)
		return 0;
	int largest = tab[0];

	while (i < len)
	{
		if (tab[i] > largest)
			largest = tab[i];
		i++;
	}
	return (largest);
}
int main()
{

	int tab[4] = {111, 12345, 5433333, 23};
	unsigned int len = 4;
	printf("%d\n", max(tab, len));
}