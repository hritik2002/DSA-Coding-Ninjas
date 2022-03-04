let result = []
const AllIndexes = (arr,n,x)=>{
    if(n<=0)return ;
    AllIndexes(arr,n-1,x);
    if(arr[n-1]===x){
        result.push(n-1);
    }
}
AllIndexes([1,2,1,2],4,1);
console.log(result)
// Input 
// 1 2 1 2 
// 4 1

// Output
// [0,2]