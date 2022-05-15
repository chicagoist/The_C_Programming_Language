/*
 * =====================================================================================
 *
 *       Filename:  get_put_2.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  07.04.2019 14:04:48
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author: 
 *        Company:  freelance
 *
 * =====================================================================================
 */

#include <stdio.h>

/* копирование ввода на вывод; 2-я версия*/

int main ()
{

  int c;

  while ((c = getchar() ) != EOF)
    putchar (c);

  return 0;
}
