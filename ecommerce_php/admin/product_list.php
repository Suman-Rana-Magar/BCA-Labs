<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Index</title>
    <link rel="stylesheet" href="product_detail.html">
    <link rel="stylesheet" href="https://cdn.jsdelivr.net/npm/bootstrap@4.6.1/dist/css/bootstrap.min.css">
    <script src="https://cdn.jsdelivr.net/npm/jquery@3.6.0/dist/jquery.slim.min.js"></script>
    <script src="https://cdn.jsdelivr.net/npm/popper.js@1.16.1/dist/umd/popper.min.js"></script>
    <script src="https://cdn.jsdelivr.net/npm/bootstrap@4.6.1/dist/js/bootstrap.bundle.min.js"></script>

</head>
<style>
    body {
        background: linear-gradient(to right, #c04848, #480048);
    }

    nav {
        background: linear-gradient(to right, #c04848, #480048);
        position: fixed;
        top: 0;
    }

    .dropdown-menu {
        background-color: aqua;
    }

    img:hover {
        opacity: 50%;
    }

    h6:hover {
        color: #480048
    }

    button:hover {
        background: #000;
        box-sizing: border-box;
    }

    .nav {
        background: linear-gradient(to right, #c04848, #480048);
    }

    a:hover {
        background-color: aqua;
    }

    .imf {
        max-width: 250px;
        max-height: 250px;
    }

    .col-sm-3 {
        width: 280px;
    }

    .row {
        display: flex;
    }

    a {
        text-decoration: none;
    }
</style>

<body>

    <nav class="navbar navbar-expand-lg navbar-light bg-light fixed-top">
        <!--<a class="navbar-brand" href="#">Navbar</a>-->
        <button class="navbar-toggler" type="button" data-toggle="collapse" data-target="#navbarSupportedContent" aria-controls="navbarSupportedContent" aria-expanded="false" aria-label="Toggle navigation">
            <span class="navbar-toggler-icon"></span>
        </button>

        <div class="collapse navbar-collapse" id="navbarSupportedContent">
            <ul class="navbar-nav mr-auto">
                <li class="nav-item active">
                    <a class="nav-link" href="#">Home <span class="sr-only">(current)</span></a>
                </li>
                <li class="nav-item active">
                    <a class="nav-link" href="#">About Us</a>
                </li>
                <li class="nav-item dropdown">
                    <a class="nav-link dropdown-toggle" href="#" id="navbarDropdown" role="button" data-toggle="dropdown" aria-haspopup="true" aria-expanded="false">
                        Our Services
                    </a>
                    <div class="dropdown-menu">
                        <a class="dropdown-item" href="#">Clothings</a>
                        <a class="dropdown-item" href="#">Electronic Gadgets</a>
                        <!--<div class="dropdown-divider"></div>-->
                        <a class="dropdown-item" href="#">Foods</a>
                    </div>
                </li>
                <li class="nav-item">
                    <a class="nav-link disabled" href="#"></a>
                </li>
                <li class="nav-item active">
                    <a class="nav-link" href="#">Contact Us</a>
                </li>
            </ul>
            <form class="form-inline my-2 my-lg-0" method="get" action="search_products.php">
                <input class="form-control mr-sm-2" name="search_box" type="search" placeholder="Name of Product" aria-label="Search">
                <button class="btn btn-outline-success my-2 my-sm-0" value="search" name="search_button" type="submit">Search</button>
                <a style="height: 40px; width: 40px; margin-left: 10px; border-radius: 19.5px;" href="../user/profile.php"><img style="height: 40px; width: 40px; border-radius: 19.5px;" src="https://w7.pngwing.com/pngs/178/595/png-transparent-user-profile-computer-icons-login-user-avatars.png" alt="Profile"></a>
            </form>
        </div>
    </nav>

    <div class="row justify-content-center my-5 mx-5 text-white font-weight-bold">
        <h2>Product List</h2>
    </div>
    <div class="row mx-3 my-3">

        <!-- getting all the datas -->
        <?php
        include "functions.php";
        include "../dbconnect.php";
        getproducts();
        ?>
        <div class="jumbotron  jumbotron-fluid text-black bg-dark mt-5">
            <div class="row">
                <div class="col-sm-6">
                    <div style="text-align: center;">
                        <h1><u>Follow Us On</u></h1>
                        <a href="https://www.facebook.com/nabin.lamsal.737">FACEBOOK</a><br>
                        <a href="https://www.instagram.com/nabinlamsal99">INSTAGRAM</a><br>
                        <a href="https://twitter.com/nabinlamsal99">TWITTER</a><br>
                    </div>
                </div>
            </div>
            <h1 class="practise" style="text-align:center;">Practice</h1>
        </div>
        <br><br>
        <footer style="color:aliceblue; text-align: center; margin-top: 10px; margin-bottom: 5px;">
            <h5><u>@COPYRIGHT_2022</u></h5>
        </footer>
    </div>

</body>

</html>