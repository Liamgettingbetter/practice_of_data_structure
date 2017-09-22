
// Created by 雷昊 on 12/09/2017.

#include <iostream>
#include <string>
#include <list>
#include <map>
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
        int  operator[](int num);      // return a reference to an object.
        bool operator<(const Three_Dimension &T) const;
        bool operator==(Three_Dimension T);

        // The keyword 'friend' allows an external function to take access to your private member.
        friend ostream & operator<<(ostream & stream1, Three_Dimension t);
        friend istream & operator>>(istream &stream2, Three_Dimension &t);

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
    return *this;    // return a pointer referring to objects that calls this function.
}

// Unary postfix increment
Three_Dimension Three_Dimension::operator++(int never_used) {
    this->width++;
    this->height++;
    this->depth++;
    return *this;   // same as above.
}

int Three_Dimension::operator[](int k) {
    switch(k) {
        case 0 :
            return this->width;
        case 1 :
            return this->height;
        case 2 :
            return this->depth;
        default:
            return -1;
    }
}

bool Three_Dimension::operator<(const Three_Dimension &T) const {
    return this->width * this->height * this->depth < (T.width) * T.height * T.depth;
}

bool Three_Dimension::operator==(Three_Dimension T) {
    return abs(this->width * this->height * this->depth - T.width * T.height * T.depth) <= 2;
}


//int main() {
////
////    string s1 = "Hello World!";
////    cout << s1 << endl;
////
////    srand(2);
////    for(int i = 0; i < 10; i++) {
////        cout << rand() % 10 + 20 << " ";
////    }
//
////    Three_Dimension t1, t2(3, 4, 5), t3(2, 1, 2);
////    t1 = t2 + t3;   // t1 = t2.operator+(t3); --- operator overloading
////    t1 = t2++;
////    t1 = ++t2;
////    t2[2] = 10;
//
//    Three_Dimension T1(3, 4, 5), T2(10, 20, 30), T3(1, 2, 3), T4(100, 2, 5);
//    list<int> l1 = { 5, 112, 3, 2, 1 };
//    l1.sort();
//
//    list<int>::iterator it1 = l1.begin();
//    while(it1 != l1.end()) {
//        cout << *it1 << ", ";
//        it1++;
//    }
//
//    it1 = find(l1.begin(), l1.end(), 3);
//    if(it1 != l1.end())
//        // erase() --- we have to check whether it is out of the list's range.
//        l1.erase(it1);
//    l1.remove(8);
//
//    map<int, string> map1;
//    map1[1000] = "Dave";
//    map1[50] = "John";
//    map1[80] = "Pat";
//    cout << endl;
//
//    map<int, string>::iterator map_iterator = map1.begin();
//    while(map_iterator != map1.end()) {
//        cout << map_iterator->first << " " << map_iterator->second << endl;
//        map_iterator++;
//    }
//
//    map_iterator = map1.find(50);
//    if(map_iterator != map1.end())
//        map1.erase(map_iterator);
//    // erase(iterator) erase the object pointed by map_iterator
//    // erase(it1, it2) erases all the objects between it1 and it2(not included).
//    // erase(key) erases allow key-based parameter.
//    // my_vector operator*(const my_vector &v); -- v is read-only parameter.
////    int k = 10;
////    int * const p11 = &k;
////    const int* p12;
////    int const * const p13 = &k;
//
//    getchar();
//    getchar();
//    return 0;
//}

