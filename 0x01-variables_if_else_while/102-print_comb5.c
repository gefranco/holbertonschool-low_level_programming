#include <stdio.h>

int main(void)
{

	int char1 = 48;
	int char2 = 48;
	int char3 = 48;
	int char4 = 49; 

        while (char1 < 58)
	{


		while (char2 < 58)
		{
		
			while (char3 < 58)
			{
				while(char4 < 58)
				{


				putchar(char1);
				putchar(char2);

				putchar(' ');

				putchar(char3);
				putchar(char4);
				putchar(',');
				char4 ++;
				}
				char3++;
			char4=48;
			}

		
			char3= char4 + 1;					

			char2++;
		}

		char2 = char3 +1;;
		char1++;




	}	
	putchar('\n');
	return 0;
}
