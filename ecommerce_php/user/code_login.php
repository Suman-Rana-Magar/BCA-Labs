<?php
session_start();
include "../dbconnect.php";
if(isset($_POST["submit"]))
{
    $email=$_POST["email"];
    $password=$_POST["password"];

    $check_email= "SELECT * FROM tbl_user WHERE email='$email' AND password='$password'";
    $check_phone= "SELECT * FROM tbl_user WHERE phone='$email' AND password='$password'";
    $query1=mysqli_query($conn,$check_email);
    $query2=mysqli_query($conn,$check_phone);
    $count1=mysqli_num_rows($query1);
    $count2=mysqli_num_rows($query2);
    if(($count1>0) || ($count2>0))
    {
        $_SESSION['email']=$email;
        echo "<script>alert('Login Successful !')</script>";
        header("location: ../admin/product_list.php");
    }   
    else
    {
        echo "<script>alert('Incorrect email/phone or Password !')</script>";
        echo "<script>window.open('login.php','_SELF')</script>";
    }
}
?>