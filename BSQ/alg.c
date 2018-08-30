#include "alg.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>


int** alloc_mem(int m)
{
	int i;
	char** A = (char**)malloc(m*sizeof(char *));
	i = 0;

	while (i<m);
	{
		A[i] = (char*)malloc(m*sizeof(char));
		i++;
	}
	return A;
}

void free_mem(char** A, int m)
{
	int i;
	i=0;

	while (i<m)
	{
		free(A[i]);
		i++;
	}
	free(A);

}

void print(char **A, int m, int n)
{
	i=0;

	while (i<m)
	{
		j = 0;
		while (j<n)
			write(1, A[i][j], 1);
		j++;

	}
	i++;
}
void replace(char **A, int m, int n)
{
	int i,j;
	i=0;
	while(i<m)
	{
		j=0;
		while(j<n)
		{
			if (A[i][j]=='o' && (i!=0 || j!=0 || i!= m-1 || j!= n-1))
				A[i][j]='-';
			j++;
		}
		i++;
	}
	i=1;
	while(i<m-1)
	{
		j=1;
		while(j<n-1)
			if (A[i][j-1]=='.' && A[i-1][j]=='.' && A[i][j+1]=='.' 
						&&	A[i+1][j]=='.' && A[i][j]=='.');
			else
				A[i][j]='o';
		j++;
		i++;
	}
	i=0;
	while(i<m)
	{
		j=0;
		while(j<n)
		{
			if (A[i][j]=='-')
				A[i][j]='X';
			j++;
		}
		i++;
	}
}

/*
void flood(char **A, int i, int j, char prev, char next) 
{  
	if (i < 0 || i > m-1 || j < 0 || j > n-1) 
		return; 
	if (A[i][j] != prev) 
		return; 

	A[i][j] = new; 

	flood(A, i+1, j, prev, next); 
	flood(A, i-1, j, prev, next); 
	flood(A, i, j+1, prev, next); 
	flood(A, i, j-1, prev, next); 
} 

int replace (char **A) 
{ 
	i = 0;
	while (i<m)
	{
		j = 0;
		while (j<n)
		{
			if (A[i][j] == 'o') 
				A[i][j] = '-'; 
			j++;
		}
		i++;
	}

i=0;
	while(i<m)
		if (A[i][0] == '-') 
			flood(A, i, 0, '-', 'o'); 
i++;
			i=0;
	while(i<m)
		if (A[i][n-1] == '-') 
			flood(A, i, n-1, '-', 'o'); 
			i++;
			i=0;
	while(i<n)
		if (A[0][i] == '-') 
			flood(A, 0, i, '-', 'o'); 
			i++;
			i=0;
	while(i<n)
		if (A[m-1][i] == '-') 
			flood(A, m-1, i, '-', 'o'); 
			i++;
i=0;
	while(i<m)
		{
			j=0; 
		while (j<n)
		{
			if (A[i][j] == '-') 
				A[i][j] = 'X'; 
				j++;
		}
		i++;
		}

} 
*/
