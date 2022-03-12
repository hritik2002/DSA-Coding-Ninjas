let str = "haha"
const Pallindrome = (start,end)=>{
    if(start>=end)return true;
    let ans = Pallindrome(start+1,end-1);
    return ans?true:false;
}
console.log(Pallindrome(0,str.length-1))