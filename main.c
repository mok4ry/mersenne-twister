#include <stdlib.h>
#include <stdio.h>
#include "mtwist.h"

int main() {
  initialize_with_rand();
  printf( "%u\n", extract_number() );
  printf( "%u\n", extract_number() );
  printf( "%u\n", extract_number() );
  printf( "%u\n", extract_number() );
  printf( "%u\n", extract_number() );

  return 0;
}