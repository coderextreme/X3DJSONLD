# content
X3D JSON loader and node.js express web server for serving files from localhost

* for using the API, read GettingStarted.rtf  There are still symbols in the global scope I'd like to get rid of.  If you'd like to help, fork and issue a pull request.


* Download and install git
```
git clone https://github.com/coderextreme/X3DJSONLD
cd X3DJSONLD
```

* If you want to use node as your web server, download and install node.js (npm comes with it). You may wish to use python's SimpleHTTPServer or other.  If you use another server, you will need to create a symbolic link or junction in the local folder called examples that points to the folder found in config.js.  You can download examples from here: http://www.web3d.org/x3d/content/examples/X3dExampleArchivesJsonScenes.zip

* Either add link (in UNIX) junction (Windows) or edit config.js for node.js, and start a web server
```
ln -s ___existing_path_to_examples___ examples 
python -m SimpleHTTPServer 3000

or

npm install
node app.js
```
Then go to http://localhost:3000 in your web browser and select a JSON file in
the pulldown.  A link called examples to the configured folder will be created on the web servers root.  If you have examples linked to the X3D Resources examples, then you can try: http://localhost:3000/X3DExamplesViewer.html

* WARNING

You should not put up index.html from the X3D JSON Loader found here https://github.com/coderextreme/X3DJSONLD/ and here http://coderextreme.net/X3DJSONLD/  without careful consideration of this:

https://www.owasp.org/index.php/XSS_(Cross_Site_Scripting)_Prevention_Cheat_Sheet

In particular, I am choosing tags, attribute names, and attributes right out of the JSON and XML with limited filtering or checking (just checking JSON schema, which may be ignored).    You should validate any JSON or XML being loaded into the X3D JSON Loader (yes I know it’s problematic).  In particular, if you store XML or JSON from untrusted sources and display them in the Loader, it’s likely you will get an XSS attack.  Please sanitize all input from untrusted source and make sure it’s valid.  We don’t currently have XML Schema or XML Schematron for JSON data yet.  We do have JSON schema, but it doesn't test scripts.

It’s in the license that I will not be liable for damages.  Please use my software with care.  I am not a security researcher.

If someone wants me to write a sanitizer for the X3D JSON Loader, I am willing to for $$$.  I will need to run it by some security researchers.

* Converting JSON files to X3D XML, Python and Java

The script, runjson.sh provides the driving software for producing XML, Python and Java artifacts from JSON.  simply modify and run the script to suit.  You can change the Java Serializer or any other serializer in json2all.js.  There is a list of serializers there with corresponding file extensions.

* Compiling and running Java, producing diffs of JSON input and output.   The Java serializer produces a program which produces JSON.  You can run the output from the serializer through the Java compiler and JVM with compilejava.sh.  This will compile the java, run it, and provide a diff with the original JSON (if any).  There are a coupld of output zips for collecting output results.
