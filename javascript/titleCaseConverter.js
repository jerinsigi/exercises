function titleCase(string){
  let splitString = string.toLowerCase().split(" ");
  // console.log(splitString)
  for(let i=0;i<splitString.length;i++){
    splitString[i] = splitString[i].replace(
      splitString[i][0], 
      splitString[i][0].toUpperCase()
    );
  }
  return splitString.join(" ");
}


console.log(titleCase("I'm a little tea pot"));
console.log(titleCase("HERE IS MY HANDLE HERE IS MY SPOUT"));