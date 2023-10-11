#include <stdio.h>
#include "dog.h"
#include <string.h>
#include <stdlib.h>

dog_t *new_dog(char *name, float age, char *owner)
{
  dog_t *new_dog = malloc(sizeof(dog_t));
  
  if (new_dog != NULL)
  {
      new_dog->name = malloc(strlen(name) +1);
    strcpy(new_dog->name, name);
    if (new_dog->name == NULL)
      printf("(nil\n)");

    new_dog->age = age;
    
    new_dog->owner = malloc(strlen(owner) + 1);
    strcpy(new_dog->owner, owner);
    if (new_dog->owner == NULL)
      printf("(nil)\n)");
  }
  else 
  {
    return (NULL);
  }

  return (new_dog);
}
