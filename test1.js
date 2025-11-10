let num1=prompt("Enter the first number: ");
let num2=prompt("Enter the secont number: ");
let num1Last=num1%10;
let num2Last=num2%10;
if(num1Last===2&&num2Last===2)
    alert("Both numbers ends with 2");
else
    alert("Either of the number do not ends with 2");