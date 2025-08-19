/**
 * @param {integer} init
 * @return { increment: Function, decrement: Function, reset: Function }
 */
var createCounter = function (init) {
  let curr = init;
  function increment() {
    curr++;
    return curr;
  }
  function decrement() {
    curr--;
    return curr;
  }
  function reset() {
    curr = init;
    return curr;
  }
  return { increment, decrement, reset };
};

/**
 * const counter = createCounter(5)
 * counter.increment(); // 6
 * counter.reset(); // 5
 * counter.decrement(); // 4
 */
