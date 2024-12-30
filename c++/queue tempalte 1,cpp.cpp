#include<iostream>
using namespace std;

template <class t>
class queue {
private:
    int rear, front, size;
    t *arr; // Use template type t for the array

public:
    queue();
    queue(int s);
    int enqueue(t data);
    t dequeue();
    t peek();
};

template <class t>
queue<t>::queue() {
    rear = -1;
    front = -1;
    size = 5;
    arr = new t[5]; // Use template type t for the array
}

template <class t>
queue<t>::queue(int size1) 
{
    rear = -1;
    front = -1;
    size = size1;
    arr = new t[size1]; // Use template type t for the array
}

template <class t>
int queue<t>::enqueue(t data) {
    if (rear == size - 1) { // Check if the queue is full
        return 0;
    }
    if (front == -1) { // If inserting the first element
        front = 0;
    }
    arr[++rear] = data; // Increment rear and insert the data
    return 1; // Indicate success
}

template <class t>
t queue<t>::dequeue() {
    if (front == -1 || front > rear) { // Check if the queue is empty
        return -1; // Return -1 to indicate an empty queue
    }
    t dequedelem = arr[front++];
    if (front > rear) { // Reset the queue when it becomes empty after dequeue
        front = rear = -1;
    }
    return dequedelem;
}

template <class t>
t queue<t>::peek() {
    if (front == -1 || front > rear) { // Check if the queue is empty
        return -1; // Return -1 to indicate an empty queue
    }
    return arr[front];
}

int main() {
    queue<int> q; // Create a queue of integers
    int ch, data, res;
    cout << "1] Enqueue\n";
    cout << "2] Dequeue\n";
    cout << "3] Peek\n";
    cout << "4] Exit\n";

    while (true) {
        cout << "\nEnter your choice: ";
        cin >> ch;
        switch (ch) {
            case 1:
                cout << "Enter your data: ";
                cin >> data;
                res = q.enqueue(data);
                if (res == 0) {
                    cout << "Queue is full\n";
                } else {
                    cout << "Data is inserted successfully: " << data << endl;
                }
                break;
            case 2:
                res = q.dequeue();
                if (res == -1) {
                    cout << "Queue is empty\n";
                } else {
                    cout << "Data is removed successfully: " << res << endl;
                }
                break;
            case 3:
                res = q.peek();
                if (res == -1) {
                    cout << "Queue is empty\n";
                } else {
                    cout << "Top data: " << res << endl;
                }
                break;
            case 4:
                cout << "Exiting...\n";
                return 0;
            default:
                cout << "Invalid choice\n";
                break;
        }
    }
}

