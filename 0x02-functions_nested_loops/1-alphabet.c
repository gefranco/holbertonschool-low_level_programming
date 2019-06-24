int _putchar(char c);
/**
* print_alphabet - Print the alphabet
*/
void print_alphabet(void)
{
	int i = 97;

	while (i < 122)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
