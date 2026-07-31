function uniteUnique(...args) {
  let newArray = [];

  for (const arr of args) {
    for (const val of arr) {
      if (!newArray.includes(val)) {
        newArray.push(val);
      }
    }
  }

  return newArray;
}

console.log(uniteUnique([1, 3, 2], [5, 2, 1, 4], [2, 1]));
// Output: [1, 3, 2, 5, 4]