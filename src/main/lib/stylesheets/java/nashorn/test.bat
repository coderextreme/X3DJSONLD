set PATH=%PATH%;%HOMEDRIVE%%HOMEPATH%\apache-ant-1.10.4\bin
cd .. && ant test.nashorn && jjs -J-Djava.class.path="jars/X3DJSAIL.3.3.full.jar;classes" nashorn/examples/Nashorn.js > nashorn/examples/Nashorn0.x3d
