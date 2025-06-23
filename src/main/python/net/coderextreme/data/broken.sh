# for i in AllenDutton.py variationalflowers2.py Tufani8Final.py New2Template.py Lily8Final.py Leif8Final.py john3.py john2.py john.py Gramps8Final.py bumpyx_itesliders.py bumpyfreewrlsliders.py bumpyfreewrljsonverse.py;
for i in *.py;
do
	echo $i
	'/c/Users/jcarl/Downloads/graalpy-community-jvm-24.2.1-windows-amd64/graalpy-community-24.2.1-windows-amd64/bin/graalpy.exe' --jvm --vm.cp="/c/Users/jcarl/pythonSAI/X3DJSAIL.4.0.full.jar" $i;
done
