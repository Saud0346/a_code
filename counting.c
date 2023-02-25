#include <stdio.h>
#include <stdlib.h>
#define n 10
#define k 6

void print (int *, int s);

void counting (int *A, int *B)
{
	int C[k];
	int i;
	for (i = 0; i < k; ++i)
		C[i] = 0;
	for (i = 0; i < n; ++i)
		C[A[i]]++;
	printf ("Printing C \n");
	print (C, k);
	for (i = 1; i < k; ++i)
		C[i] += C[i-1];

	printf ("Printing C after prefix sum.. \n");
	print (C,k);

	/*for (i = n - 1; i >= 0; --i)
	{
//		printf ("(%d, %d) ", A[i], C[A[i]]);
		B[--C[A[i]]] = A[i];
//		printf ("(B [%d] = %d ..)", C[A[i]], B[C[A[i]]]);
//		C [A[i]]--;

	}*/


}

void print (int *B, int s){
	int i;
	printf ("Printing Array of size %d.\n", s);

	for (i = 0; i < s; ++i)
		printf ("%d ", B[i]);
	printf ("\n");
}

int main (){
	int A [n] = {0, 1, 2, 1, 0, 1, 2, 5, 3, 2};
	int B [n];
	counting (A, B);
	print (B, n);
	return 0;
}
