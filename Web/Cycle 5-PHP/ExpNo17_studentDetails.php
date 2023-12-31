<html>

<body>
<h1>Student Details Form</h1>

<form method="POST" action="">
<table cellspacing="10" >
<tr>
	<td>Name :</td>
	<td><input type="text" name="name"></td>
</tr>
<tr>
	<td>Email ID :</td>
	<td><input type="email" name="email"></td>
</tr>
<tr>
	<td>Address :</td>
	<td><input type="address" name="address"></td>
</tr>
<tr>
	<td>Gender :</td>
	<td>
	<input type="radio" name="gender" value="male">Male
	<input type="radio" name="gender" value="female">Female
	</td>
</tr>
<tr>
	<td>Date of Birth :</td>
	<td><input type="date" name="dob"></td>
</tr>
<tr></tr><tr></tr><tr></tr>
<tr  align="center">
 <td colspan=2 ><input type="submit" name="submit"></td>
</tr>
</table>
</form>

<?php
if (isset($_REQUEST['submit']))
{
	echo "<h2> Student Details</h2>";
	echo "<p>Name :  ". $_REQUEST['name'] ."</p>";
	echo "<p>Email ID :  ". $_REQUEST['email'] ."</p>";
	echo "<p>Address :  ". $_REQUEST['address'] ."</p>";
	echo "<p>Gender :  ". $_REQUEST['gender'] ."</p>";
	echo "<p>Date of Birth :  ". $_REQUEST['dob'] ."</p>";
}

?>

</body>

</html>
