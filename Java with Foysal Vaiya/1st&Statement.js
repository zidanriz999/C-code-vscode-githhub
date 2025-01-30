//task 1
var age =30;
var age =35;
console.log(age);



let price =45;
console.log(price);

const PI =3.1416;
console.log(PI);

//task 2
let a=parseInt(prompt("Enter the valu of a : "));
let b=parseInt(prompt("Enter the valu of b : "));

console.log("a + b = ",a+b);
console.log("a - b = ",a-b);
console.log("a * b = ",a*b);
console.log("a / b = ",a/b);
console.log("a % b = ",a%b);
console.log("valo of ++a = ",++a);
console.log("valu of a++= ",a++);

console.log("a == b :",a==b);//if a==b then output true .saame like other 
console.log("a != b :", a!=b );
console.log(" a > b :",a>b);

//Task 3
if(a>b){
    console.log("a > b ");
}else if (a<b){
    console.log("b > a ");
}else{
    console.log(" a==b ");
}

console.log("For loop : ")
for(let i=0; i<=10 ; i++){
    console.log(i);
}
console.log("while loop ")
let j=0;
while(j<=10){
    console.log(j);
    j++;
}
console.log("do-while loop ")
let k=0;
do{
    console.log(k);
    k++;
}while(k<=10);


console.log(" a and b operator : ", a&&b);
console.log("a or b operator : ",a||b );
console.log("Not a : ",!a);