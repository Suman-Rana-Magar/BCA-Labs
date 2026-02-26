<?php
$request = isset($_REQUEST['q']) ? strtolower(htmlspecialchars($_REQUEST['q'])) : '';
$list = ["ram", "shyam", "amit", "suresh", "anil", "rohan", "deepak", "manoj", "vikas", "arjun", "nabin", "prakash", "sunil", "ravi", "ashok", "kiran", "santosh", "mahesh", "dipesh", "alok", "ganesh", "bikash", "rahul", "milan", "suman", "nitesh", "hari", "pawan", "lokesh", "yogesh", "binod", "ajay", "suraj", "naresh", "krishna", "dinesh", "kapil", "shankar", "tejas", "mukesh"];
$suggestion = "";
if ($request != "") {
    $len = strlen($request);
    foreach ($list as $name) {
        if (stristr($name, substr($request, 0), $len)) {
            $suggestion .= $suggestion === "" ? $name : ",$name";
        }
    }
}
echo $suggestion == "" ? "No Suggestion" : $suggestion;
