#!/usr/bin/bash
. ../shell/classpath
C:/graaljs-community-jvm-23.1.2-windows-amd64/graaljs-community-23.1.2-windows-amd64/bin/js.exe --experimental-options --polyglot --vm.Djs.allowAllAccess=true --vm.Xss1g --vm.Xmx4g --jvm --vm.classpath="${GRAAL_CLASSPATH}" "$@"
