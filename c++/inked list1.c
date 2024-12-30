#include<iostream>
using namespace std;
class node
 {
public:
    int data;
    node *next;
};

class linkedlist {
public:
    node *head;
    linkedlist() {
        head = NULL;
    }

    node* createnode(int data);
    void addbegin(int data);
    void deleteend();
    void traverse();
};

node* linkedlist::createnode(int data) {
    node *newnode = new node;
    if (newnode == NULL) {
        return NULL;
    } else {
        newnode->data = data;
        newnode->next = NULL;
    }
    return newnode;
}

void linkedlist::addbegin(int data) {
    node *newnode = createnode(data);
    if (head == NULL) {
        head = newnode;
    } else {
        newnode->next = head;
        head = newnode;
    }
}

void linkedlist::deleteend() {
    if (head == NULL) {
        return;
    } else {
        node *curnode = head;
        node *prev = NULL;
        while (curnode->next != NULL) {
            prev = curnode;
            curnode = curnode->next;
        }
        if (prev != NULL) {
            prev->next = NULL;
        } else {
            head = NULL;
        }
        cout << curnode->data << " deleted" << endl;
        delete curnode;
    }
}

void linkedlist::traverse() {
    if (head == NULL) {
        return;
    } else {
        node *curnode = head;
        while (curnode != NULL) {
            cout << curnode->data << " ";
            curnode = curnode->next;
        }
        cout << endl;
    }
}

int main() {
    linkedlist l;
    int data, ch;
    cout << "1] Add begin\n";
    cout << "2] Delete end\n";
    cout << "3] Traverse \n";
    while (1) {
        cout << "Enter choice: ";
        cin >> ch;
        switch (ch) {
            case 1:
                cout << "\nEnter data: ";
                cin >> data;
                l.addbegin(data);
                break;
            case 2:
                l.deleteend();
                break;
            case 3:
                l.traverse();
                break;
            default:
                cout << "Invalid choice" << endl;
        }
    }
    return 0;
}

