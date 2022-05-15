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

/* печать таблицы температур по Цельсию
 * и Фаренгейт для celsius = 0,  20, ...,  300; вариант с плавающей точкой
 * ℉ = ℃ * 1.8000 + 32.00*/


int main ()
{
  float fahr,  celsius;
  int lower,  upper,  step;

  lower = 0; /* нижняя граница температур */
  upper = 300; /* верхняя граница теператур */
  step = 20; /* шаг */

  celsius = lower;
  printf("Печать таблицы теператур\nпо Цельсиюсу и Фаренгейту\n \n");
  while (celsius <= upper) {
    fahr = celsius * 1.8000 + 32.00;
    printf ("%3.0f %6.1f\n", celsius, fahr);
    celsius += step;
  }

  return 0;
}


