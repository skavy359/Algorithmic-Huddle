//Back-end complete function Template for javascript

class Solution {
  isPrime(n) {
    for (let i = 2; i < n; i++) {
      if (n % i == 0) {
        return false;
      }
    }

    return true;
  }

  printPrimeFactorization(n) {
    let ans = "";
    for (let i = 2; i <= n; i++) {
      if (this.isPrime(i)) {
        let x = i;
        while (n % x == 0) {
          if (ans.length > 0) ans += " ";
          ans += i.toString();
          x *= i;
        }
      }
    }
    console.log(ans);
  }
}
