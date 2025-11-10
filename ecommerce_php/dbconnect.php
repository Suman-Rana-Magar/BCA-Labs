<?php
$servername="localhost";
$username="root";
$password="root";
$database="ecommerce";

$conn=mysqli_connect($servername,$username,$password,$database);
if(!$conn)
{
    die ("Error Detected".mysqli_error($_GLOBAL['$conn)']));
}
?>