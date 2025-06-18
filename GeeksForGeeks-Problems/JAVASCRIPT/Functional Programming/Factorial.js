// User function Template for javascript

/**
 * @param {number} n
 * @returns {number}
 */

class Solution {
  factorial(n) {
    // code here
    let product = 1;
    while (n > 0) {
      product *= n;
      n -= 1;
    }
    return product;
  }
}
