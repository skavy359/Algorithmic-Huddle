class Solution
{
public:
    bool isOneBitCharacter(vector<int> &bits)
    {
        // bool check=false;
        // for(int i=0;i<bits.size()-1;i++){
        //     if(check){
        //         check=false;
        //     }
        //     else if(bits[i]==1){
        //         check=true;
        //     }
        // }
        // return (!check && bits[bits.size()-1]==0);

        int i = 0, n = bits.size();
        while (i < n - 1)
        {
            if (bits[i] == 1)
                i += 2;
            else
                i += 1;
        }
        return i == n - 1;
    }
};