<?php

$data = $_POST;
$name = $data['name'];
$dob = $data['dob'];
$email = $data['email'];
$phone = $data['phone'];

$report = "Hello, $name ($email). Your date of birth is $dob. We will contact you through $phone or $emil if needed";

echo $report;
