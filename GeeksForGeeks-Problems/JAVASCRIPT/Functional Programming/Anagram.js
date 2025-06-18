/**
 * @param {string} a
 * @param {string} b
 * @returns {boolean}
 */
class Solution {
  areAnagrams(s1, s2) {
    // code here
    let temp1 = s1.split("").sort().join("");
    let temp2 = s2.split("").sort().join("");
    if (temp1 === temp2) {
      return true;
    }
    return false;
  }
}
