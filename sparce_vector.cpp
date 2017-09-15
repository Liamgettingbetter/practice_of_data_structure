//
// Created by 雷昊 on 14/09/2017.
//
#include <iostream>
using namespace std;

class node {
    public :
        int value;
        int position;
        node* next;

        node() {
            value = -9999;
            position = -1;
            next = nullptr;
        }

        node(int i, int j) {
            value = i;
            position = j;
            next = nullptr;
        }
};

class vector {
    public :
        int size;
        int num_nodes;  // number of non-zero elements.
        node* head;

        vector() {
            size = 0;
            num_nodes = 0;
            head = nullptr;
        }

        // add a new node with value v and position p;
        // if it already exists, update this value to v;
        void add_node(int v, int pos);

        // set size to s;
        // randomly create n nodes in -(k - 1) to k - 1.
        void make_random_vector(int s, int n, int k);

        // vector addition
        vector operator+(vector another);

        // inner product
        int operator*(vector another);

        void print();
};

void vector::add_node(int v, int pos) {
    if(v == 0) {
        this->size++;
        return;
    }

    node* temp = this->head;
    node* new_node = new node(v, pos);

    while(temp->next != nullptr) {
        if(temp->position == pos) {
            temp->value = v;
        }

        if(temp->next->position > pos) {
            node* temp2 = temp->next;
            new_node->next = temp2;
            temp->next = new_node;
        }
    }
}

void vector::make_random_vector(int s, int n, int k) {
    this->size = s;

    for(int i = 0; i < n; i++) {
        int p = rand() % s;
        int v = rand() % (2 * k - 1) - (k - 1);
        add_node(p, v);
    }
}

void vector::print() {

}

vector vector::operator+(vector another) {

}

int vector::operator*(vector another) {

}

int main() {
    vector v1, v2, v3;
    v1.make_random_vector(30, 8, 10);
    v1.print();
    v2.make_random_vector(30, 6, 10);
    v2.print();
    v3 = v1 + v2;
    v3.print();
    int inner_product = v1 * v2;
    cout << inner_product << endl;
}
