mvn install:install-file -Dfile=${HOME}/X3DJSONLD/X3DJSAIL.4.0.full.jar -DgroupId=org.web3d.x3d -DartifactId=X3DJSAIL -Dversion=4.0-full -Dpackaging=jar
mvn install:install-file -Dfile=${HOME}/X3DJSONLD/X3DJSAIL.4.0.classes.jar -DgroupId=org.web3d.x3d -DartifactId=X3DJSAIL -Dversion=4.0-classes -Dpackaging=jar
mvn install:install-file -Dfile=${HOME}/X3DJSONLD/saxon-he-12.8.jar -DgroupId=net.sf.saxon -DartifactId=SAXON-HE -Dversion=12.8 -Dpackaging=jar
mvn install:install-file -Dfile=${HOME}/www.web3d.org/x3d/stylesheets/java/lib/exificient-gui-jar-with-dependencies.jar  -DgroupId=com.siemens.ct.exi -DartifactId=exificient -Dversion=0.9.7-SNAPSHOT-source1.6 -Dpackaging=jar
