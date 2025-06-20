// User function Template for C++
class test : public student
{
public:
    float marks[5];

    void set_marks(float arr[])
    {
        for (int i = 0; i < 5; i++)
            marks[i] = arr[i];
    }
};

class result : public test
{
public:
    int total = 0;
    int avg;
    void display()
    {

        for (int i = 0; i < 5; i++)
            total += marks[i];

        avg = total / 5;

        cout << roll_number << " " << total << " " << avg << endl;
    }
};
