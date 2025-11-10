<?php
include "../dbconnect.php";
if(isset($_POST["submit"]))
{
    $uname=$_POST["uname"];
    $email=$_POST["email"];
    $phone=$_POST["phone"];
    $password=$_POST["password"];
    $cpassword=$_POST["cpassword"];
    $u_profile=$_POST["u_profile"];
    if($password==$cpassword)
    {
        $query="INSERT INTO tbl_user (user_name,email,phone,password,u_profile) VALUES ('$uname','$email','$phone','$password','$u_profile')";
        $check_user = mysqli_query($conn,"SELECT * FROM tbl_user WHERE user_name='$uname'");
        $user_count = mysqli_num_rows($check_user);

        $check_email = mysqli_query($conn,"SELECT * FROM tbl_user WHERE email='$email'");
        $email_count = mysqli_num_rows($check_email);

        $check_phone = mysqli_query($conn,"SELECT * FROM tbl_user WHERE phone='$phone'");
        $phone_count = mysqli_num_rows($check_phone);

        if($user_count>0)
        {
            echo "<script>alert('Username already exist. Please choose another username and try again !')</script>";
            echo "<script>window.open('signup.php','_SELF')</script>";
        }

        else if($email_count>0)
        {
            echo "<script>alert('Can not create multiple account with same email !')</script>";
            echo "<script>window.open('signup.php','_self')</script>";
        }

        else if($phone_count>0)
        {
            echo "<script>alert('Can not create multiple account with same phone number !')</script>";
            echo "<script>window.open('signup.php','_self')</script>";
        }
        else if(mysqli_query($conn,$query))
        {
            echo "<script>alert('Your account has been created successfully !')</script>";
            echo "<script>window.open('signup.php','_self')</script>";
        }

        else
        {
            die ("Error Detected !".mysqli_error($conn));
        }

    }

    else
    {
        echo "<script>alert('Password and conform password are not same !')</script>";
    }
    
    mysqli_close($conn);
}
?>