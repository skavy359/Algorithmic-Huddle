struct NODE
{
    double data;
    union
    {
        double *left;
        double *right;
    };
};