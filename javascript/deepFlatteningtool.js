function steamrollArray(arr) {
  return arr.reduce((acc, item) => {
    return acc.concat(Array.isArray(item) ? steamrollArray(item) : item);
  }, []);
}