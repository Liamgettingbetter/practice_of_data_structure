//
// Created by Hao Lei on 14/09/2017.
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

class Vector {
    public :
        int size;
        int num_nodes;  // number of non-zero elements.
        node* head;

        Vector() {
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
        Vector operator+(Vector another);

        // inner product
        int operator*(Vector another);

        void print();
};

void Vector::add_node(int v, int pos) {
    // Boundary check.
    // If value is equal to zero.
    if(v == 0) {
        this->size++;
        return;
    }

    // Boundary check.
    // If position is a negative integer.
    if(pos < 0) {
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

    // When at least there is one element in the sparse Vector.
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

void Vector::make_random_vector(int size, int nodes, int k_range) {
    this->size = size;

    for(int i = 0; i < nodes; i++) {
        int p = rand() % size;
        int v = rand() % (2 * k_range - 1) - (k_range - 1);
        add_node(p, v);
    }
}

void Vector::print() {
    node* temp = this->head;

    cout << "Format : [Value, Position]" << endl;
    while(temp != nullptr) {
        cout << "[" << temp->value << ", " << temp->position << "]";
        temp = temp->next;
    }
    cout << endl;
}

//Vector* Vector::operator+(Vector another) {
//    // Boundary check.
//    // If both vector have no elements.
////    if(this->size == 0 && another.size == 0) {
////        return nullptr;
////    }
////    else if(this->size == 0) {
////        return another;
////    }
////    else if(another.size == 0) {
////        return *this;
////    }
//
//    // Boundary check.
//    // If only one vector has no non-zero elements.
//    if(this->head == nullptr) {
//        if(this->size > another.size) {
//            another.size = this->size;
//        }
//        return another;
//    }
//    else if(another.head == nullptr) {
//        if(another.size > this->size) {
//            this->size = another.size;
//        }
//        return *this;
//    }
//
//
//    Vector temp = new Vector();
//    // Just count the total size of returned vector.
//    int total_size = this->size > another.size ? this->size : another.size;
//    temp->size = total_size;
//
//    // two pointer pointing respectively to the head of lists.
//    node* iterator1 = this->head;
//    node* iterator2 = another.head;
//    node* h_pointer = temp->head;
//    node* ptr2 = temp->head;
//
//    // First we insert all the non-zero elements of just one vector
//    // into our returned vector, in ascending way.
//    while(iterator1 != nullptr) {
//        node* temp_p = new node(iterator1->value, iterator1->position);
//        ptr2->next = temp_p;
//        ptr2 = temp_p;
//        iterator1 = iterator1->next;
//        temp->num_nodes++;
//    }
//    ptr2->next = nullptr;
//
//    iterator1 = temp->head;
//    node* previous = nullptr;
//
//    // Then we insert all the non-zero elements of another vector in order
//    // into our returned vector.
//    while(iterator2 != nullptr) {
//        while(iterator1 != nullptr) {
//            if(iterator2->position == iterator1->position) {
//                iterator1->value += iterator2->value;
//                break;
//            }
//            else if(iterator2->position < iterator1->position && previous != nullptr) {
//                node* temp1 = new node(iterator2->value, iterator2->position);
//                temp1->next = iterator1;
//                previous->next = temp1;
//                temp->num_nodes++;
//                break;
//            }
//            // If current node iterator2 pointing to is the smallest one in vector1,
//            // then we need to put it in the first place.
//            else if(iterator2->position < iterator1->position && previous == nullptr) {
//                node* temp1 = new node(iterator2->value, iterator2->position);
//                temp1->next = iterator1;
//                h_pointer = temp1;
//                temp->num_nodes++;
//            }
//
//            previous = iterator1;
//            iterator1 = iterator1->next;
//        }
//
//        iterator2 = iterator2->next;
//    }
//    return *temp;
//}

int Vector::operator*(Vector another) {
    int total_sum = 0;

    // Boundary check
    if(this->size == 0 || another.size == 0) {
        return -1;
    }
    else if(this->num_nodes == 0 || another.num_nodes == 0) {
        return 0;   // The inner product is zero.
    }

    node* it1 = this->head;
    node* it2 = another.head;

    while(it1 != nullptr) {
        while(it2 != nullptr) {
            if(it1->position == it2->position) {
                total_sum += it1->value + it2->value;
            }
            it2 = it2->next;
        }
        it1 = it1->next;
    }

    return total_sum;
}

int main() {
    Vector v1, v2, v3;
    v1.make_random_vector(30, 8, 10);
    v1.print();
    v2.make_random_vector(30, 6, 10);
    v2.print();
    v3 = v1 + v2;
    v3.print();
    int inner_product = v1 * v2;
    cout << inner_product << endl;
}