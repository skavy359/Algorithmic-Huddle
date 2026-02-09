class Solution {
    public void sortColors(int[] nums) {
        int z = 0, o = 0, t = 0;
        for (int i : nums)
            if (i == 0)
                z++;
            else if (i == 1)
                o++;
            else
                t++;
        
        int i = 0;
        while (z>0) {
            nums[i] = 0;
            i++;
            z--;
        }
        while (o>0) {
            nums[i] = 1;
            i++;
            o--;
        }
        while (t>0) {
            nums[i] = 2;
            i++;
            t--;
        }
    }
}

class Solution {
    public void sortColors(int[] nums) {
        int low = 0, mid = 0, high = nums.length - 1;
        while (mid <= high) {
            if (nums[mid] == 0) {
                swap(nums, low, mid);
                low++;
                mid++;
            } else if (nums[mid] == 1) {
                mid++;
            } else {
                swap(nums, mid, high);
                high--;
            }
        }
    }

    private void swap(int[] nums, int i, int j) {
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
    }
}