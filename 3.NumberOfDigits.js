const NumberOfDigits = (num) => {
  return Number(num) && Number(num).toString().split("").length;
};

const readline = require("readline").createInterface({
  input: process.stdin,
  output: process.stdout,
});

readline.on(`line`, (input) => {
  console.log(NumberOfDigits(input));
  readline.close();
});
