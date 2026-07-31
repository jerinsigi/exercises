function generatePassword(passwordLength){
  let characters = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*()".split("");
  // console.log(characters);
  let generatedPassword=[];
  for(let i=0;i<passwordLength;i++){
    let math = Math.round(Math.random()*((characters.length)-1));
    generatedPassword.push(characters[math]);

  }
  return generatedPassword.join("");
}

let password=generatePassword(8);
console.log(`Generated password: ${password}`)