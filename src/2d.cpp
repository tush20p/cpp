/* Dynamically Allocate Memory for 2D Array in C++ */
#include "../inc/dma.h"

using namespace std;

#define M 4
#define N 5

int main()
{
	int *A = new int[M * N]; //2D array allocation

	for (int i = 0; i < M; i++)   // assign values to allocated memory
		for (int j = 0; j < N; j++)
			*(A + i*N + j)=i*j;

	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
			cout << *(A + i*N + j) << " "; 

		cout << endl;
	}

	delete[] A;

	return 0;
}
