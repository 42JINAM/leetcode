/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var map = function(arr, fn) {
  let mappedValues = [];

  for (let i = 0; i < arr.length; i++){
    mappedValues.push(fn(arr[i], i));
  }
  return (mappedValues);
};