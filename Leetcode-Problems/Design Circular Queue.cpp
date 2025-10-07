class MyCircularQueue
{
public:
    vector<int> q;
    int front, rear, size, capacity;
    MyCircularQueue(int k)
    {
        q.resize(k);
        size = 0;
        capacity = k;
        front = 0;
        rear = -1;
    }

    bool enQueue(int value)
    {
        if (size == capacity)
            return false;
        rear = (rear + 1) % capacity;
        q[rear] = value;
        size++;
        return true;
    }

    bool deQueue()
    {
        if (size == 0)
            return false;
        front = (front + 1) % capacity;
        size--;
        return true;
    }

    int Front()
    {
        if (size == 0)
        {
            return -1;
        }
        return q[front];
    }

    int Rear()
    {
        if (size == 0)
            return -1;
        return q[rear];
    }

    bool isEmpty() { return size == 0; }

    bool isFull() { return size == capacity; }
};

// class MyCircularQueue {
// public:
//     list<int> l;
//     int temp = 0;
//     MyCircularQueue(int k) { temp = k; }

//     bool enQueue(int value) {
//         if (l.size() >= temp) {
//             return false;
//         }
//         l.push_back(value);
//         return true;
//     }

//     bool deQueue() {
//         if (l.empty())
//             return false;
//         l.pop_front();
//         return true;
//     }

//     int Front() {
//         if (l.empty())
//             return -1;
//         return l.front();
//     }

//     int Rear() {
//         if (l.empty())
//             return -1;
//         return l.back();
//     }

//     bool isEmpty() { return l.empty(); }

//     bool isFull() { return l.size() == temp; }
// };