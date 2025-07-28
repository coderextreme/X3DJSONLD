#!/gbin/bash

# First, run all the commmands with CommandLine you want to optimize.  It's kind of like code coverage
java -agentlib:native-image-agent=config-output-dir=src/main/resources/META-INF/native-image \
     -cp "C:/Users/jcarl/www.web3d.org/x3d/stylesheets/java/lib/xercesImpl.jar;C:/Users/jcarl/www.web3d.org/x3d/stylesheets/java/lib/xmlresolver-5.2.2-data.jar;C:/Users/jcarl/www.web3d.org/x3d/stylesheets/java/lib/xmlresolver-5.2.2.jar;C:/Users/jcarl/www.web3d.org/x3d/stylesheets/java/lib/saxon-he-12.5.jar;C:/Users/jcarl/www.web3d.org/x3d/tools/X3dQualityAssurance/X3dValidator/lib/slf4j-api-2.0.9.jar;C:/Users/jcarl/www.web3d/org/x3d/tools/X3dQualityAssurance/X3dValidator/lib/slf4j-jcl-1.7.36.jar;C:/Users/jcarl/www.web3d.org/x3d/tools/X3dQualityAssurance/X3dValidator/lib/slf4j-simple-2.0.12.jar;X3DJSAIL.4.0.full.jar" \
     org.web3d.x3d.jsail.CommandLine -help

# This merges all subsequent commands with the above database

for i in `find src/main/data -name '*.x3d' | grep -v new`;
do 
java -agentlib:native-image-agent=config-merge-dir=src/main/resources/META-INF/native-image \
     -cp "C:/Users/jcarl/www.web3d.org/x3d/stylesheets/java/lib/xercesImpl.jar;C:/Users/jcarl/www.web3d.org/x3d/stylesheets/java/lib/xmlresolver-5.2.2-data.jar;C:/Users/jcarl/www.web3d.org/x3d/stylesheets/java/lib/xmlresolver-5.2.2.jar;C:/Users/jcarl/www.web3d.org/x3d/stylesheets/java/lib/saxon-he-12.5.jar;C:/Users/jcarl/www.web3d.org/x3d/tools/X3dQualityAssurance/X3dValidator/lib/slf4j-api-2.0.9.jar;C:/Users/jcarl/www.web3d/org/x3d/tools/X3dQualityAssurance/X3dValidator/lib/slf4j-jcl-1.7.36.jar;C:/Users/jcarl/www.web3d.org/x3d/tools/X3dQualityAssurance/X3dValidator/lib/slf4j-simple-2.0.12.jar;X3DJSAIL.4.0.full.jar" \
     org.web3d.x3d.jsail.CommandLine -validate "$i"
done


# now compile CommandLine with that database in META-INF/native-image

~/Downloads/graalvm-community-jdk-24.0.2_windows-x64_bin/graalvm-community-openjdk-24.0.2+11.1/bin/native-image.cmd \
  --initialize-at-run-time=org.xmlresolver,net.sf.saxon,org.apache.xerces \
  --initialize-at-run-time=org.xmlresolver.cache.ResourceCache \
  -H:+ReportExceptionStackTraces \
  --no-fallback \
  --enable-url-protocols=https \
  -cp "src/main/resources;C:/Users/jcarl/www.web3d.org/x3d/stylesheets/java/lib/xercesImpl.jar;C:/Users/jcarl/www.web3d.org/x3d/stylesheets/java/lib/xmlresolver-5.2.2-data.jar;C:/Users/jcarl/www.web3d.org/x3d/stylesheets/java/lib/xmlresolver-5.2.2.jar;C:/Users/jcarl/www.web3d.org/x3d/stylesheets/java/lib/saxon-he-12.5.jar;C:/Users/jcarl/www.web3d.org/x3d/tools/X3dQualityAssurance/X3dValidator/lib/slf4j-api-2.0.9.jar;C:/Users/jcarl/www.web3d.org/x3d/tools/X3dQualityAssurance/X3dValidator/lib/slf4j-jcl-1.7.36.jar;C:/Users/jcarl/www.web3d.org/x3d/tools/X3dQualityAssurance/X3dValidator/lib/slf4j-simple-2.0.12.jar;X3DJSAIL.4.0.full.jar" \
  org.web3d.x3d.jsail.CommandLine \
  -o CommandLine


# Nwo use CommandLine wherever you would use the `java org.web3d.x3d.CommandLine`
