function whatIsInAName(arrObject, sourceObject) {
  // 1. Get an array of all keys in sourceObject
  const sourceKeys = Object.keys(sourceObject);

  // 2. Filter arrObject to keep items where every source key matches
  return arrObject.filter((obj) => {
    return sourceKeys.every(
      (key) => obj.hasOwnProperty(key) && obj[key] === sourceObject[key]
    );
  });
}

console.log(
  whatIsInAName(
    [
      { first: "Romeo", last: "Montague" },
      { first: "Mercutio", last: null },
      { first: "Tybalt", last: "Capulet" },
    ],
    { last: "Capulet" }
  )
);
// Output: [{ first: "Tybalt", last: "Capulet" }]