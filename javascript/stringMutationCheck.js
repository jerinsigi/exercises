function mutation(arr){
  const firstString = arr[0].toLowerCase().split("");
  const secondString = arr[1].toLowerCase().split("");
  let flag=true;
  for(let i=0;i<=1;i++){
    for(let j=0;j<secondString.length;j++){
      if(firstString.includes(secondString[j])){
        continue;
      }else{
        return false;
      }
    }
  }
  return flag;

}

console.log(mutation(["Alien", "line"]));//true
console.log("*".repeat(20))
console.log(mutation(["hello", "hey"]));//false
