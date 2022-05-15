/*
 * =====================================================================================
 *
 *       Filename:  fahr.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  31.03.2019 16:53:54
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  
 *        Company:  freelance
 *
 * =====================================================================================
 */
#include <stdio.h>

/* печать таблицы температур по Фаренгейту
 * и Цельсию для fahr = 0,  20, ...,  300 */


int main ()
{
  int fahr,  celsius;
  int lower,  upper,  step;

  lower = 0; /* нижняя граница температур */
  upper = 300; /* верхняя граница теператур */
  step = 20; /* шаг */

  fahr = lower;
  while (fahr <= upper) {
    celsius = 5 * (fahr - 32) / 9;
    printf ("%d\t %d\n", fahr, celsius);
    fahr = fahr + step;
  }

  return 0;
}


