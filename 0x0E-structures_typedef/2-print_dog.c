#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "dog.h"

void print_dog(struct dog *d)
{
  if (d != NULL)
  {
   
    if (d->name != NULL)
    printf("%s\n", d->name);
    else
      printf("nil\n");

    printf("%f\n", d->age);
  
  if (d->owner == NULL)
    printf("nil\n");
    else
    printf("%s\n", d->owner);
  }
  else
    printf("nil\n");
  
  return;
}

