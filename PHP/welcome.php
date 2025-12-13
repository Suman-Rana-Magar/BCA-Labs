<?php
// Check if name parameter exists
if (isset($_GET["name"]) && !empty($_GET["name"])) {
    $name = $_GET["name"];
    echo "Hello $name";
} else {
    echo "Hello Guest! Please provide a name.";
}
?>