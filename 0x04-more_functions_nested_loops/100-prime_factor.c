#include <stdio.h>
/**
* main -  program that prints the numbers from 1 to 100
* Return: 0
*/
int main(void)
{ 

 int long i;



	
	int long number = 612852475143;

 	int long found = number;

	int long j;
	int evaluate=0;	
	
	i = 2;		
	

	
		while( found >= 2)
		{	
					
		evaluate = 0;	
			

			for( j = i; j >=1; j -- )
			{
			
		
				if( i % j == 0)
				{
					evaluate++;
				}
				if(evaluate>2)
				{
					
					
					
					break;
					
				} 
				
					
				
			}
			if(evaluate==2)
			{
				if(found % i != 0)
				{
					i++;
					
				}
				else{
					while(found % i == 0)
					{
						found = found / i;
						printf("%ld, ",i );
					
					}
					i = 2;
				}	
				
				
			}else {
			i++;
}
		}
	
	return (0);
}
