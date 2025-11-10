<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=], initial-scale=1.0">
    <title>Product Detail</title>
    <script type="text/javascript">
        function CallMe() {
            alert("Thank you for your Order! You will be informed after the product is ready. Have a sweet Day")
        }
    </script>
    <link rel="stylesheet" href="https://cdn.jsdelivr.net/npm/bootstrap@4.6.1/dist/css/bootstrap.min.css">
    <script src="https://cdn.jsdelivr.net/npm/jquery@3.6.0/dist/jquery.slim.min.js"></script>
    <script src="https://cdn.jsdelivr.net/npm/popper.js@1.16.1/dist/umd/popper.min.js"></script>
    <script src="https://cdn.jsdelivr.net/npm/bootstrap@4.6.1/dist/js/bootstrap.bundle.min.js"></script>
</head>
<style>
    .section {
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

    a:hover {
        background-color: aqua;
    }

    .main-image {
        background-color: white;
        border: none;
    }

    .main-image:hover {
        opacity: inherit;
    }

    .main {
        background-color: beige;
    }

    .act-price {
        font-weight: bold;
        color: #ff0000
    }

    label.radio {
        cursor: pointer
    }

    label.radio input {
        position: absolute;
        visibility: hidden;
        pointer-events: none
    }

    label.radio span {
        padding: 2px 9px;
        border: 2px solid #ff0000;
        display: inline-block;
        color: #ff0000;
        border-radius: 3px;
        text-transform: uppercase
    }

    label.radio input:checked+span {
        background-color: #ff0000;
        color: #fff
    }
</style>

<body class="section">
    <nav class="navbar navbar-expand-lg navbar-light bg-light fixed-top">
        <!--<a class="navbar-brand" href="#">Navbar</a>-->
        <button class="navbar-toggler" type="button" data-toggle="collapse" data-target="#navbarSupportedContent" aria-controls="navbarSupportedContent" aria-expanded="false" aria-label="Toggle navigation">
            <span class="navbar-toggler-icon"></span>
        </button>

        <div class="collapse navbar-collapse" id="navbarSupportedContent">
            <ul class="navbar-nav mr-auto">
                <li class="nav-item active">
                    <a class="nav-link" href="product_list.php">Home <span class="sr-only">(current)</span></a>
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

    <?php
    include "functions.php";
    p_detail();
    ?>
</body>

</html>