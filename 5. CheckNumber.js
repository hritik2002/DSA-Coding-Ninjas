// Check if a number is present or not in the given array using recursion

let checkNumber = (arr, x) => {
  if (arr.length <= 0) return false;
  if (arr[0] === x) return true;
  arr.splice(0, 1);
  return checkNumber(arr, x);
};
let arr = [1, 2, 3, 4, 5, 6],
  x = 1;
console.log(checkNumber(arr, x));
