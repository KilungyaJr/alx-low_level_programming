int rand(void)
{
	static int i = -1;
	int rand_no[6] = {8, 8, 7, 9, 23, 74};
	i++;

	return rand_no[i];
}
