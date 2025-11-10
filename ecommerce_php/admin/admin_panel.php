<?php
session_start();

$user = $_SESSION["user"];
if ($user == true) {
} else {
    header("location: admin_login.php");
}
?>

<!DOCTYPE html>
<html>

<head>
    <title>Admin Control Panel</title>
    <link href="https://cdn.jsdelivr.net/npm/bootstrap@5.3.0/dist/css/bootstrap.min.css" rel="stylesheet" integrity="sha384-9ndCyUaIbzAi2FUVXJi0CjmCapSmO7SnpJef0486qhLnuZ2cdeRhO02iuK6FUUVM" crossorigin="anonymous">
    <style>
        body {
            text-align: center;
            background-image: url("https://wallpapercave.com/wp/wp2508380.jpg");
        }

        h1 {
            margin-left: 200px;
            font-size: 75px;
            color: whitesmoke;
        }

        p {
            font-size: 25px;
            color: aliceblue;
        }

        #btn {
            margin: 20px;
            padding: 10px 40px;
            border-radius: 25px;
        }
        div
        {
            display: flex;
        }
        #logout
        {
            border-radius: 25px;
            margin-top: 25px;
            margin-left: 175px;
        }
    </style>
</head>

<body>
    <div>
        <h1>Welcome to Admin Panel</h1>
        <a href="admin_logout.php"><button id="logout" class="btn btn-outline-danger" type="button" name="btnlogout">Logout</button></a>
    </div>
    <p>Here are the functions you can control !</p>
    <a href="product_insert.php"><button id="btn" type="button" class="btn btn-outline-info">Insert Product</button></a>
    <a href="product_manage.php"><button id="btn" type="button" class="btn btn-outline-primary">Manage Product</button></a>

</body>

</html>