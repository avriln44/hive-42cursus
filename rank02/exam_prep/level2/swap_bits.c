unsigned char	swap_bits(unsigned char octet)
{
unsigned char bit;

bit = (octet >> 4 | octet << 4);
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
	unsigned char bit = swap_bits(2);
	print_bits(bit);
}