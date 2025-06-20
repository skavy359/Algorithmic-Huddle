class Cuboid
{
    // Add your code here.
public:
    int l, w, h;
    void display()
    {
        cout << l << " " << w << " " << h << endl;
    }
};

class CuboidVol : public Cuboid
{
    // Add your code here.
public:
    void read_input(int l, int w, int h)
    {
        this->l = l;
        this->w = w;
        this->h = h;
    }

    void display()
    {
        cout << l * w * h << endl;
    }
};