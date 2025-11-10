<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Signup</title>
    <link rel="stylesheet" href="https://cdn.jsdelivr.net/npm/bootstrap@4.6.1/dist/css/bootstrap.min.css">
    <script src="https://cdn.jsdelivr.net/npm/jquery@3.6.0/dist/jquery.slim.min.js"></script>
    <script src="https://cdn.jsdelivr.net/npm/popper.js@1.16.1/dist/umd/popper.min.js"></script>
    <script src="https://cdn.jsdelivr.net/npm/bootstrap@4.6.1/dist/js/bootstrap.bundle.min.js"></script>
</head>
<style>
    .bg-img {
        background-image: url("images/back_img.jpg");
    }

    .btn {
        background: linear-gradient(to right, rgba(132, 250, 176, 1), rgba(143, 211, 244, 1))
    }

    .a:hover {
        background-color: aqua;
    }

    .login {
        text-decoration: none;
    }

    .login:hover {
        text-decoration: underline;
    }

    #btnsignup:hover {
        font-weight: bold;
    }
    
</style>

<body>
    <section class="vh100 bg-img">
        <div class="container h-100">
            <div class="row h-100 justify-content-center align-content-center">
                <div class="col-12 col-md-9 col-lg-7 col-xl-6">
                    <div class="card h-100" style="border-radius: 20px;">
                        <div class="card-body p-5">
                            <form action="code_signup.php" method="post" class="justify-content-center align-content-center">
                                <h2 class="text-center"> Create Your Account</h2>
                                <img src="https://img.icons8.com/?size=512&id=99268&format=png" class="img-thumbnail" alt="Form Image on the top" width="50px" height="50px">
                                <div class="form-outline mb-4">
                                    <input type="text" class="form-control" name="uname" placeholder="YOUR USERNAME(Eg.Will Smith)" required>
                                </div>

                                <div class="form-outline mb-4">
                                    <input type="email" class="form-control" name="email" placeholder="YOUR EMAIL(Eg.abcd@gmail.com)" required>
                                </div>

                                <div class="form-outline mb-3">
                                    <input type="tel" pattern="[0-9]{10}" class="form-control" name="phone" placeholder="Your Phone Number" required>
                                </div>

                                <div class="form-outline mb-4">
                                    <label>Upload Your Profile Picture</label><br>
                                    <input type="file" name="u_profile" required>
                                </div>

                                <div class="form-outline mb-4">
                                    <input type="password" class="form-control form-control" name="password" placeholder="YOUR PASSWORD" required>
                                </div>

                                <div class="form-outline mb-4">
                                    <input type="password" class="form-control" name="cpassword" placeholder="CONFIRM YOUR PASSWORD" required>
                                </div>

                                <div class="form-check">
                                    <input class="form-check-input" id="" type="checkbox" value="" required>
                                    <label class="form-check-label">
                                        <p>
                                            I accept every <a href="">Terms & Conditions</a> regarding this Page.
                                        </p>
                                    </label>
                                </div>

                                <div class="form-outline mb-4">
                                    <button type="submit" name="submit" id="btnsignup" class="btn btn-success btn-block btn-lg gradient-custom-4 text-body">SIGN UP</button>
                                </div>

                                <p class="text-center text-muted mt-5 mb-0">Already have an account? <a href="login.php" class="login">Login here</a></p>
                        </div>
                        </form>
                    </div>
                </div>
            </div>
        </div>
    </section>
</body>

</html>