<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Insert Product</title>
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
    .login
    {
        text-decoration: none;
    }
    .login:hover
    {
        text-decoration: underline;
    }

    #btninsert:hover
    {
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
                            <form action="code_product_insert.php" method="post" class="justify-content-center align-content-center">
                                <h1 class="text-center"> Insert Product</h1>
                                <div class="form-outline mb-4">
                                    <h5>Product Title</h5>
                                    <input type="text" class="form-control" name="p_title" required>
                                </div>

                                <div class="form-outline mb-4">
                                    <h5>Product Basic Description</h5>
                                    <input type="text" class="form-control" name="p_description" required>
                                </div>

                                <div class="form-outline mb-4">
                                    <h5>Product Full Description</h5>
                                    <textarea name="p_fdescription" class="form-control" cols="30" rows="10"></textarea>
                                </div>

                                <div class="form-outline mb-4">
                                    <h5>Product Keywords</h5>
                                    <input type="text" class="form-control" name="p_keywords" required>
                                </div>

                                <div class="form-outline mb-4">
                                <h5>Product Category</h5>
                                    <select name="p_category" class="form-control" required>
                                        <option value="select" >Select Category</option>
                                        <option value="shirt">Shirt</option>
                                        <option value="pant">Pant</option>
                                        <option value="shoes">Shoes</option>
                                        <option value="watch">Watch</option>
                                        <option value="bag">Bag</option>
                                    </select>
                                </div>

                                <div class="form-outline mb-4">
                                <h5>Product Image</h5>
                                    <input type="file" name="p_image" required>
                                </div>

                                <div class="form-outline mb-4">
                                <h5>Product Price</h5>
                                    <input type="text" class="form-control" name="p_price" required>
                                </div>

                                <div class="form-outline mb-4">
                                    <button type="submit" name="insert" id="btninsert" class="btn btn-success btn-block btn-lg gradient-custom-4 text-body">Insert Product</button>
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