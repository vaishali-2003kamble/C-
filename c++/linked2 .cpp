#include<iostream>
using namespace std;

class node {
    public:
        int data;
        node *next;
        node()
		 {
            data = 0;
            next = NULL;
        }
};

class linkedlist {
    private:
        node *head;
    public:
        linkedlist()
		{
            head = NULL;
        }
        int addbegin(int data);
        int deleteend();
        void traverseal();
};

int linkedlist::addbegin(int data) {
    node *newnode = new node;
    if (newnode == NULL) {
        return -1; 
    }
    newnode->data = data;
    newnode->next = head;
    head = newnode;
    cout << "Data is inserted successfully: " << data << "\n";
    return 0;
}

int linkedlist::deleteend() {
    if (head == NULL) {
        return -1; 
    }
    node *p = head;
    node *q = NULL;
    if (p->next == NULL) {
        int data = p->data;
        delete p;
        head = NULL;
        cout << "Deleted element is: " << data << "\n";
        return data;
    }
    while (p->next != NULL) {
        q = p;
        p = p->next;
    }
    int data = p->data;
    q->next = NULL;
    delete p;
    cout << "Deleted element is: " << data << "\n";
    return data;
}

void linkedlist::traverseal() {
    if (head == NULL) {
        cout << "List is empty\n";
    } else {
        node *p = head;
        while (p != NULL) {
            cout << p->data << " ";
            p = p->next;
        }
        cout << endl;
    }
}

int main() {
    linkedlist l;
    int data, res, ch;
    cout << "1] Add begin\n";
    cout << "2] Delete end\n";
    cout << "3] Traverse\n";
    while (1) {
        cout << "Enter choice: ";
        cin >> ch;
        switch (ch) {
            case 1:
                cout << "Enter data: ";
                cin >> data;
                l.addbegin(data);
                break;
            case 2:
                res = l.deleteend();
                if (res == -1) {
                    cout << "List is empty\n";
                } else {
                    cout << "Deleted data is " << res << "\n";
                }
                break;
            case 3:
                l.traverseal();
                break;
            default:
                cout << "Invalid choice\n";
        }
    }
}

