#ifndef _ALG_H_
# define _ALG_H_

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

typedef struct s_char
{
	char repl;
	char obst;
	char vid;
	int row;
	int col;
}			t_char;
typedef struct sq
{
	int sq_s;
	int sq_i;
	int sq_j;
} t_sq;
void ft_putchar(char, int);
void ft_putstr(char*, int);
void ft_input_mode();
int** alloc_mem(int, int);
void free_mem(char**, int);
void replace(char**, int , int);
void print(char **, int , int);
int length(char *);
int s_line(char *s, int *size, t_char *ch, int *fd);
void print_bsq(int **a, int n, int m, t_char ch);
int **read_bsq(int fd, int size, int nr_p_lines, t_char ch);
int error(char *str, t_char *ch,int *fd);
int min(int a, int b, int c);
void maxsq(int **a, int n, int m, int **t);
void maxsq1(int **a, int n, int m, int **t);
void maxsq2(int **a, int n, int m, int **t);
t_sq maxsq3(int **, int, int , int **);
int ft_atoi(char *);
int 


#endif

