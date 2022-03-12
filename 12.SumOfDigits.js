const sumOfDigits = (n)=>{
    if(n<=0)return 0;
    return Math.round(n%10) + Number(sumOfDigits(Math.round(n/10)));
}
let ans = sumOfDigits(23);
console.log(ans);