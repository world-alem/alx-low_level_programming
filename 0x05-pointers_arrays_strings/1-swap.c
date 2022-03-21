#include<stdio.h>
/**
 * swap_int - swaps the values of two integers
 * @a: number 1
 * @b: number 2
 * Return: Always 0 (Success)
 */
void swap_int(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}
