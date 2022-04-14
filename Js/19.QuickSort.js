let arr = [4,2,1,5,6,3];

function partition(start,end){
  let pivot = arr[start];
  let count = 0 ;
  for(let i=start+1 ; i<end ; i++){
    if(arr[i]<pivot)count++;
  }
  let pivotI = start + count ;
  arr[start] = arr[pivotI];
  arr[pivotI] = pivot ;
  let i = start , j = end-1;
  while(i<pivotI && j>pivotI){
    while(arr[i]<=pivot)i++;
    while(arr[j]>=pivot)j--;
    if(i<pivotI && j>pivotI)
    [arr[i],arr[j]] = [arr[j],arr[i]];
  }
  return pivotI;
}

function QuickSort(start,end){
  if(start>=end)return;
  let mid = partition(start,end);
  
  QuickSort(start,mid);
  QuickSort(mid+1,end);
  
}
QuickSort(0,arr.length);
console.log(arr,"arr")