function sumAll(arr){
  let minValue = Math.min(...arr);
  let maxValue = Math.max(...arr);
  // console.log(minValue)
  let value=minValue;

  for(let i=minValue+1;i<=maxValue;i++){
    value+=i;
    console.log(value)

  }
  return value;
}

console.log(sumAll([1, 4]));