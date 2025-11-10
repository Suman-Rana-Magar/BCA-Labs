<?php
include "../dbconnect.php";
if(isset($_POST["insert"]))
{
    $p_title=$_POST["p_title"];
    $p_description=$_POST["p_description"];
    $p_fdescription=$_POST["p_fdescription"];
    $p_keywords=$_POST["p_keywords"];
    $p_category=$_POST["p_category"];
    $p_image=$_POST["p_image"];
    $p_price=$_POST["p_price"];

    $insert= "INSERT INTO product (p_title, p_description, p_fdescription, p_keywords, p_category, p_image, p_price) VALUES ('$p_title','$p_description','$p_fdescription','$p_keywords','$p_category','$p_image','$p_price')";

    $conect = mysqli_query($conn,$insert);
    if($conect)
    {
        echo "<script>alert('Product inserted successfully !')</script>";
        echo "<script>window.open('product_insert.php','_self')</script>";
    }
    else
    {
        echo "<script>alert('Error Occured while Inserting !')</script>";
        echo "<script>window.open('product_insert.php','_self')</script>";
    }
}
?>