let Power = (n, x) => {
  return !!x ? n * Power(n, x - 1) : 1;
};

const readline = require("readline").createInterface({
  input: process.stdin,
  output: process.stdout,
});

readline.on(`line`, (input) => {
  [n, x] = input.split(" ");
  console.log(Power(Number(n), Number(x)));
  readline.close();
});
