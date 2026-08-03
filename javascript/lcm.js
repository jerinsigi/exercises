function smallestCommons(arr) {
  // 1. Identify min and max (handles unsorted input like [5, 1])
  const min = Math.min(arr[0], arr[1]);
  const max = Math.max(arr[0], arr[1]);

  // Helper: Greatest Common Divisor (Euclidean algorithm)
  const gcd = (a, b) => (b === 0 ? a : gcd(b, a % b));

  // Helper: Least Common Multiple
  const lcm = (a, b) => (a * b) / gcd(a, b);

  // 2. Chain LCM across the full range from min to max
  let currentLCM = min;
  for (let i = min + 1; i <= max; i++) {
    currentLCM = lcm(currentLCM, i);
  }

  return currentLCM;
}

console.log(smallestCommons([1, 5])); // Output: 60