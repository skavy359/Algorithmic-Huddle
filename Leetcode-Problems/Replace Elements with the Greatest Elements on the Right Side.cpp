class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int largest = -1;
        for (int i = arr.size() - 1; i >= 0; i--) {
            int temp = arr[i];
            arr[i] = largest;
            if (temp > largest) {
                largest = temp;
            }
        }
        return arr;
    }
};
