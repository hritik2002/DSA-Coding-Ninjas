function removeConsecutiveDuplicates(str){
    if(str.length<=1)return ;
    str = str.split("")
    for(let i=0 ; i<str.length ; i++){
      if(str[i]==str[i+1]){
        for(let j=i+1 ; j<str.length ; j++){
            str[j] = str[j+1];
            
        }
    }
    }
    return str.join("").trim();
    
}
let str = "aabbaa"
console.log(removeConsecutiveDuplicates(str))
