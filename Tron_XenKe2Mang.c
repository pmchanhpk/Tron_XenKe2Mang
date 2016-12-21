#include<stdio.h>

void nhapMang(int a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		printf("Phan tu thu %d la: ", i+1);
		scanf("%d", &a[i]);
	}
}

void xuatMang(int a[], int n)
{	
	for(int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);		
	}
}

void tronMang(int A[], int n, int B[], int m, int C[])
{
	if (n < m)	
		{
			for(int i = 0; i < n; i++)
				{
					C[2 * i] = A[i];
					C[2 * i + 1] = B[i];
				}
			for (int i = 0; i < m-n; i++)
				  C[2 * n + i] = B[n + i];
		}
	
	else 
		{
			for(int i = 0; i < m; i++)
				{
					C[2 * i] = A[i];
					C[2 * i + 1] = B[i];
					
				}
			for (int i = 0; i < n-m; i++)
				  C[2 * m + i] = A[m + i];
		}
}

int main()
{
	int A[100], B[100], C[200], n=0, m=0;
	
	printf("Nhap so phan tu cua mang A: ");
	scanf("%d", &n);
	nhapMang(A,n);
	
	printf("Nhap so phan tu cua mang B: ");
	scanf("%d", &m);
	nhapMang(B,m);
	
	tronMang(A, n, B, m, C);
	xuatMang(C,n+m);
	return 0;	
}
