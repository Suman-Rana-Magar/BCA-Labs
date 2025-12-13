<?php
session_start();
?>
<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Session 1</title>
</head>

<body>
    <?php
    $_SESSION['name'] = "Suman";
    $_SESSION['age'] = 20;
    echo "Session created in session 1 as name=" . $_SESSION['name'] . " age=" . $_SESSION['age'];
    ?>
    <br><br>
    <a href="session2.php">Check session in another page</a>
</body>

</html>