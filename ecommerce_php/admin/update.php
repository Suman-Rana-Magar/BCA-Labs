<?php
include "../dbconnect.php";
$id = $_GET['updateid'];
$sql = "SELECT * FROM product WHERE p_id='$id'";
$result = mysqli_query($conn, $sql);
$row = mysqli_fetch_assoc($result);
$title = $row['p_title'];
$description = $row['p_description'];
$fdescription = $row['p_fdescription'];
$keywords = $row['p_keywords'];
$image = $row['p_image'];
$price = $row['p_price'];

if (isset($_POST["update"])) {
    $p_title = $_POST["p_title"];
    $p_description = $_POST["p_description"];
    $p_fdescription = $_POST["p_fdescription"];
    $p_keywords = $_POST["p_keywords"];
    $p_image = $_POST["p_image"];
    $p_price = $_POST["p_price"];

    $update = "UPDATE product SET p_title='$p_title', p_description='$p_description', p_fdescription='$p_fdescription', p_keywords='$p_keywords', p_image='$p_image', p_price='$p_price' WHERE p_id=$id";

    $conect = mysqli_query($conn, $update);
    if ($conect) {
        echo "<script>alert('Product Updated successfully !')</script>";
        echo "<script>window.open('product_manage.php','_self')</script>";
    } else {
        echo "<script>alert('Error Occured while Updating !')</script>";
        echo "<script>window.open('product_insert.php','_self')</script>";
    }
}
?>


<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Insert Product</title>
    <link rel="stylesheet" href="https://cdn.jsdelivr.net/npm/bootstrap@4.6.1/dist/css/bootstrap.min.css">
    <script src="https://cdn.jsdelivr.net/npm/jquery@3.6.0/dist/jquery.slim.min.js"></script>
    <script src="https://cdn.jsdelivr.net/npm/popper.js@1.16.1/dist/umd/popper.min.js"></script>
    <script src="https://cdn.jsdelivr.net/npm/bootstrap@4.6.1/dist/js/bootstrap.bundle.min.js"></script>
</head>
<style>
    .bg-img {
        background-color: darkgray;
    }

    .btn {
        background: linear-gradient(to right, rgba(132, 250, 176, 1), rgba(143, 211, 244, 1))
    }

    .a:hover {
        background-color: aqua;
    }

    .login {
        text-decoration: none;
    }

    .login:hover {
        text-decoration: underline;
    }

    #btnupdate:hover {
        font-weight: bold;
    }
</style>

<body>
    <section class="vh100 bg-img">
        <div class="container h-100">
            <div class="row h-100 justify-content-center align-content-center">
                <div class="col-12 col-md-9 col-lg-7 col-xl-6">
                    <div class="card h-100" style="border-radius: 20px;">
                        <div class="card-body p-3">
                            <form method="post" class="justify-content-center align-content-center">
                                <h1 class="text-center"> Update Product</h1>
                                <div class="form-outline mb-4">
                                    <h5>Product Title</h5>
                                    <input type="text" class="form-control" value="<?php echo $title ?>" name="p_title">
                                </div>

                                <div class="form-outline mb-4">
                                    <h5>Product Basic Description</h5>
                                    <input type="text" class="form-control" value="<?php echo $description ?>" name="p_description">
                                </div>

                                <div class="form-outline mb-4">
                                    <h5>Product Full Description</h5>
                                    <input type="text" name="p_fdescription" class="form-control" value="<?php echo $fdescription ?>">
                                </div>

                                <div class="form-outline mb-4">
                                    <h5>Product Keywords</h5>
                                    <input type="text" class="form-control" value="<?php echo $keywords ?>" name="p_keywords">
                                </div>

                                <div class="form-outline mb-4">
                                    <h5>Product Image</h5>
                                    <input type="file" value="<?php echo $image ?>" name="p_image">
                                </div>

                                <div class="form-outline mb-4">
                                    <h5>Product Price</h5>
                                    <input type="text" value="<?php echo $price ?>" class="form-control" name="p_price">
                                </div>

                                <div class="form-outline mb-4">
                                    <button type="submit" name="update" id="btnupdate" class="btn btn-success btn-block btn-lg gradient-custom-4 text-body">Update Product</button>
                                </div>
                        </div>
                        </form>
                    </div>
                </div>
            </div>
        </div>
    </section>
</body>
</html>