class Solution {
    public int removeElement(int[] nums, int val) {
        int i = 0, j = nums.length - 1;
        while (j >= 0 && nums[j] == val) {
            j--;
        }
        while (i <= j) {
            if (nums[i] == val) {
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
                j--;
                continue;
            }
            i++;
        }
        return i;
    }
}

class Solution {
    public int removeElement(int[] nums, int val) {
        int k = 0;
        for (int i = 0; i < nums.length; i++) {
            if (nums[i] != val) {
                nums[k++] = nums[i];
            }
        }
        return k;
    }
}