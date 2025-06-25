if (typeof window === 'undefined') {
  var fs = await import('fs');
}
if (typeof fs === 'object') {
	console.log(JSON.stringify(JSON.parse(fs.readFileSync(process.argv[2])), null, 2));
}
