# content
X3D JSON loader and node.js express web server for serving files from localhost


* Download and install git
```
git clone https://github.com/coderextreme/X3DJSONLD
cd X3DJSONLD
```

* If you want to use node as your web server, download and install node.js (npm comes with it). You may wish to use python's SimpleHTTPServer or other.  If you use another server, you will need to create a symbolic link or junction in the local folder called examples that points to the folder found in config.js

* Either add link (in UNIX) junction (Windows) or edit config.js for node.js, and start a web server
```
ln -s ___existing_path_to_examples___ examples 
python -m SimpleHTTPServer 3000

or

npm install
node app.js
```
Then go to http://localhost:3000 in your web browser and select a JSON file in
the pulldown.  A link called examples to the configured folder will be created on the web servers root
