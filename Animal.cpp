#include "Animal.h"
#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;


Animal::Animal() : name("N/A"), year_discovered(0) {}

Animal::Animal(const string& discoveryName, unsigned int discoveryYear) {
   name = discoveryName;
   year_discovered = discoveryYear;
}

void Animal::display() {
   cout << name << " [" << year_discovered << "]" << endl;
}
