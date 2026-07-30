function chunkArrayInGroups(arr, number){
  let subArray = Math.floor(arr.length/number);
  if(arr.length%number!==0){
    subArray++;
  }
  let newArray = [];
  for(let i =0;i<=subArray;i++){
    if(arr.length>number){
      newArray.push(arr.splice(0,number));
    }else{
      newArray.push(arr);
      break;
    }
  }
  return newArray
}

console.log(chunkArrayInGroups([0, 1, 2, 3, 4, 5, 6, 7, 8], 4));
console.log(chunkArrayInGroups([0, 1, 2, 3, 4, 5, 6], 3));