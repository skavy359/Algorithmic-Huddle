class Solution {
  alphabets(c1, c2) {
    for (let i = c1.charCodeAt(0); i <= c2.charCodeAt(0); i++) {
      process.stdout.write(String.fromCharCode(i) + " ");
    }
  }
}
