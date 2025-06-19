void find_area(int side, int le, int wd)
{
    area ar;
    ar.sd = side;
    ar.len = le;
    ar.wid = wd;
    cout << ar.sd * ar.sd << " " << ar.len * ar.wid;
}