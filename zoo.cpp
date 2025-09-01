#include "Animal.h"
#include <iostream>
#include <stdlib.h>
#include "AnimalsInZoo.h"
using namespace std;


int main() {
   Animal animal1("African Elephant", 1758);
   Animal animal2("Giant Panda", 1869);
   Animal animal3("Red Kangaroo", 1822);

   delete animal1;
   animal1 = new Animal("Snow Leopard", 1777);

   AnimalsInZoo numAnimals = new AnimalsInZoo(animal1);

   animal2.display();
   animal1->display();
   animal3.display();
   numAnimals.display();

   delete animal1;
}
