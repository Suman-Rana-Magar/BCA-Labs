<?php
include "../dbconnect.php";
function getproducts()
{
    global $conn;
    $select_query = "SELECT * FROM product order by rand() limit 0,6";
    $result_query = mysqli_query($conn, $select_query);
    // $row = mysqli_fetch_assoc($result_query);
    while ($row = mysqli_fetch_assoc($result_query)) {
        $p_id = $row['p_id'];
        $p_title = $row['p_title'];
        $p_description = $row['p_description'];
        $p_image = $row['p_image'];
        $p_price = $row['p_price'];

        echo "<div class='col-sm-3' style='margin-top: 2rem;'>
        <div class='card text-center' style='width:18rem; height: auto;'>
        <div style=' margin-top: 6px; margin-bottom: 0; height: 13rem; width: auto;'>
            <img style='width: auto; height: 12rem;' class='card-img-top imf' src='../images/$p_image' alt='Generic placeholder image'>
        </div>
        <div class='card-body' style='height: 17rem; width: auto; '>
            <h5 style='margin-top: 0; margin-bottom: 3px;'>$p_title</h5>
            <div style='margin-top: 0; height:8rem; width: auto; '>
                <p style='margin-top: 3px; margin-bottom: 3px;'>$p_description</p>
            </div>
            <h6 style='margin-top: 5px;'>Price: $p_price</h6>
            <a href='product_detail.php?detailid=$p_id'><button class='btn bg-success'>Detail</button></a>
        </div>
        </div>
    </div>";
    }
}

function searchproducts()
{
    global $conn;
    if (isset($_GET["search_button"])) {
        $search_data = $_GET["search_box"];
        $search_query = "SELECT * FROM product WHERE p_keywords LIKE '%$search_data%'";
        $result_query = mysqli_query($conn, $search_query);
        // $row = mysqli_fetch_assoc($result_query);
        while ($row = mysqli_fetch_assoc($result_query)) {
            $p_id = $row['p_id'];
            $p_title = $row['p_title'];
            $p_description = $row['p_description'];
            $p_image = $row['p_image'];
            $p_price = $row['p_price'];

            echo "<div class='col-sm-3' style='margin-top: 2rem;'>
            <div class='card text-center' style='width:18rem; height: auto;'>
            <div style=' margin-top: 6px; margin-bottom: 0; height: 13rem; width: auto;'>
                <img style='width: auto; height: 12rem;' class='card-img-top imf' src='../images/$p_image' alt='Generic placeholder image'>
            </div>
            <div class='card-body' style='height: 17rem; width: auto; '>
                <h5 style='margin-top: 0; margin-bottom: 3px;'>$p_title</h5>
                <div style='margin-top: 0; height:8rem; width: auto; '>
                    <p style='margin-top: 3px; margin-bottom: 3px;'>$p_description</p>
                </div>
                <h6 style='margin-top: 5px;'>Price: $p_price</h6>
                <a href='product_detail.php?detailid=$p_id'><button class='btn bg-success'>Detail</button></a>
            </div>
            </div>
        </div>";
        }
    }
}

function p_detail()
{
    $p_detail = $_GET['detailid'];
    global $conn;
    $select_query = "SELECT * FROM product WHERE p_id='$p_detail'";
    $result_query = mysqli_query($conn, $select_query);
    // $row = mysqli_fetch_assoc($result_query);
    while ($row = mysqli_fetch_assoc($result_query)) {
        $p_title = $row['p_title'];
        $p_description = $row['p_description'];
        $p_fdescription = $row['p_fdescription'];
        $p_image = $row['p_image'];
        $p_price = $row['p_price'];

        echo "
        <div class='container mt-5'>
        <div class='card'>
            <div class='row'>
                <div class='col-md-6'>
                    <div class='main_image p-3 text-center'>
                        <h2>PRODUCT DETAIL</h2>
                        <div class='text-center p-4'> <img id='main-image' src='../images/$p_image' width='250'> </div>
                    </div>
                </div>
                <div class='main col-md-6'>
                    <div class=' mb-4 mt-4'>
                        <h5 class='text-uppercase'>$p_title</h5>
                        <div class='price d-flex flex-row align-items-center'> <span class='act-price'>$p_price</span>
                        </div>
                    </div>
                    <p>$p_description</p>
                    <p>$p_fdescription</p>
                    <div class=' size my-5'>
                        <h3>Sizes Available</h3>
                        <label class='radio'>
                            <input type='radio' name='size' value='S' checked>
                            <span>S</span>
                        </label>
                        <label class='radio'>
                            <input type='radio' name='size' value='M'>
                            <span>M</span>
                        </label>
                        <label class='radio'>
                            <input type='radio' name='size' value='L'>
                            <span>L</span>
                        </label>
                        <label class='radio'>
                            <input type='radio' name='size' value='XL'>
                            <span>XL</span>
                        </label>
                        <label class='radio'>
                            <input type='radio' name='size' value='XXL'>
                            <span>XXL</span>
                        </label>
                    </div>
                    <div class='cart mb-4'><input type='button' class='btn btn-danger' value='ADD TO CART'>
                        <input type='button' class='btn btn-success ml-3' onclick='CallMe()' value='BUY NOW'>
                    </div>
                </div>
            </div>
        
        </div>
        </div>
        ";
    }
}
// <div class='ml-3'> <small class='dis-price mx-3'><del>Rs.680</del></small> <span>35% OFF</span> </div>