/*
 * =====================================================================================
 *
 *       Filename:  count_of_str.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  07.04.2019 17:10:22
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  
 *        Company:  freelance
 *
 * =====================================================================================
 */
#include <stdio.h>

/* подсчёт строк входного потока */

int main ()
{
  int c,  nl, nt, nn, ns;
  nl = 0;
  nt = 0;
  nn = 0;
  ns = 0;
  
  while ((c = getchar()) != EOF){ 
      if (c == '\n')
        ++nl;
      if (c == '\t')
        ++nt;
      if (c == ' ')
        ++ns;
  }

  printf (" Пробелов = %d\n Табуляций = %d\n Новых строк = %d\n",ns, nt, nl);


  return 0;
}

