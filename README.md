# X3D JSON loader and node.js express web server for serving files from localhost

# Convert X3D JSON to DOM and a host of X3D binding files

Version 12


* Download and install git
```
git clone https://github.com/coderextreme/X3DJSONLD
cd X3DJSONLD
```

* set environmental variables (Windows 11 here)
```
edit src/main/shell/classpath
```

* If you want to use node.js as your web server, download and install node.js (npm comes with it).

* You can download X3D JSON examples from here: http://www.web3d.org/x3d/content/examples/X3dExampleArchivesJsonScenes.zip

* Edit src/main/node/config.js for node.js, put maven in your path, install X3DJSAIL in your maven repository per the pom.xml (it's different than the X3DJSAIL distribution) and start a web server

* Install pythom other dependent tools

* Install jsonlint

* install maven

* install java

* install ant

* install Clojure (lein)

* install JRuby

* install GraalPy

* install GraalJS

```
npm install
npm run start

# interactive, 10 years expiration in git for windows (git bash), non-localhost
openssl req -x509 -newkey rsa:4096 -keyout key.pem -out cert.pem -sha256 -days 3650 -nodes

# non-interactive, 10 years expiration in git for windows (git bash), localhost
openssl req -x509 -newkey rsa:4096 -keyout key.pem -out cert.pem -sha256 -days 3650 -nodes -subj '//CN=localhost'
```
Then go to http://localhost:3000/index.html in your web browser and select a JSON file in
the pulldown.  You can try: http://localhost:3000/X3DExamplesViewer.html
Or for X3DJSONLD 12, there's a new viewer: https://localhost:3000/src/main/html/main_viewer.html


* WARNING

You should not put up index.html from the X3D JSON Loader found here https://github.com/coderextreme/X3DJSONLD/ and here http://coderextreme.net/X3DJSONLD/  without careful consideration of this:

https://www.owasp.org/index.php/XSS_(Cross_Site_Scripting)_Prevention_Cheat_Sheet


In particular, I am choosing tags, attribute names, and attributes right out of the JSON and XML with limited filtering or checking (just checking JSON schema, which may be ignored).    You should validate any JSON or XML being loaded into the X3D JSON Loader (yes I know it's problematic).  In particular, if you store XML or JSON from untrusted sources and display them in the Loader, it's likely you will get an XSS attack.  Please sanitize all input from untrusted source and make sure it's valid.  We don't currently have XML Schema or XML Schematron for JSON data yet.  We do have JSON schema, but it doesn't test scripts.


It's in the license that I will not be liable for damages.  Please use my software with care.  I am not a security researcher.


If someone wants me to write a sanitizer for the X3D JSON Loader, I am willing to for $$$.  I will need to run it by some security researchers.


* Converting JSON files to X3D XML, Python, Clojure, C++, GraalPy, Java and GraalJS


The script, serialize.sh provides the driving software for producing XML, Python and Java, JavaScript artifacts from JSON.  simply modify and run the script to suit.  You can change the Java Serializer or any other serializer in json2all.js.  There is a list of serializers there with corresponding file extensions.


* [ Not tested recently ] Compiling and running Java, producing diffs of JSON input and output.   The Java serializer produces a program which produces JSON.  You can run the output from the serializer through the Java compiler and JVM with compilejava.sh.  This will compile the java, run it, and provide a diff with the original JSON (if any).  There are a couple of output zips for collecting output results.


* Also you can run "sh local.sh" for converting, running and diffing local files found in src/main/data.

* Summary of shell scripts

These have been tested recently (in src/main/shell):
```
several.sh -- run several .x3d files through my conversion and compiling and running code.  Recommend that you put the files in src/main/data and use sh several.sh ../data/file1.x3d ../data/file2.x3d ...
all.sh -- run all .x3d in /c/x3d-code/www.web3d.org/x3d/content/examples through my conversion and compiling and running code found in several.  Dangerous.  Puts files in strange places right now.
local.sh  -- run src/main/data/*.x3d through several.sh
don.sh -- run several .x3d files through don's conversion and compiling and running code.
donlocal.sh -- run src/main/data/*.x3d through don.sh
runruby.sh -- convert files to JSON and JRuby
rubylocal.sh -- run src/main/data/*.x3d through runruby.sh
```


You will need to set up your classpath accordingly.  You can modify the file in src/main/shell/classpath to set your classpath.  You will probably have to build the project with Maven 3.  This is accomplished by running putting maven's bin folder in your path and running mvn install in the root folder, which will build any Java code found in src/main/java.  I use net/coderextreme/RunSaxon.java to process stylesheets.  Also, the website uses RunSaxon.java as well, so it would be good if you compiled it.  You may need to configure the classpath in src/main/node/allsaxon.js as well.


The following are legacy code, and may be updated.
```
combine.sh -- used to post process jsonerrors.txt
compile.sh -- finish compiling code
compilejava.sh -- compile java in local folder and create zips
convert.sh -- finish converting code
copy.sh -- copy arguments to current folder.  Used with xargs.
cp1252.sh -- list non-compiled files which are encoding cp1252
diff.sh -- compare outputs to inputs
diffjson.sh -- compare *.json to *.new.json
diffxml.sh -- compare *.x3d to *.new.x3d
donall.sh -- run all .x3d in /c/x3d-code/www.web3d.org/x3d/content/examples through don's conversion and compiling and running code.
execute.sh -- finish executing code
finish.sh -- finish conversion and compiling of files in /c/x3d-code/www.web3d.org/x3d/content/examples
nashorn.sh -- a script to run nashorn javascript *.js files
noncompiled.sh -- report non-compiled code
nonconverted.sh -- report non-converted code
nonexecuted.sh -- report non-executed java code
nonexecutedjs.sh -- report non-executed javascript
nonserialized.sh -- report non-serialized x3d
processJsonErrors.sh -- process JSON errors generated by serialize.sh
quotetest.sh -- a small shell script to test quoting and escaping
replaceclass.sh -- replace NeedClassHere with name of class from filename.  Needed for Don's code
runjson.sh -- do conversion and list python files
runppp.sh -- run prototype expander and xml prototype expander
runsc.sh -- run schema check for various things.
runToError.sh -- create *.runerr.txt and *.runout.txt
serialize.sh -- convert JSON to various formats. Produces jsonerrors.txt
sum.sh -- sum lines on standard input
unknown.sh -- report on UNKNOWN routes from *.runerr.txt and *.runout.txt
x3d2py.sh -- convert files from x3d to python
```

#To convert X3D JSON to DOM to Bindings in X3DJSONLD:

$ cd X3DJSONLD/src/main

Place X3D JSON files in ./data/.  The name should end in .json, and not include “new.”

$ cd ./shell/.

Edit classpath file to taste.

Convert files:

$ bash runjson.sh

Look at log for errors.

$ cd ../.

Look in */net/coderextreme/data/. for your output.

Edit ./node/json2all.js to add or configure serializers converting from DOM.

Recent Serializers include ./node/JRubySerializer.js and ./node/GuraSerializer.js
