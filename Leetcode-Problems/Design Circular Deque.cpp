class MyCircularDeque
{
public:
    vector<int> q;
    int front, rear, size, capacity;
    MyCircularDeque(int k)
    {
        q.resize(k);
        front = 0;
        rear = -1;
        size = 0;
        capacity = k;
    }

    bool insertFront(int value)
    {
        if (size == capacity)
            return false;
        front = (front - 1 + capacity) % capacity;
        q[front] = value;
        size++;
        if (size == 1)
            rear = front;
        return true;
    }

    bool insertLast(int value)
    {
        if (size == capacity)
            return false;
        rear = (rear + 1) % capacity;
        q[rear] = value;
        size++;
        if (size == 1)
            front = rear;
        return true;
    }

    bool deleteFront()
    {
        if (size == 0)
            return false;
        front = (front + 1) % capacity;
        size--;
        return true;
    }

    bool deleteLast()
    {
        if (size == 0)
            return false;
        rear = (rear - 1 + capacity) % capacity;
        size--;
        return true;
    }

    int getFront()
    {
        if (size == 0)
            return -1;
        return q[front];
    }

    int getRear()
    {
        if (size == 0)
            return -1;
        return q[rear];
    }

    bool isEmpty() { return size == 0; }

    bool isFull() { return size == capacity; }
};

// class MyCircularDeque {
// public:
//     list<int>l;
//     int temp=0;
//     MyCircularDeque(int k) {
//         temp=k;
//     }

//     bool insertFront(int value) {
//         if(l.size()>=temp){
//             return false;
//         }
//         l.push_front(value);
//         return true;
//     }

//     bool insertLast(int value) {
//         if(l.size()>=temp){
//             return false;
//         }
//         l.push_back(value);
//         return true;
//     }

//     bool deleteFront() {
//         if(l.empty()) return false;
//         l.pop_front();
//         return true;
//     }

//     bool deleteLast() {
//         if(l.empty()) return false;
//         l.pop_back();
//         return true;
//     }

//     int getFront() {
//         if(l.empty()) return -1;
//         return l.front();
//     }

//     int getRear() {
//         if(l.empty()) return -1;
//         return l.back();
//     }

//     bool isEmpty() {
//         return l.empty();
//     }

//     bool isFull() {
//         return l.size()==temp;
//     }
// };