<?php 
session_start();
session_unset();
header("location: ../admin/product_list.php");
?>