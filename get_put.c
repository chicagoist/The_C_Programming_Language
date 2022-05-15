/*
 * =====================================================================================
 *
 *       Filename:  get_put.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  07.04.2019 13:52:34
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  
 *        Company:  freelance
 *
 * =====================================================================================
 */

#include <stdio.h>

/* копирование ввода на выводж 1-я версия*/

int main ()
{
  int c;
  printf ("EOF = %d\n",  EOF);
  c = getchar();
  
  while (c != EOF) {
    if ( (getchar() != EOF) != 0 || 1){
    putchar (c);
    c = getchar();
    }
  }

  return 0;
}
