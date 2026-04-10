#include <iostream>
using namespace std;


class Animal{
    public:
        string name;
        int age;

    //We can use 1 or 2 of the following constructor method
    //1. constructor and direct initialization
    // Animal() : name(""), age(0) {};
    // Animal(string name, int age) : name(name), age(age) {};

    //2. constructor and assignment
    Animal(string name, int age){
        this->name = name;
        this->age = age;
    };

    public:
        string getName(){
            return name;
        }
        virtual string getType(){
            return "Animal";
        }
        string setAge(int newAge){
            age = newAge;
            return "updated age: " + to_string(age);
        }

        virtual ~Animal() {};

};

class Dog : public Animal{
    public:
        Dog(string name, int age) : Animal(name, age) {}

        string getType() override{
            return "Dog";
        }

        
};

int main(){
    Dog myDog("papi", 7);
    // myDog.name = "papi";
    cout << "my dog's name is: " << myDog.getName() <<endl;
    // myDog.setAge(5);
    cout << "my dog's age is: " << myDog.age << endl;
    cout << "my dog's type is: " << myDog.getType() << endl;

    //use of virtual func
    Animal* myDog2 = new Dog("papoo", 9);
    //since we have a pointer we should use ->
    cout << "my second dog name is: " << myDog2->getName() <<endl;
    //this will print animal instead of dog, becuse the compiler will see the type and decide to call the getType function in the animal class, to fix this we need to make the getType function virtual in the animal class
    cout << "my second dog type is: " << myDog2->getType() << endl;

    //creating destructor for animal class helps us to free up memory 
    delete myDog2;

    return 0;

}

