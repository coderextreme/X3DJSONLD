#!/bin/bash -x
rm DONSELF*java JOHNDON*java *.x3d *.class
echo "Compiling X3DJSONLD.java JSONXMLDBG.java ======================================================================="
javac -cp ".;../..;C:/Users/john/pythonSAI/X3DJSAIL.4.0.full.jar;C:/x3d-code/www.web3d.org/x3d/stylesheets/java/lib/javax.json-api-1.0.jar" X3DJSONLD.java JSONXMLDBG.java RunSaxon.java
echo "Running JSONXMLDBG.java ======================================================================="
java -cp ".;;../..;C:/Users/john/pythonSAI/X3DJSAIL.4.0.full.jar;C:/x3d-code/www.web3d.org/x3d/stylesheets/java/lib/javax.json-api-1.0.jar" JSONXMLDBG
# sed -e 's/\\\\\\"\\"/\\\\\\"/g' -e 's/\\\\\\/\\/g' -e 's/[^\\]\\[^\\]/\\/' < JSONLoaderDOM.x3d > JSONLoaderDOM2.x3d
# sed -e 's/\\\\\\"\\"/\\\\\\"/g' -e 's/[^\\]\\[^\\]/\\/' < JSONLoaderDOM.x3d > JSONLoaderDOM2.x3d
# sed -e 's/\\\&quot;/&quot;/g' -e 's/\(value\)="&quot;/$1="/' -e 's/(\("|[^/])>\)/\&quot;$2/' -e 's/\\\\\\"\\"/\\\\\\"/g' -e 's/\\"/"/g' < JSONLoaderDOM.x3d > JSONLoaderDOM2.x3d
# sed -e 's/\\\&quot;//g' -e 's/\\"/"/g' < JSONLoaderDOM.x3d > JSONLoaderDOM2.x3d
# sed -e 's/\\\&quot;/"/g' < JSONLoaderDOM.x3d > JSONLoaderDOM2.x3d
# sed -e 's/\\\&quot;//g' -e 's/\\\&quot;/"/g' -e 's/\(value\)="&quot;/$1="/' -e 's/(\("|[^/])>\)/\&quot;$2/' -e 's/\\\\\\"\\"/\\\\\\"/g' -e 's/\\"/"/g' < JSONLoaderDOM.x3d > JSONLoaderDOM2.x3d
# sed -e 's/\\\&quot;//g' -e 's/type="&quot;/type="/' -e 's/(\("|[^/]\)>)/\&quot;$2/' -e 's/\\\\\\/\\/g' -e 's/\\\\\\"\\"/\\\\\\"/g' < JSONLoaderDOM.x3d > JSONLoaderDOM2.x3d
# cp JSONLoaderDOM2.x3d JSONLoaderDOM.x3d
echo "Compiling JOHNDON.java ======================================================================="
sed -e '/JSON$/ {N;s/\n/ /;}' -e 's/EXAMINE/EXAMINE/' -e 's/\\\\\\/\\/g' -e 's/\\\\\\"\\"/\\\\\\"/g' < JOHNDON.json > JOHNDON2.json
mv JOHNDON2.json JOHNDON.json
sed -e '/JSON$/ {N;s/\n/ /;}' -e 's/EXAMINE/EXAMINE/' -e 's/\\\\\\/\\/g' -e 's/\\\\\\"\\"/\\\\\\"/g' < JOHNDON.x3d > JOHNDON2.x3d
mv JOHNDON2.x3d JOHNDON.x3d
sed -e '/JSON$/ {N;s/\n/ /;}' -e 's/EXAMINE/EXAMINE/' -e 's/\\\\\\/\\/g' -e 's/\\\\\\"\\"/\\\\\\"/g' < JOHNDON.java > JOHNDON2.java
mv JOHNDON2.java JOHNDON.java
javac -cp ".;../..;C:/Users/john/pythonSAI/X3DJSAIL.4.0.full.jar;C:/x3d-code/www.web3d.org/x3d/stylesheets/java/lib/javax.json-api-1.0.jar" JOHNDON.java
echo "Running JOHNDON.java ======================================================================="
# C:/Users/john/X3DJSONLD/saxon-he-10.6.jar
java -cp ".;../..;C:/Users/john/X3DJSONLD/saxon-he-10.6.jar;C:/Users/john/pythonSAI/X3DJSAIL.4.0.full.jar;C:/x3d-code/www.web3d.org/x3d/stylesheets/java/lib/javax.json-api-1.0.jar" JOHNDON
sed '/JSON$/ {N;s/\n/ /;}' < DONSELF.java > DONSELF2.java
mv DONSELF2.java DONSELF.java
echo "Compiling DONSELF.java ======================================================================="
javac -cp ".;../..;C:/Users/john/pythonSAI/X3DJSAIL.4.0.full.jar;C:/x3d-code/www.web3d.org/x3d/stylesheets/java/lib/javax.json-api-1.0.jar" DONSELF.java
echo "Running DONSELF.java ======================================================================="
java -cp ".;../..;C:/Users/john/pythonSAI/X3DJSAIL.4.0.full.jar;C:/x3d-code/www.web3d.org/x3d/stylesheets/java/lib/javax.json-api-1.0.jar" DONSELF
echo "Complete."
