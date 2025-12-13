<?php
setcookie("user", "Suman");
?>
<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Cookie</title>
</head>
<?php
echo (!isset($_COOKIE['user']) ? "Sorry, cookie is not found" : "Cookie Value: " . $_COOKIE['user']);
?>

<body>
</body>

</html>