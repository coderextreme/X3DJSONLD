<?php
$servername = "localhost";
$username = "census";
$password = "census45.$$";
$table = "census.link";

// Create connection
$conn = new mysqli($servername, $username, $password);

// Check connection
if ($conn->connect_error) {
    die("Connection failed: " . $conn->connect_error);
} 
echo "Connected successfully\n";

$sql = "DROP TABLE ". $table;

if ($conn->query($sql) === TRUE) {
    echo "Table link dropped successfully\n";
} else {
    echo "Error dropping table: " . $conn->error. "\n";
}


// sql to create table
$sql = "CREATE TABLE ".$table." (
parent INT, 
child INT NOT NULL, 
type VARCHAR(60) NOT NULL,
name VARCHAR(60),
length INT,
value LONGTEXT
)";

if ($conn->query($sql) === TRUE) {
    echo "Table link created successfully\n";
} else {
    echo "Error creating table: " . $conn->error. "\n";
}

$link = $conn->prepare("INSERT INTO ".$table." (parent, child, type, name, length, value) VALUES (?, ?, ?, ?, ?, ?)");


function insertLink($link, $pid, $cid, $type, $name, $value) {
	$length = mb_strlen($value);
	$link->bind_param('iissis', $pid, $cid, $type, $name, $length, $value);
	$link->execute();
}

function unpackJSON($link, $data, $pid) {
	$cid = $pid;
	foreach ($data as $index => $obj) {
		insertLink($link, $pid, $cid, gettype($obj), $index, json_encode($obj));
		if (gettype($obj) == "array" || gettype($obj) == "object") {
			$cid = unpackJSON($link, $obj, $cid);
		}
		$cid++;
	}
	return $cid;
}
$handle = opendir(".");
$pid = 0;
$cid = $pid + 1;

$filenames = glob("*.json");
foreach ($filenames as $filename) {
	echo $filename."\n";
	$contents = file_get_contents($filename);
	$data = json_decode($contents);
	insertLink($link, $pid, $cid, gettype($data), 0, json_encode($data));
	insertLink($link, $pid, $cid, "FILENAME", "filename", $filename);
	insertLink($link, $pid, $cid, "BRANCH", "branch", "master");
	insertLink($link, $pid, $cid, "BRANCH", "revision", "1");
	insertLink($link, $pid, $cid, "BRANCH", "operation", "CREATE");
	$cid = unpackJSON($link, $data, $cid);
	$cid++;
}
$link->close();
$conn->close();
?>
