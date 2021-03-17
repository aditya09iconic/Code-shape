#include<stdio.h>

int main()
{
	int row, col;
	
	for(row=0; row<=2; row++)
	{
		for(col=1; col<=17; col++)
		{
			if( (col>=3-row && col<=6+row ) || (col>=12-row && col<=14-row))
			printf(" * ");
			else
			printf(" ");
		}
		 printf("\n");		 
	}
		 for(row=0; row<15; row++)
		 {
		 	for(col=0; col<=12; col++)
		 	{
		 		if(col>=row+4 && col<=17-row)
		 		printf(" * ");
		 		else
		 		printf(" ");
		 		
			 }
			 printf("\n");
		 }
		 
		 return 0;

}
	     
	    
     

