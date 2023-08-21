/* INSTRUCTIONS
 * Implement the function unique_in_order which takes as argument a sequence and returns a list of items without any elements with the same value next to each other and preserving the original order of elements.
 * For example:
 *
 * uniqueInOrder('AAAABBBCCDAABBB') == ['A', 'B', 'C', 'D', 'A', 'B']
 * uniqueInOrder('ABBCcAD')         == ['A', 'B', 'C', 'c', 'A', 'D']
 * uniqueInOrder([1,2,2,3,3])       == [1,2,3] */

var uniqueInOrder = function(iterable) {
  if (!Array.isArray(iterable)) {
    iterable = iterable.split(''); // Convert the string to an array of characters
  }

  var result = []; // where push all the data
  var prevElement = null; // to compare if the element is unique

  for (var i = 0; i < iterable.length; i++) {
    if (iterable[i] !== prevElement) { // is this element equal to the previous? If not, push to result array
      result.push(iterable[i]);
      prevElement = iterable[i];
    }
  }

  return result;
