/*
 * =====================================================================================
 *
 *       Filename:  int_EOF.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  07.04.2019 14:23:46
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
  int c;

 
  c = getchar();
  while (c){
  
    c = getchar();

    if (c == EOF) {
    printf (" %d\n", c);
    return 0;
  }
 }

}

