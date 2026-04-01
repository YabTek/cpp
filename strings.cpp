using namespace std;
#include <iostream>


int main(){
    string myString = "abcdefghi";

    //access letters in the string
    cout << myString[2] << endl;

    //modify string
    myString[2] = 'z';
    cout << myString << endl;

    //string length
    cout << "string length: " << myString.size() << endl;

    //remove last char
    myString.pop_back();
    cout << myString << endl;

    //remove first char
    myString.erase(0, 1);
    cout << myString << endl;

    //remove char at index 2
    myString.erase(2, 1);
    cout << myString << endl;

    //remove 3 characters starting from index 1
    myString.erase(1, 3);
    cout << myString << endl;

    //string concatenation
     cout << myString + "iiii" <<endl;

     //iterate through string
     for(char ch : myString){
        cout << ch << " ";
     }

     

}