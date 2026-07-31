function bouncer(arr) {
  let newArray = [];
  
  for (let arg of arr) {
    if (arg) { 
      newArray.push(arg);
    }
  }
  
  return newArray;
}

console.log(bouncer([7, "ate", "", false, 9])); 
