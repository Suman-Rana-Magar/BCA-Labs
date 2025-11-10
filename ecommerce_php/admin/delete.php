<?php
include "../dbconnect.php";
if (isset($_GET['deleteid'])) 
{
    $id = $_GET['deleteid'];
    $sql = "DELETE FROM product WHERE p_id='$id'";
    $result = mysqli_query($conn, $sql);
    if ($result) {
        echo "<script>alert('Record Deleted Successfully !')</script>";
        echo "<script>window.open('product_manage.php','_self')</script>";
    }
} 
else 
{
    echo "<script>window.open('product_manage.php','_self')</script>";
}
?>
