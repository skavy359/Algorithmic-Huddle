/**
 * @param {Array} arr
 * @param {number} size
 * @return {Array}
 */
var chunk = function (arr, size) {
  let ans = [];
  for (let j = 0; j < arr.length; j += size) {
    ans.push(arr.slice(j, j + size));
  }
  return ans;
};
