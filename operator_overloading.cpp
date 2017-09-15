//
// Created by 雷昊 on 12/09/2017.
//
#include <iostream>
#include <string>
using namespace std;

class Three_Dimension {
    public :
        int width;
        int height;
        int depth;

        Three_Dimension() {
            width = 0;
            height = 0;
            depth = 0;
        }

        Three_Dimension(int wid, int hgt, int dth) {
            width = wid;
            height = hgt;
            depth = dth;
        }

        Three_Dimension operator+(Three_Dimension t1);
        Three_Dimension operator++();   // prefix increment operator ++x
        Three_Dimension operator++(int not_used);    // postfix increment operator x++
        int & operator[](int num);  // return a reference to an object.
};

// add operator overloading function implementation.
Three_Dimension Three_Dimension::operator+(Three_Dimension t1) {
    Three_Dimension temp;
    temp.width = this->width + t1.width;
    temp.height = this->height + t1.height;
    temp.depth = this->depth + t1.depth;
    return temp;
}

// Unary prefix increment.
Three_Dimension Three_Dimension::operator++() {
    ++this->width;
    ++this->height;
    ++this->depth;
    return *this;   // return a pointer referring to objects that calls this function.
}

// Unary postfix increment
Three_Dimension Three_Dimension::operator++(int never_used) {
    this->width++;
    this->height++;
    this->depth++;
    return *this;   // same as above.
}

int & Three_Dimension::operator[](int k) {
    switch(k) {
        case 0 :
            return this->width;
        case 1 :
            return this->height;
        case 2 :
            return this->depth;
    }
}

int main() {
//
//    string s1 = "Hello World!";
//    cout << s1 << endl;
//
//    srand(2);
//    for(int i = 0; i < 10; i++) {
//        cout << rand() % 10 + 20 << " ";
//    }
    Three_Dimension t1, t2(3, 4, 5), t3(2, 1, 2);
    t1 = t2 + t3;   // t1 = t2.operator+(t3); --- operator overloading
    t1 = t2++;
    t1 = ++t2;
    t2[2] = 10;

    getchar();
    getchar();
    return 0;
}

