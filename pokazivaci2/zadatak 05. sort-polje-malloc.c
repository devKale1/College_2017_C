#include <stdio.h>
void sort(int *p, int m)
{
	int t ,i , j;
	for (i = 0; i < m; i++)
	for (j = i + 1; j < m; j++)
	if (*(p + i) > *(p + j))
	{
		t = *(p + i);
		*(p + i) = *(p + j);
		*(p + j) = t;
	}

}
main()
{
	int a[1], n, i;
	int *pa;
	pa = &a[0];

	printf("upisi velièinu polja ");
	scanf("%d", &n);

	pa = malloc(n*sizeof(int));

	for (i = 0; i<n; i++)
	{
		printf("upisi A[%d]= ", i);
		scanf("%d", &(*(pa + i)));
	}

	sort(pa, n); 

	for (i = n - 1; i >= 0; i--)  printf("A[%d]= %d \n", i, *(pa + i));



}





    
    
