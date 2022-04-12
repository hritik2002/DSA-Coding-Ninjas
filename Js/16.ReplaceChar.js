function replaceCharacter(str , c1 , c2){
    return str.split("").map(val=>val===c1?c2:val).join("")
}
console.log(replaceCharacter("ababa",'a','x'))