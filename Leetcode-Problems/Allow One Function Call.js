/**
 * @param {Function} fn
 * @return {Function}
 */
var once = function (fn) {
  let ans = 0;
  return function (...args) {
    ans++;
    if (ans > 1) return undefined;
    return fn(...args);
  };
};

/**
 * let fn = (a,b,c) => (a + b + c)
 * let onceFn = once(fn)
 *
 * onceFn(1,2,3); // 6
 * onceFn(2,3,6); // returns undefined without calling fn
 */
