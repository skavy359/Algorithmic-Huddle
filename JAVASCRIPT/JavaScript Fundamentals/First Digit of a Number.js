class Solution {
    firstDigit(num) {
        while(num >= 10) {
            num /= 10;
            num = Math.floor(num);
        }
        
        return num;
    }
}