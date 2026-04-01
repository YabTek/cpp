#include <iostream>
using namespace std;


class Animal{
    public:
        string name;
        int age;

    public:
        string getName(){
            return name;
        }
        string getType(){
            return "Animal";
        }
        string setAge(int newAge){
            age = newAge;
            return "updated age: " + to_string(age);
        }

};

class Dog : public Animal{
    public:
        string getType(){
            return "Dog";
        }

    //constructor
    Dog(string name, int age){
        this->name = name;
        this->age = age;
    }
};

int main(){
    Dog myDog("papii", 7);
    // myDog.name = "papi";
    cout << "my dog's name is: " << myDog.getName() <<endl;
    // myDog.setAge(5);
    cout << "my dog's age is: " << myDog.age << endl;
    cout << "my dog's type is: " << myDog.getType() << endl;


    return 0;

}

