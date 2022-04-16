let key = {
    2:"abc",
    3:"def",
    4:"ghi",
    5:"jkl",
    6:"mno",
    7:"pqrs",
    8:"tuv",
    9:"wxyz"
}

let ans = [];
let keypad = (index,n,str,number)=>{
    if(index===n){
        ans = [...ans,str];
        return;
    }
    let num = number.toString()[index];
    for(let i=0 ; i<key[num].length ; i++){
        keypad(index+1,n,str+key[num][i],number);
    }
}

{
    let str = "";
    let number = 234;
    keypad(0,number.toString().length,str,number);
    console.log(ans);
}