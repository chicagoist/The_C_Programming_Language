/*
 * =====================================================================================
 *
 *       Filename:  number_ch.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  07.04.2019 14:52:51
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  
 *        Company:  freelance
 *
 * =====================================================================================
 */

#include <stdio.h>

int main ()
{
  long nc;
  nc = 0;
  while (getchar () != EOF)
    ++nc;
  printf ("%ld\n", nc);

  return 0;
}
