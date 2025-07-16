#!/bin/bash
for i in `ls -d *| grep -v cl.sh | grep -v deps.edn| grep -v project.clj|grep -v X3Dautoclass.clj| grep -v runclojure.sh |grep -v x3dclsail| grep -v data`; do echo $i; pushd $i; lein run; popd; done

