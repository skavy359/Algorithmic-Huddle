// User function Template for javascript

class Solution {
  binaryToDecimal(b) {
    // write your code here
    let j = 0;
    let ans = 0;
    for (let i = b.length - 1; i >= 0; i--) {
      ans += parseInt(b[i]) * Math.pow(2, j);
      j++;
    }
    return ans;
  }
}
