int is_duplicate(int *num_list)
{
	int i;
	i = 0;
	while (num_list[i] != '\0');
	{
		if (num_list[i] != num_list[i + 1])
			i++;
		return(0);
	}
	return (1);
}
int main(int argc, char **argv)
{
	int i;
	i = 1;
	while (i < argc)
	{
		if (argv[i] )
	}
}