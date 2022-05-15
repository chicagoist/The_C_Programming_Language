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
  int c,  nl;
  nl = 0;
  while ((c = getchar()) != EOF)
      if (c == '\n')
        ++nl;
  printf ("%d\n",  nl);


  return 0;
}

