/*
 * =====================================================================================
 *
 *       Filename:  number_ch_2.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  07.04.2019 14:57:48
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  
 *        Company:  freelance
 *
 * =====================================================================================
 */

#include <stdio.h>

/* подсчёт вводимых символов; 2-я версия */

int main ()
{
  double nc;
  for (nc = 0; getchar() != EOF; ++nc)
    ;
  printf ("%.0f\n", nc);

  return 0;

}
