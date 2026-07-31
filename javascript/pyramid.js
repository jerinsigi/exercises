function pyramid(char, rows, inverted) {
  const lines = [];

  for (let i = 0; i < rows; i++) {
    const spaceCount = rows - i - 1;
    const charCount = 2 * i + 1;
    
    const rowString = " ".repeat(spaceCount) + char.repeat(charCount);
    
    lines.push(rowString);
  }

  if (inverted) {
    lines.reverse();
  }

  return "\n" + lines.join("\n") + "\n";
}

// Example usage:
console.log(pyramid("o", 4, false));
/* Output:
   o
  ooo
 ooooo
ooooooo
*/

console.log(pyramid("o", 4, true));
/* Output:
ooooooo
 ooooo
  ooo
   o
*/