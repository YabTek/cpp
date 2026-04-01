using namespace std;
#include <iostream>
#include <map>
#include <vector>
#include <unordered_map>


int main(){
    map<int, int> myMap = {{1, 10}, {2, 20}, {3, 30}};
    int keyToFind = 20;

    if(myMap.find(keyToFind) != myMap.end()){
        cout << "Key found: " << keyToFind << endl;
    }
    else {
        cout << "Key not found" << endl;
    }

    //add a new element
    myMap.insert({9, 45});
    cout << "MyMap Size: " << myMap.size() << endl;

    //iterate through the map
    for(auto &element : myMap){
        cout <<  "key: " << element.first << ", " << "value: " << element.second << endl;
    }

    //remove element 
    myMap.erase(2);
    cout << "After removing element, MyMap Size: " << myMap.size() << endl;

    //clear map
    myMap.clear();


    //freq counting using unordered_map
    vector<int> vec = {1, 2, 3, 4, 3};
    unordered_map<int, int> freq;

    for (auto num : vec){
        freq[num]++;
    }

    for (auto &element : freq){
        cout << element.first << " appears " << element.second << " times" << endl;
    }

    return 0;
}
