<?php
// local variable
function local_var()
{
    $num = 45;
    return "local variable declared inside the funciton is " . $num;
}
// local_var();

// global variable by global keyword
$name = "suman rana";
function global_var()
{
    global $name;
    return "Variable inside the function:" . $name . "\n";
}
// global_var();
// echo "Variable outside the function:" . $name;

// global variable by $GLOBALS keyword
$num1 = 4;
$num2 = 34;
function global_var1()
{
    $sum = $GLOBALS['num1'] + $GLOBALS['num2'];
    return "sum of global variable is: " . $sum;
}
// global_var1();


// static variable
function static_var()
{
    static $count = 0;
    $count++;
    return "count is: " . $count;
}

// constant
define("MESSAGE", "This is a constant");


function function_constant(){
    return __FUNCTION__;
}