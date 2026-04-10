#include <iostream>
#include <memory>
using namespace std;

int main(){
    int* ptr;
    *ptr = 10;
    cout << *ptr << endl;
    delete ptr;

    int* ptr2 = new int(10);
    cout << *ptr2 << endl;
    delete ptr2;

    unique_ptr<int> ptr3 = make_unique<int>(10);
    cout << *ptr3 << endl;

    // unique_ptr<int> ptr4 = ptr3; this is not allowed because unique_ptr cannot be copied, it can only be moved
    unique_ptr<int> ptr4 = move(ptr3);
    
    shared_ptr<int> ptr5 = make_shared<int>(20);
    shared_ptr<int> ptr6 = ptr5;
    cout << *ptr6 << endl;

    string gender = "female";
    string* memoryAddress = &gender;
    cout << "gender: " << *memoryAddress << endl;

    return 0;
}