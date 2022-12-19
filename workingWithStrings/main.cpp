#include <iostream>

using namespace std;

int main(){
    string phrase = "Giraffe Academy";
    cout << phrase.find("Academy", 0) << endl;
    // .find(searchString, startingIndex)

    cout << phrase.substr(8, 3) << endl;
    // .substr(startingIndex, length)

    return 0;
}