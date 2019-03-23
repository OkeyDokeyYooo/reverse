# reverse

## Requirements
* a single function that matches this declaration:
```C
void reverse( int arr[], unsigned int len );
```
* Array arr is of length len, and contains arbitrary integer values.
* The function should reverse the contents of the array in-place, so that on returning, the array contains the same values as before, but in the reverse order.

## Guide

I created a main function use your function, look at this yo!

```C
#include <stdio.h>

// declaration of function implemented in reverse.c 4. void reverse( int arr[], unsigned int len );

int main( void )
{
  int a[] = {11, 12, 13};
  unsigned int len = 3; 
  reverse( a, len );

 unsigned int i=0;
 for( i=0; i<len; i++ )
 {
    printf( "%d ", a[i] );
 }
    printf( "\n" );
    return 0; 
 }
```

This code prints:
13 12 11
Notice that the length of the array
a[]
is not specified explictly: it is set to the length of the initialization list
{11, 12, 13}

