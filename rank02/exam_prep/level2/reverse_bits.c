unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char bit = 0;
	int i;
	i = 8;
	while (i--)
	{
		bit = (bit * 2) + octet % 2;
		octet = octet / 2;
	}
	return (bit);
}
#include <unistd.h>
void	print_bits(unsigned char octet)
{
	int i;
	i = 8;
	char bit;
	while (i--)
	{
		bit = ((octet >> i) & 1) + '0';
		write(1, &bit, 1);
	}

}
int main()
{
	print_bits(22);
	printf("\n");
	unsigned char bit = reverse_bits(22);
	print_bits(bit);
}