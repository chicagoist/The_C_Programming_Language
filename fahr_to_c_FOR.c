/*
 * =====================================================================================
 *
 *       Filename:  fahr_to_c_FOR.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  07.04.2019 12:35:47
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  
 *        Company:  freelance
 *
 * =====================================================================================
 */

#include <stdio.h>

/* печать таблицы температур по Фаренгейту и Цельсию с помощью сикла for */

int main ()
{
  int fahr;
  for(fahr = 0; fahr <= 300; fahr = fahr + 20)
    printf ("%3d %6.1f\n", fahr, (5.0/9.0) * (fahr - 32));




  return 0;
}
