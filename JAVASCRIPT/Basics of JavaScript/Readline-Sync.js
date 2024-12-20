const readlineSync= require('readline-sync');

const userName= readlineSync.question('May i know your name? ');
console.log(`Welcome ${userName}`);

const userAge= readlineSync.question('Your age is? ');

const AgeNumber= Number(userAge);

if(!isNaN(AgeNumber)){
    const currentYear= new Date().getFullYear();
    const finalAge= currentYear-AgeNumber;
    console.log(`Your age is ${finalAge}`);
}
else{
    console.log("error");
}
