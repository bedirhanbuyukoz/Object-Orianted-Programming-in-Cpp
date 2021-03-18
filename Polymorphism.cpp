#include <iostream>
using namespace std;

// Base class
class Animal {
  public:
    void animalSound() {
    cout << "The animal makes a sound \n" ;
  }
};

// Derived class
class Sheep : public Animal {
  public:
    void animalSound() {
    cout << "The sheep says: mee mee \n" ;
   }
};

// Derived class
class Dog : public Animal {
  public:
    void animalSound() {
    cout << "The dog says: bow wow \n" ;
  }
};

int main() {
  Animal myAnimal;
  Sheep mySheep;
  Dog myDog;

  myAnimal.animalSound();
  mySheep.animalSound();
  myDog.animalSound();
  return 0;
}
