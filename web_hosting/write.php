<?php
$NAME = $_POST['F'];
$HANDLE = fopen($NAME, 'w') or die ('CANT OPEN FILE');
fwrite($HANDLE,$_POST["D"]);
fclose($HANDLE);
?>

<?php
$file = fopen("test.txt","w");
echo fwrite($file,"Hello World. Testing!");
fclose($file);
?>