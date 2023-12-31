<html>
<body>

<h2> Calculate Factorial </h2>

<form method="post" action="">
Enter a number :
<input type="number" name="number"><br><br>
<input type="submit" name="check" value="calculate">
</form>


<?php
function fact($num)
{
	if($num==0||$num==1)
	{
		return 1;
	}
	else
	{
		return $num*fact($num-1);
	}
}
if(isset($_POST['number']))
{
	$num=$_POST['number'];
	if($num<0)
		echo "<p>Please enter a positive number</p>";
	else
	{
		$fact=fact($num);
		echo "<p>The Factorial of $num is $fact</p>";
	}
}
?>

</body>
</html>
