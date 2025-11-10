<?php
$server = "localhost";
$user = "root";
$password = "root";
$database = "TU";
$port = 33061;
session_start();

$conn = new mysqli($server, $user, $password, $database, $port);
if ($conn->connect_error)
    die("Connection failed" . $conn->connect_error);

if (isset($_POST["show"])) {
    $sql = "SELECT * FROM students";
    $results = mysqli_query($conn, $sql);
}
?>
<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Student Data</title>
</head>

<body>
    <form action="index.php" method="post">
        <label for="username">User Name</label>
        <input type="text" id="username" name="username" required><br><br>
        <label for="address">Address</label>
        <input type="text" id="address" name="address" required><br><br>
        <button type="submit" name="submit">Submit</button>
    </form>
    <form action="index.php" method="post">
        <button type="submit" name="show">Show Data</button>
    </form>
    <h2>Student Records</h2>
    <table>
        <tr>
            <th>ID</th>
            <th>Name</th>
            <th>Address</th>
        </tr>

        <?php
        if ($results->num_rows > 0) {
            // Output each row
            while ($row = $results->fetch_assoc()) {
                echo "<tr>
                        <td>{$row['id']}</td>
                        <td>{$row['name']}</td>
                        <td>{$row['address']}</td>
                      </tr>";
            }
        } else {
            echo "<tr><td colspan='3'>No records found</td></tr>";
        }

        $conn->close();
        ?>
    </table>
</body>

</html>
<?php
if (isset($_POST["submit"])) {
    $name = $_POST["username"];
    $address = $_POST["address"];
    echo $name . " " . $address;
    $insert = "INSERT INTO students (name,address) VALUES ('$username','$address')";
    if (mysqli_query($conn, $insert))
        echo "Data stored successfully";
}

?>