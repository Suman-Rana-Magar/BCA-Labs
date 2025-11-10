<?php
include "../dbconnect.php";
$id = $_GET['updateid'];
$sql = "SELECT * FROM tbl_user WHERE id='$id'";
$result = mysqli_query($conn, $sql);
$row = mysqli_fetch_assoc($result);
$name = $row['user_name'];
$profile = $row['u_profile'];
$email = $row['email'];
$phone = $row['phone'];

if (isset($_POST["update"])) {
    $name = $_POST["name"];
    $profile = $_POST["profile"];
    $email = $_POST["email"];
    $phone = $_POST["phone"];

    $update = "UPDATE tbl_user SET user_name='$name', u_profile='$profile', email='$email', phone='$phone' WHERE id=$id";

    $conect = mysqli_query($conn, $update);
    if ($conect) {
        echo "<script>alert('Profile Updated successfully !')</script>";
        echo "<script>window.open('profile.php','_self')</script>";
    } else {
        echo "<script>alert('Error Occured while Updating !')</script>";
        echo "<script>window.open('profile.php','_self')</script>";
    }
}
?>


<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Edit Profile</title>
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
                                <h1 class="text-center"> Edit Profile</h1>
                                <div class="form-outline mb-4">
                                    <h5>User Name</h5>
                                    <input type="text" class="form-control" value="<?php echo $name ?>" name="name">
                                </div>

                                <div class="form-outline mb-4">
                                    <h5>Profile Picture</h5>
                                    <input type="file" value="<?php echo $profile ?>" name="profile">
                                </div>

                                <div class="form-outline mb-4">
                                    <h5>Email</h5>
                                    <input type="text" name="email" class="form-control" value="<?php echo $email ?>">
                                </div>

                                <div class="form-outline mb-4">
                                    <h5>Phone</h5>
                                    <input type="text" class="form-control" value="<?php echo $phone ?>" name="phone">
                                </div>

                                <div class="form-outline mb-4">
                                    <button type="submit" name="update" id="btnupdate" class="btn btn-success btn-block btn-lg gradient-custom-4 text-body">Update Profile</button>
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