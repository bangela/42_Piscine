#include "alg.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>


int** alloc_mem(int m, int n)
{
	int i;
	int j;
	int **A;
	A = (int**)malloc(m*sizeof(int *));
	i = 0;

	while (i<n)
	{
		A[i] = (int*)malloc(n*sizeof(int));
		i++;
	}
	i = 0;
	while (i < m)
	{
		j = 0;
		while (j < n)
		{
			A[i][j] = 0;
			j++;
		}	
		i++;
	}
	return (A);
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
int ft_error(void)
{
	ft_putstr("map error\n", 2);
	return (-1);
}
int error(char *str, t_char *ch, int *fd)
{
	int nr;

	nr = s_line(str, &(ch->row), ch, fd);
	if (nr % (ch->row) != 0)
		return (ft_error());
	else ch->col = nr / (ch->row) ;
	if ((str[ch->col] != '\n') || ((str[nr] != ch->repl) 
				|| (str[nr] != ch->obst) || (str[nr] != ch->vid)) 
			|| (str != NULL))
		return(ft_error());
	return (0);

}
void maxsq1(int **A, int M, int N, int **T)
{
	int i;
	int j;

	i = 0;
	while (i < M)
	{
		T[i][0] = A[i][0]; 
		i++;
	}
	j = 0; 
	while(j < N)
	{
		T[0][j] = A[0][j];
		j++;
	}
}

void maxsq2(int **A, int M, int N, int **T)
{
	int i;
	int j;

	i = 1; 
	while(i < M)
	{
		j = 1; 
		while(j < N)
		{
			if( A[i][j] == 1)
				T[i][j] = min(T[i][j-1], T[i-1][j], T[i-1][j-1]) + 1;
			else
				T[i][j] = 0;
			j++;
		} 
		i++;

	} 
}
t_sq maxsq3(int **A, int M, int N, int **T)
{

	int i;
	int j;
	t_sq t;

	t.sq_s= T[0][0]; 
	t.sq_i = 0; 
	t.sq_j = 0;
	i = 0; 
	while(i < M)
	{
		j = 0; 
		while(j < N)
		{
			if((t.sq_s) < T[i][j])
			{
				t.sq_s= T[i][j];
				t.sq_i = i; 
				t.sq_j = j;
			}  
			j++;      
		}  
		i++;
	}
   return (t);	
}
void maxsq(int **A, int M, int N, int **T)
{
	int i;
	int j;
	t_sq  t;

maxsq1(A, M, N, T);
maxsq2(A, M, N, T);
t = maxsq3(A, M, N, T);

i = t.sq_i; 
while(i > ((t.sq_i) - (t.sq_s)))
{
	j = t.sq_j; 
	while(j > ((t.sq_j) - (t.sq_s)))
	{
		A[i][j] = 5;
		j--;
	}  
	i--;
} 
}


