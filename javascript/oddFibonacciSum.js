function sumFibs(number){
  let current =0;
  let next = 1;
  let sum = 0;

  while(current<=number){
    if(current%2!==0){
      sum = sum+current;
      }
      const temp = current+next;
      current = next;
      next= temp;
    }
  
  return sum

}

console.log(sumFibs(1000));