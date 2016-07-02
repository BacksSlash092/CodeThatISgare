# include <stdio.h>

int minimum(int values[], int numberOfElements)
{
	int minValue, i; 
	minValue = values[0];

	for (i = 1; i < numberOfElements; ++i)
	{
		if (values[i] < minValue)
			minValue = values[i];
	}

	return minValue;
}


 
int removeElement(int array[], int position )
{
   int c, n;
 
   if ( position >= n+1 )
      printf("Deletion not possible.\n");
   else
   {
      for ( c = position - 1 ; c < n - 1 ; c++ )
         array[c] = array[c+1];
   }
 	
 	int ar[] = array;
   return ar;
}



int main()
{
	int unsorted[] = {3,2,5,15,44,22,55};
	int sorted[7];
	int lengthOfArray = 7; 
	int ElementSorted = 0; 


	for (int n=0; n < 7;n++)
		{
			printf("%i ", unsorted[n] );
		}
		printf("\n\n");

	do {
	

		int minValue = minimum(unsorted,7); 
		sorted[ElementSorted] = minValue;
		//Removeelement()
		ElementSorted++;


	}	
	while (ElementSorted < lengthOfArray); 

	for (int n=0; n < 7;n++)
		{
			printf("%i ", sorted[n]);
		}
		printf("\n\n");
}
