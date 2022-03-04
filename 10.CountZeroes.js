// Implementing using recursion

const CountZeroes = (n) => {
  if (n <= 9) return 0;
  let ans = CountZeroes(Math.round(n / 10));
  if (n % 10 === 0) return ans + 1;
  return ans;
};
console.log(CountZeroes(102020020));
