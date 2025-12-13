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
    echo "Session retrieved in session2 as name=" . $_SESSION['name'] . " age=" . $_SESSION['age'];
    ?>
    <br><br>
    <a href="session1.php">Check session in Previous page</a>
</body>

</html>