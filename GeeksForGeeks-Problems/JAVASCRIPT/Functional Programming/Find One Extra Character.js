// User function Template for javascript

class Solution {
  extraChar(s1, s2) {
    // write your code here
    let mp = new Map();
    for (let i = 0; i < s1.length; i++) {
      mp.set(s1[i], (mp.get(s1[i]) || 0) + 1);
    }
    for (let i = 0; i < s2.length; i++) {
      mp.set(s2[i], (mp.get(s2[i]) || 0) - 1);
    }
    for (let [char, count] of mp) {
      if (count != 0) {
        return char;
      }
    }
  }
}
