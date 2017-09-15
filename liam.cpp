////
//// Created by 雷昊 on 12/09/2017.
////
//
////
//// Created by 雷昊 on 12/09/2017.
////
////standard template library
////vector, list, stack, queue
//#include <iostream>
//#include <fstream>
//#include <vector>
//#include <list>
//#include <stack>
//#include <queue>
//
//using namespace std;
//
//void DB1_to_DB2(vector<list<int>> &DB1, list<vector<int>> &DB2);
////call by ref
//void DB1_print(vector<list<int>> &DB1);
//void DB2_print(list<vector<int>> &DB2);
//void DB2_to_DB1(vector<list<int>> &DB1, list<vector<int>> &DB2);
//void DB3_print(list<list<int> *> &DB3);
//void DB1_to_DB3(vector<list<int>> &DB1, list<list<int> *> &DB3);
//
//int main() {
///*
//	int array_size;
//	array_size = 100;
//
//	//int AA[array_size];  error.  array size has to be a constant
//
//	int * AA1 = new int[array_size];
//	AA1[45] = 34;
//
//
//	vector<int> V1(10, 1);
//	V1.push_back(23); //add a new number 23 to the back of V1
//	V1.pop_back(); //remove the last number of V1
//	cout << V1[5];//supports index (random access)
//	cout << V1.size();
//	V1.resize(8);
//	for (size_t i = 0; i < V1.size(); i++) //size_t is non-negative int
//		cout << V1[i] << " ";
//	cout << endl;
//	vector<int>::iterator it1 = V1.begin();
//	while (it1 != V1.end()) {
//		cout << *it1 << " ";
//		it1++;
//	}
//	//begin() returns the location of the first element
//	//end() returns the locaiton after the last element
//
//	vector<int> V2 = { 2,5,8,6,7 };//vector 5 elements with the specified values
//	list<int> L1 = { 11,2,4,6,9 };
//	L1.push_back(88);
//	L1.pop_back();
//	L1.push_front(22);
//	L1.pop_front();
//	list<int>::iterator it2 = L1.begin();
//	while (it2 != L1.end()) {
//		cout << *it2 << " ";
//		it2++;
//	}
//	stack<int> S1;
//	S1.push(5);
//	S1.push(7);
//	S1.push(66);
//	cout << S1.top() << endl;
//	S1.pop();
//	cout << S1.size() << endl;
//
//	queue<int> Q1;
//	Q1.push(4);
//	Q1.push(5);
//	Q1.push(6);
//	Q1.pop();
//	cout << Q1.front() << " " << Q1.back() << endl;
//*/
//    vector<list<int>> DB1 = { {1,2,3}, {4,5}, {8,9,10,11} };
//    DB1_print(DB1);
//
//    list<vector<int>> DB2;
//    DB1_to_DB2(DB1, DB2);
//    DB2_print(DB2);
//
//    list<vector<int> *> DB3;
//
//    getchar();
//    getchar();
//    return 0;
//}
//
//void DB1_print(vector<list<int>> &DB1) {
//    list<int>::iterator it1;
//
//    for (size_t i = 0; i < DB1.size(); i++) {
//        it1 = DB1[i].begin();
//        cout << endl;
//
//        while (it1 != DB1[i].end()) {
//            cout << *it1 << " ";
//            it1++;
//        }
//    }
//}
//
//void DB2_print(list<vector<int>> &DB2) {
//    list<vector<int>>::iterator it1 = DB2.begin();
//    while (it1 != DB2.end()) {
//        cout << endl;
//        for (size_t i = 0; i < it1->size(); i++) { //(*it1).size()
//            cout << (*it1)[i] << " ";
//        }
//        it1++;
//    }
//}
//
//void DB1_to_DB2(vector<list<int>> &DB1, list<vector<int>> &DB2) {
//    list<int>::iterator it1;
//    for (size_t i = 0; i < DB1.size(); i++) {
//        vector<int> v;
//        it1 = DB1[i].begin();
//        while (it1 != DB1[i].end()) {
//            v.push_back(*it1);
//            it1++;
//        }
//        DB2.push_back(v);
//    }
//}
//
//void DB1_to_DB3(vector<list<int>> &DB1, list<list<int>*> &DB3) {
//    for(size_t i = 0; i < DB1.size(); i++) {
//        list<int>::iterator it1 = DB1[i].begin();
//        // list<int> list1;  wrong, it is a local variable, and will be reclaimed by system when function ended.
//        list<int> * list1 = new list<int>;
//        while(it1 != DB1[i].end()) {
//            list1->push_back((*it1));
//            it1++;
//        }
//        DB3.push_back(list1);
//    }
//}
//
//void DB3_print(list<list<int>*> &DB3) {
//    list<list<int>*>::iterator it1 = DB3.begin();
//
//    while(it1 != DB3.end()) {
//        list<int>::iterator it2 = (*it1)->begin();
//
//        while(it2 != (*it1)->end()) {
//            cout << (*it2) << " ";
//            it2++;
//        }
//        it1++;
//    }
//}