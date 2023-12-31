<html>
<body>

<h2>Check odd or evan</h2>

<form method="get" action="">
Enter a number :
<input type="number" name="number"><br><br>
<input type="submit" name="check">
</form>

<?php
if(isset($_GET['check']))
{
	$number=$_GET['number'];
	if($number==0)
	{
		echo "<p>$number is Zero</p>";
	}
	else if ($number%2==0)
	{
		echo "<p>$number is an Even number</p>";
	}
	else
	{
		echo "<p>$number is an Odd number</p>";
	}
}

?>

</body>

</html>

