let SumOfArray = (arr)=>{
    return arr.reduce((a,b)=>Number(a)+Number(b),0)
}

const readline = require("readline").createInterface({
    input: process.stdin,
    output: process.stdout,
  });
  
  readline.on(`line`, (input) => {
    console.log(SumOfArray([...input.split(" ")]))
    readline.close();
  });
  