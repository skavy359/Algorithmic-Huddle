void utility(int a, int b, int operator_)
{
    if (operator_ == 1)
    {
        cout << a + b;
    }
    else if (operator_ == 2)
    {
        cout << a - b;
    }
    else if (operator_ == 3)
    {
        cout << a * b;
    }
    else
    {
        cout << "Invalid Input";
    }
}