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

#define LOWER 0 /* нижняя граница таблицы по Фаренгейту */
#define UPPER 300 /* верхняя граница таблицы по Фаренгейту */
#define STEP 20 /* размер шага */



/* печать таблицы температур по Фаренгейту и Цельсию с помощью сикла for */

int main ()
{
  int fahr;
  for(fahr = LOWER; fahr <= UPPER; fahr += STEP)
    printf ("%3d %6.1f\n", fahr, (5.0/9.0) * (fahr - 32));




  return 0;
}
