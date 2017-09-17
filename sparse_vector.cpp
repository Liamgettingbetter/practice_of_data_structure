//
// Created by Hao Lei on 14/09/2017.
//
#include <iostream>
#include <vector>

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

    // When there is no element in sparse vector.
    if(this->head == nullptr) {
        this->head = new_node;
        this->size++;
        this->num_nodes++;
        return;
    }

    // When at least there is one element in the sparse vector.
    while(temp != nullptr) {
        // When position in current node is equal to pos,
        // just refresh the value in current node.
        if(temp->position == pos) {
            temp->value = v;
            break;
        }
        // When there is only one node in our sparse vector
        // then we might not have a second node to compare its position
        // so just add it to the list.
        else if(this->size == 1 && temp->position > pos) {
            new_node->next = temp;
            temp = new_node;
            this->size++;
            this->num_nodes++;
        }
        // When we get a largest node position, just put it in the end.
        else if(temp->position < pos && temp->next == nullptr) {
            temp->next = new_node;
            this->size++;
            this->num_nodes++;
            break;
        }
        // If the position of current node is less than pos but the one of the next is larger,
        // then we find the right place to insert our new node.
        else if(temp->position < pos && temp->next->position > pos) {
            new_node->next = temp->next;
            temp->next = new_node;
            this->size++;
            this->num_nodes++;
        }

        temp = temp->next;
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
    cout << endl;
    node* temp = this->head;

    while(temp != nullptr) {
        cout << temp->value << " " << temp->position << "  ";
        temp = temp->next;
    }
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
