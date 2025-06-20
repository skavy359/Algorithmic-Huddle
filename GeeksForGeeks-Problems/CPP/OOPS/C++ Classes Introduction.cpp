// CollegeCourse Class
class CollegeCourse
{
    // your code here
    string cid;
    char g;
    int cr;
    int gp;
    float hp;

public:
    void set_CourseId(string cid)
    {
        this->cid = cid;
    }

    void set_Grade(char g)
    {
        this->g = g;
    }

    void set_Credit(int cr)
    {
        this->cr = cr;
    }

    int calculateGradePoints(char g)
    {
        g = toupper(g);
        switch (g)
        {
        case 'A':
            gp = 10;
            break;
        case 'B':
            gp = 9;
            break;
        case 'C':
            gp = 8;
            break;
        case 'D':
            gp = 7;
            break;
        case 'E':
            gp = 6;
            break;
        case 'F':
            gp = 5;
            break;
        default:
            gp = 0;
            break;
        }
        return gp;
    }

    float calculateHonorPoints(int gp, int cr)
    {
        hp = gp * cr;
        return hp;
    }

    void display()
    {
        cout << gp << " " << hp << endl;
    }
};