/**
 * @return {null|boolean|number|string|Array|Object}
 */
Array.prototype.last = function () {
  let total = this.length;
  if (total == 0) return -1;
  return this[total - 1];
};

/**
 * const arr = [1, 2, 3];
 * arr.last(); // 3
 */
