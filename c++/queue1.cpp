#include<iostream>
using namespace std;

class queue {
private:
    int rear, front, size;
    int *arr;

public:
    queue();
    queue(int s);
    int enqueue(int data);
    int dequeue();
    int peek();
};

queue::queue() {
    rear = -1;
    front = -1;
    size = 5;
    arr = new int[5];
}

queue::queue(int size1) {
    rear = -1;
    front = -1;
    size = size1;
    arr = new int[size1];
}

int queue::enqueue(int data) 
{
    if (rear == size - 1) 
	{ 
        return 0;
    }
    if (front == -1)
	 { 
        front = 0;
    }
    arr[++rear] = data; 
    return 1; 
}

int queue::dequeue() {
    if (front == -1 || front > rear)
	 { 
        return 1;
    }
    int dequedelem = arr[front++];
    if (front > rear) 
	{ 
        front = rear = -1;
    }
    return dequedelem;
}

int queue::peek() {
    if (front == -1 || front > rear)
	 { 
        return -1;
    }
    return arr[front];
}

int main() {
    queue q;
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
                if (res == 1) {
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

