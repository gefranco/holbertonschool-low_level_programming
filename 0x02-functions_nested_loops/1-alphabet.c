int _putchar(char c);
/**
* print_alphabet - Print the alphabet
*/
void print_alphabet(void)
{
	int i = 48;

	while (i < 70)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
