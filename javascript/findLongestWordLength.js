function findLongestWordLength(string){
  let count = 0;
  let word = string.split(" ");
  let wordLength=0;
  let longestWord;
  for(let i=0;i<word.length;i++){
    if(word[i].length>wordLength){
      wordLength=word[i].length;
      longestWord=word[i];
    }
  }
  return wordLength;
}

console.log(findLongestWordLength("The quick brown fox jumped over the lazy dog"));//6