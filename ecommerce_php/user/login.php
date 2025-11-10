<?php

session_start();
?>

<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=<device-width>, initial-scale=1.0">
    <title>Login</title>
    <link rel="stylesheet" href="https://cdn.jsdelivr.net/npm/bootstrap@4.6.1/dist/css/bootstrap.min.css">
    <script src="https://cdn.jsdelivr.net/npm/jquery@3.6.0/dist/jquery.slim.min.js"></script>
    <script src="https://cdn.jsdelivr.net/npm/popper.js@1.16.1/dist/umd/popper.min.js"></script>
    <script src="https://cdn.jsdelivr.net/npm/bootstrap@4.6.1/dist/js/bootstrap.bundle.min.js"></script>
    <link rel="stylesheet" href="Reg_Form.html">
</head>
<style>
    .bg-img {
        background-image: url(images/img_nature.jpg);
        background-position: center;
        background-repeat: no-repeat;
        background-attachment: fixed;
        background-size: cover;
        opacity: 10;
    }
    
    .pad {
        padding-top: 12%;
    }
    
    .forget {
        text-decoration: none;
        outline: none;
        color: aliceblue;
    }
    
    .btn:hover {
        opacity: 20;
    }
    
    .rounded-circle {
        background-position: center;
    }
</style>

<body class="bg-img">
    <section>
        <div class="container-fluid text-white pad">
            <div class="row">
                <div class="col-lg-4">

                </div>
                <div class="col-lg-4 bg-secondary ">
                    <form action="code_login.php" method="post">
                        <h2 class="text-center text-white mt-4">User Login</h2>
                        <img src="../images/img_avatar.png" class="rounded-circle" height="50px" width="50px"><br>
                        <label class="font-weight-normal text-white"><u>EMAIL or PHONE:</u></label>
                        <input type="text" name="email" class="form-control" placeholder="Enter your Email or Phone" required>

                        <label class="font-weight-normal text-white mt-3"><u>PASSWORD:</u></label>
                        <input type="password" name="password" class="form-control" placeholder="Enter your Password" required>

                        <a href=""></a><input type="submit" name="submit" class="btn btn-primary ml-3 mt-3 mb-4" value="LOG IN">
                        <a href="#" class="forget mx-3">Forget Password?</a>
                        <a href="signup.php"><input type="button" class="btn btn-success mt-3 mb-4 font-italic" value="Register Now"></a>
                    </form>

                </div>
                <div class="col-lg-4">

                </div>

            </div>
        </div>
    </section>
</body>

</html>