<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Ajax Example</title>
    <script>
        function showHint(str) {
            if (str.length == 0) {
                document.getElementById("txtHint").innerHTML = "";
                return;
            } else {
                let xmlhttp = new XMLHttpRequest();
                xmlhttp.onreadystatechange = function() {
                    if (this.readyState == 4 && this.status == 200) {
                        document.getElementById("txtHint").innerHTML = this.responseText;
                    }
                };
                xmlhttp.open("GET", "ajaxhint.php?q=" + str, true);
                xmlhttp.send();
            }
        }
    </script>
</head>

<body>
    <label for="txt">Enter Text</label>
    <input type="text" id="txt" name="txt" onkeyup="showHint(this.value)">
    <p>Suggestions: <span id="txtHint"></span></p>
</body>

</html>