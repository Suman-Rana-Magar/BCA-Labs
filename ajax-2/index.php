<?php
include "dbconnect.php";
$selectUser = $conn->prepare("select FullName from Members");
$selectUser->execute();
$users = $selectUser->get_result();
?>
<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Ajax Dropdow</title>
</head>

<body>
    <span>Select User</span>
    <select name="Select User" id="selectUser"></select>
    <?php while ($row = $users->fetch_assoc()) echo "<option value='$row'>$row</option>" ?>
</body>

</html>