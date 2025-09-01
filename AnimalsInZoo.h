#ifndef ANIMALSINZOO_H
#define ANIMALSINZOO_H
#include "Animal.h"
#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

class AnimalsInZoo {
   public:
        AnimalsInZoo();
        AnimalsInZoo(Animal a);
        void addAnimal(Animal a);
        void display();
         
   private:
        int numAnimals;
        Animal a;
};
#endif