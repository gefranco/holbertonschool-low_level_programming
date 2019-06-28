#include <stdio.h>
/**
* main -  program that prints the numbers from 1 to 100
* Return: 0
*/
int main(void)
{ 

 int long i;



int totalPrimos=0;
	
	int long number = 612852475143;

 	int long found = number;

	int long j;

	int x;
	int evaluate=0;	
	
	i = 2;		
	

//	printf("%li ", found);
	
		while( found >= 2)
		{	
					
		evaluate = 0;	
			
			//	printf("%ld\t%ld \n", found, i);
			for( j = i; j >=1; j -- )
			{
			
			//	printf("%ld  \n", i);
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
				//printf("%ld SI ES PRIMO   %d \n", i,evaluate);
				if(found % i != 0)
				{
					i++;
					
			//	printf("%ld \n", found);
				//	evaluate = 0;
				}
				else{
					while(found % i == 0)
					{
						found = found / i;
						printf("%ld, ",i );
					
					//totalPrimos ++;
					}
					i = 2;
				}	
				//ii=1;
				/*for(x = 0 ; x > )
				{
					found = found / i;
					printf("%ld\n ",found);
				}*/
				
				
			}else {
			i++;
}
		//i++;
		//i++;
		}
	
	return (0);
}
