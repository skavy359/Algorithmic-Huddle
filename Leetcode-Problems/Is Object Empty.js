/**
 * @param {Object|Array} obj
 * @return {boolean}
 */
var isEmpty = function (obj) {
  let total = Object.keys(obj).length;
  if (total == 0) return true;
  else return false;
};
