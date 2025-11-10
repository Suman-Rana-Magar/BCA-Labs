<?php
session_start();
?>
<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>My Profile</title>
    <style>
        body {
            font-family: Arial, sans-serif;
            background-color: #f5f5f5;
            margin: 0;
            padding: 0;
        }

        .container {
            max-width: 600px;
            margin: 0 auto;
            padding: 20px;
        }

        .profile {
            background-color: #ffffff;
            padding: 20px;
            border-radius: 8px;
            box-shadow: 0 2px 4px rgba(0, 0, 0, 0.1);
        }

        .avatar {
            width: 100px;
            height: 100px;
            border-radius: 50%;
            margin-bottom: 10px;
        }

        .email,
        .phone,
        .username {
            font-size: 16px;
            margin: 5px 0;
        }

        .edit-profile,
        .logout, .login {
            display: block;
            width: 100px;
            text-align: center;
            padding: 8px 0;
            margin: 10px auto;
            background-color: #007bff;
            color: #ffffff;
            text-decoration: none;
            border-radius: 4px;
        }

        .edit-profile:hover,
        .logout:hover,
        .login:hover {
            background-color: #0056b3;
        }

        .notloggedin
        {
            margin-top: 200px;
            text-align: center;
        }
    </style>
</head>

<body>
    <?php
    include "../dbconnect.php";
    if (isset($_SESSION['email'])) 
    {
        $u_detail = $_SESSION['email'];
        global $conn;
        $select_query = "SELECT * FROM tbl_user WHERE email='$u_detail'";
        $result_query = mysqli_query($conn, $select_query);
        // $row = mysqli_fetch_assoc($result_query);
        while ($row = mysqli_fetch_assoc($result_query)) 
        {
            $id=$row['id'];
            $u_profile = $row['u_profile'];
            $u_name = $row['user_name'];
            $u_email = $row['email'];
            $u_phone = $row['phone'];

            echo "
            <div class='container'>
            <div class='profile'>
            <img class='avatar' src='../images/$u_profile' alt='User Avatar'>
            <h1 style='margin:0;'>My Profile</h1>
            <p class='username'>Name : $u_name</p>
            <p class='email'>Email : $u_email</p>
            <p class='phone'>Phone No. : $u_phone</p>
            <a class='edit-profile' href='edit_profile.php?updateid=$id'>Edit Profile</a>
            <a class='logout' href='user_logout.php'>Logout</a>
            </div>
            </div>
            ";
        }
    }
    else
    {
        echo "
        <div class='notloggedin'>
            <h1>You haven't logged in yet !</h1>
            <a class='login' href='signup.php'>Signup / Login </a>
        </div>
        ";
    }
    ?>
</body>

</html>