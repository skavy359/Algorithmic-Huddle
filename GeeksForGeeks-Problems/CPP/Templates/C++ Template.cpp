template <class T>
// Class template for finding the minimum element
class minElement
{
    T y;

public:
    minElement() {};
    minElement(T a)
    {
        y = a;
    }
    void check(T x)
    {
        cout << (y < x ? y : x) << endl;
    }
};
