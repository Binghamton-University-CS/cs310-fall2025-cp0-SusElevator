#include "Animal.h"
#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

class AnimalsInZoo {
   public:
        AnimalsInZoo(Animal a);
        int numAnimals();
        void display();
         
   private:
        int numAnimals;
        Animal a();
};