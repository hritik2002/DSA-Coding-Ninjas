//  Do it only using recursion

const Multiplication = (m, n) => {
  if (n <= 0) return 0;
  return Multiplication(m, n - 1) + m;
};
console.log(Multiplication(3, 4));
