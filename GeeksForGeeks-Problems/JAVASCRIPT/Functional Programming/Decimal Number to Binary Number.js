// User function Template for javascript

class Solution {
  toBinary(n) {
    // write your code here
    let ans = "";
    if (n == 0) return "0";
    while (n > 0) {
      let rem = n % 2;
      ans += rem;
      n = Math.floor(n / 2);
    }
    return ans.split("").reverse().join("");
  }
}
