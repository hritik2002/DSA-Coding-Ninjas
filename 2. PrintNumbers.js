let PrintNumbers = (arr) => {
  if (!arr.length) return;
  console.log(arr[0]);
  arr.splice(0, 1);
  PrintNumbers(arr);
};

const readline = require("readline").createInterface({
  input: process.stdin,
  output: process.stdout,
});

readline.on(`line`, (input) => {
  PrintNumbers([...input.split(" ")]);
  readline.close();
});
