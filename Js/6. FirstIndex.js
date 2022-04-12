let FirstIndex = (arr, x) => {
  if (arr.length === 0) return -1;
  if (arr[0] === x) return 0;
  arr.splice(0, 1);
  let ans = FirstIndex(arr, x);
  return ans === -1 ? -1 : ans + 1;
};

console.log(FirstIndex([1, 2, 32, 4, 5], 32));
