function largestOfAll(arr){
  let newArray = [];
  for(let i=0;i<arr.length;i++){
    newArray.push(Math.max(...arr[i]));
  }
  return newArray;
}

console.log(largestOfAll([[13, 27, 18, 26], [4, 5, 1, 3], [32, 35, 37, 39], [1000, 1001, 857, 1]]));