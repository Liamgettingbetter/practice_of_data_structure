//
// Created by 雷昊 on 19/09/2017.
//
#include <iostream>
#include "operator_overloading.cpp"
#include <string>
#include <list>
#include <map>
using namespace std;

ostream & operator<<(ostream & stream1, Three_Dimension t) {
    stream1 << "[" << t.height << " ";
    stream1 << t.width << " ";
    stream1 << t.depth << "]";
    return stream1;
}

istream & operator>>(istream &stream2, Three_Dimension &t) {
    stream2 >> t.height >> t.width >> t.depth;
    return stream2;
}

class course {
    public :
        string name;    // name of this course
        int credits;
        int section;

        course(string name, int section, int credits) {
            this->name = name;
            this->section = section;
            this->credits = credits;
        }
};

//int main() {
//    course c1("CIS 554", 1, 3), c2("WRT 205", 8, 3), c3("MAT 296", 4, 4), c4("CSE 674", 1, 3);
//    map<int, list<course>*> Database;
//    Database[111] = new list<course>;
//    Database[111]->push_back(c2);
//    Database[111]->push_back(c1);
//    Database[111]->push_back(c4);
//
//    Database[2222] = new list<course>;
//    // (*Database[2222]).push_back(c2);  another form
//    Database[2222]->push_back(c2);
//    list<course>::iterator iterator2 = Database[111]->begin();
//    while(iterator2 != Database[111]->end()) {
//        cout << "[" << iterator2->name << ", " << iterator2->credits << ", " << iterator2->section << "]";
//        iterator2++;
//    }
//
//    Three_Dimension T1(3, 4, 5), T2(4, 5, 6), T3(5, 6, 7), T4(7, 8, 9);
//    list<Three_Dimension> list2 = { T3, T1, T4, T2 };
//    Three_Dimension T5 = T3;
//
//    list2.erase(find(list2.begin(), list2.end(), T5));
//    cout << (list2.begin())->height << endl;
//
//    list<int> list3 = { 8, 9, 3, 1, 100 };
//    list3.sort();
//
//    Three_Dimension T11(3, 4, 5), T12(4, 5, 6), T13(5, 6, 7), T14(7, 8, 9);
//    map<Three_Dimension, int> map2 = {{T13, 13}, {T12, 12}, {T14, 14}, {T11, 11}};
//    cout << ((map2.begin())->first).height << endl;
//    return 0;
//}

