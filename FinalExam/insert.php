<?php
$server = "localhost";
$user = "root";
$password = "root";
$database = "TU";
$port = 33061;

// Create connection
$conn = new mysqli($server, $user, $password, $database, $port);

// Check connection
if ($conn->connect_error) {
    die("Connection failed: " . $conn->connect_error);
}

// Query to fetch all records
$sql = "SELECT * FROM students";
$result = $conn->query($sql);
?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>All Student Records</title>
    <style>
        table {
            border-collapse: collapse;
            width: 60%;
        }
        th, td {
            border: 1px solid #000;
            padding: 8px 12px;
            text-align: center;
        }
    </style>
</head>
<body>
    <h2>Student Records</h2>
    <table>
        <tr>
            <th>ID</th>
            <th>Name</th>
            <th>Address</th>
        </tr>

        <?php
        if ($result->num_rows > 0) {
            // Output each row
            while ($row = $result->fetch_assoc()) {
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
