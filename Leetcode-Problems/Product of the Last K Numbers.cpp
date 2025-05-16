class ProductOfNumbers {
    public:
        vector<int> arr;
        ProductOfNumbers() { arr.push_back(1); }
    
        void add(int num) {
            if (num == 0)
                arr = {1};
            else
                arr.push_back(arr.back() * num);
        }
    
        int getProduct(int k) {
            if (k >= arr.size())
                return 0;
            else
                return arr.back() / arr[arr.size() - 1 - k];
        }
    };
    
    /**
     * Your ProductOfNumbers object will be instantiated and called as such:
     * ProductOfNumbers* obj = new ProductOfNumbers();
     * obj->add(num);
     * int param_2 = obj->getProduct(k);
     */