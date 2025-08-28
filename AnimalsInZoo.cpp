#include "AnimalsInZoo.h"
#include "Animal.h"
#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

AnimalsInZoo::AnimalsInZoo(Animal a) {
   numAnimals = 1;
}

AnimalsInZoo::AnimalsInZoo() {
   numAnimals = 0;
}

AnimalsInZoo::display() { 
   cout << numAnimals << endl;
   if (numAnimals > 0) {
      a.display();
   }
}