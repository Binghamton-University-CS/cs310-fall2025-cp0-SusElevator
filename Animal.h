#ifndef ANIMAL_H
#define ANIMAL_H
#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

class Animal {
   public:
      Animal();
      Animal(const string& name, unsigned int year_discovered);
      void display();
   private:
      string name;
      unsigned int year_discovered;
};
#endif