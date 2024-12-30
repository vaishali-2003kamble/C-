#include<iostream>
using namespace std;
template <class t>
class queue {
private:
    int rear, front, size;
    t *arr;

public:
    queue();
    queue(int size1);
    int enqueue(t data);
    t dequeue();
    t peek();
};
template queue<class t>
queue<t>::queue()
 {
    rear = -1;
    front = -1;
    size = 5;
    arr = new t[5];
}
template queue<class t>
 queue<t>::queue(int  size1) 
 {
    rear = -1;
    front = -1;
    size = size1;
    arr = new t[size1];
}
template queue<class t>
int queue<t>::enqueue(t data) 
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
template queue<class t>
 t queue<t>::dequeue() {
    if (front == -1 || front > rear)
	 { 
        return -1;
    }
    int dequedelem = arr[front++];
    if (front > rear) 
	{ 
        front = rear = -1;
    }
    return dequedelem;
}
template queue<class t>
 t queue<t>::peek()
  {
    if (front == -1 || front > rear)
	 { 
        return -1;
    }
    return arr[front];
}

int main() {
    queue <int>q;
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

