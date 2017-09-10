#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> temp(100);

    for(int i = 0; i < temp.size(); i++) {
        temp[i] = i * i;
    }

    for(int i = 0; i < temp.size(); i++) {
        cout << i << ": " << temp[i] << endl;
    }
}