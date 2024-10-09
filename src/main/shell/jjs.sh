#!/usr/bin/bash
. ../shell/classpath
export GRAAL_CLASSPATH=C:/Users/jcarl/pythonSAI/X3DJSAIL.4.0.full.jar
"C:\Users\jcarl\Downloads\graaljs-community-jvm-24.0.2-windows-amd64\graaljs-community-24.0.2-windows-amd64\bin\js.exe" --experimental-options --polyglot --vm.Djs.allowAllAccess=true --vm.Xss1g --vm.Xmx4g --jvm --vm.classpath="${GRAAL_CLASSPATH}" "$@"
#C:/graaljs-community-jvm-23.1.2-windows-amd64/graaljs-community-23.1.2-windows-amd64/bin/js.exe --experimental-options --polyglot --vm.Djs.allowAllAccess=true --vm.Xss1g --vm.Xmx4g --jvm --vm.classpath="${GRAAL_CLASSPATH}" "$@"
