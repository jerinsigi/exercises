function fearNotLetter(range) {
  for (let i = 0; i < range.length - 1; i++) {
    let currentCode = range.charCodeAt(i);
    let nextCode = range.charCodeAt(i + 1);
    
    if (nextCode !== currentCode + 1) {
      return String.fromCharCode(currentCode + 1); // Found the missing letter!
    }
  }

  return undefined; // No letters were missing
}

console.log(fearNotLetter("abce")); // Output: "d"
console.log(fearNotLetter("abcdefghijklmnopqrstuvwxyz")); // Output: undefined