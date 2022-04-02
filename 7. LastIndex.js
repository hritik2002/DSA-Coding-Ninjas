let FirstIndex = (arr, x) => {
  if (arr.length === 0) return -1;
  let temp = [...arr];
  temp.splice(0,1);
  let ans = FirstIndex(temp, x);
  if (arr[0] === x) return ans + 1;
  return ans === -1 ? -1 : ans + 1;
};

console.log(FirstIndex([1, 2, 32, 4, 32], 32));