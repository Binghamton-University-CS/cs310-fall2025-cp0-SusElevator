#include "Animal.h"
#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

class AnimalsInZoo {
   public:
        AnimalsInZoo(Animal a);
        numAnimals();
        void display();
         
   private:
        int numAnimals;
        Animal a();
};