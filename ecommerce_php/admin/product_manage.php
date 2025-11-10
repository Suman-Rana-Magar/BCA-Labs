<?php include "../dbconnect.php" ?>
<!DOCTYPE html>
<html>
<head>
    <title>Manage Products</title>
    <link href="https://cdn.jsdelivr.net/npm/bootstrap@5.3.0/dist/css/bootstrap.min.css" rel="stylesheet" integrity="sha384-9ndCyUaIbzAi2FUVXJi0CjmCapSmO7SnpJef0486qhLnuZ2cdeRhO02iuK6FUUVM" crossorigin="anonymous">
    <style>
        table
        {
            text-align: center;
        }
    </style>
</head>

<body>
    <table class="table table-success table-striped">
        <thead>
            <tr>
                <th scope="col">ID</th>
                <th scope="col">Title</th>
                <th scope="col">Description</th>
                <th scope="col">Full Description</th>
                <th scope="col">Keywords</th>
                <th scope="col">Image</th>
                <th scope="col">Price</th>
                <th scope="col">Operations</th>

            </tr>
        </thead>
        <tbody>
            <?php 
            $select_query= "SELECT * FROM product";
            $result= mysqli_query($conn,$select_query);
            if($result)
            {
                while($row=mysqli_fetch_assoc($result))
                {
                    $id=$row['p_id'];
                    $title=$row['p_title'];
                    $description=$row['p_description'];
                    $fdescription=$row['p_fdescription'];
                    $keywords=$row['p_keywords'];
                    $image=$row['p_image'];
                    $price=$row['p_price'];

                    echo "
                    <tr>
                        <td scope='row'>$id</td>
                        <th>$title</th>
                        <td>$description</td>
                        <td>$fdescription</td>
                        <td>$keywords</td>
                        <td>$image</td>
                        <td>$price</td>
                        <td>
                        <a href='update.php?updateid=$id'><img style='height: 45px; width: 45px;' src='../images/update.png'></a>
                        <a style='cursor: pointer;'><img onclick='msg()' style='height: 40px; width: 40px;' src='../images/delete.png'></a>
                        </td>
                    </tr>
                    ";
                }
            }
            ?>
            <script>
                function msg()
                {
                    var conformation = confirm("Are you sure you want to delete this record ?");
                    if(conformation)
                    {
                        window.location = "<?php echo "delete.php?deleteid=$id" ?>";
                    }
                    else
                    {
                        window.location = "product_manage.php";
                    }
                }
            </script>
        </tbody>
    </table>
</body>

</html>