#ifndef ANIMAL_H
#define ANIMAL_H
#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

class Animal {
   public:
      Animal(string species, unsigned int year_discovered);
      Animal();
      void display();
   private:
      string species;
      unsigned int year_discovered;
};
#endif