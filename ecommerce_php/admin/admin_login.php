<?php
session_start();
?>

<!DOCTYPE html>
<html>

<head>
    <title>Admin Login</title>
    <link href="https://cdn.jsdelivr.net/npm/bootstrap@5.3.0/dist/css/bootstrap.min.css" rel="stylesheet" integrity="sha384-9ndCyUaIbzAi2FUVXJi0CjmCapSmO7SnpJef0486qhLnuZ2cdeRhO02iuK6FUUVM" crossorigin="anonymous">
    <style>
        body
        {
            background-image: url("https://wallpaperaccess.com/full/210888.jpg");
            background-size: 100%;
        }
        #formdiv
        {
            margin-top: 150px;
            border-radius: 20px;
        }

        #btnlogin
        {
            padding: 5px 190px;
        }
    </style>
</head>

<body>
    <section>
        <div class="container-fluid text-white pad">
            <div class="row">
                <div class="col-lg-4">

                </div>
                <div id="formdiv" class="col-lg-4 bg-secondary ">
                    <form method="post">
                        <h2 class="text-center text-white mt-4">Admin Login</h2>
                        <img src="https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcTEg09MmHvC-78aaRxyd52HabsZqI1-u8R6-w&usqp=CAU" class="rounded-circle" height="50px" width="50px"><br>
                        <label class="font-weight-normal text-white">USERNAME</label>
                        <input type="text" name="uname" class="form-control" placeholder="Enter Username" required>

                        <label class="font-weight-normal text-white mt-3">PASSWORD</label>
                        <input type="password" name="password" class="form-control" placeholder="Enter Password" required>

                        <input type="submit" id="btnlogin" name="submit" class="btn btn-primary ml-3 mt-3 mb-4" value="LOG IN">
                    </form>

                </div>
                <div class="col-lg-4">

                </div>

            </div>
        </div>
    </section>
</body>

</html>

<?php 

if(isset($_POST["submit"]))
{
    $uname=$_POST["uname"];
    $password=$_POST["password"];
    if($uname=="admin" && $password=="login")
    {
        $_SESSION["user"] = $uname;
        $_SESSION["pass"] = $password;
        echo "<script>window.open('admin_panel.php','_self')</script>";
    }
    else
    {
        echo "<script>alert('Incorrect Username or Password !')</script>";
        echo "<script>window.open('admin_login.php','_self')</script>";
    }
}

?>