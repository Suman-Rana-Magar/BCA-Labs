<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>PHP Variables</title>
</head>

<body>
    <?php
    include 'variables.php';
    ?>
    <h3>Local Variable</h3>
    <span><?php echo local_var(); ?></span>

    <h3>Global Variable</h3>
    <span><?php echo global_var(); ?></span>

    <h3>Global Variable by $GLOBALS</h3>
    <span><?php echo global_var1(); ?></span>

    <h3>Static Variable</h3>
    <span><?php echo static_var(); ?></span>
    <span><?php echo static_var(); ?></span>
    <span><?php echo static_var(); ?></span>

    <h3>Constant</h3>
    <span><?php echo MESSAGE; ?></span><br>
    <span><?php echo constant("MESSAGE"); ?></span>

    <h3>Magic Constant</h3>
    <h4>Line Constant (__LINE__)</h4>
    <span><?php echo "You are currently on line " . __LINE__ ?></span><br>
    <h4>File Constant (__FILE__)</h4>
    <span><?php echo "You are currently on file " . __FILE__ ?></span><br>
    <h4>Directory Constant [__DIR__ & dirname(__FILE__)]</h4>
    <span><?php echo "You are currently on directory " . __DIR__ ?></span><br>
    <span><?php echo "You are currently on directory " . dirname(__FILE__) ?></span><br>
    <h4>Class Constant (__CLASS__)</h4>
    <span><?php echo "You are currently on class " . __CLASS__ ?></span><br>
    <h4>Function Constant (__FUNCTION__)</h4>
    <span><?php echo "You are currently on function " . function_constant() ?></span><br>
    <h4>Method Constant (__METHOD__)</h4>
    <span><?php echo "You are currently on method " . __METHOD__ ?></span><br>
    <h4>Namespace Constant (__NAMESPACE__)</h4>
    <span><?php echo "You are currently on namespace " . __NAMESPACE__ ?></span><br>
    <h4>Trait Constant (__TRAIT__)</h4>
    <span><?php echo "You are currently on trait " . __TRAIT__ ?></span><br>
</body>

</html>