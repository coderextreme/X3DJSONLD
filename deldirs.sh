rm ./src/main/c/net/coderextreme/data/*
rm ./src/main/clojure/net/coderextreme/data/*
rm ./src/main/cplusplus/net/coderextreme/data/*
rm ./src/main/dart/net/coderextreme/data/*
rm ./src/main/go/net/coderextreme/data/*
rm ./src/main/graaljs/net/coderextreme/data/*
rm ./src/main/graaljs/net/remove/data/*
rm ./src/main/graalpy/net/coderextreme/data/*
rm ./src/main/gura/net/coderextreme/data/*
rm ./src/main/java/net/coderextreme/data/*
rm ./src/main/jruby/net/coderextreme/data/*
rm ./src/main/node/net/coderextreme/data/*
rm ./src/main/node/net/ecma/data/*
rm ./src/main/pascal/net/coderextreme/data/*
rm ./src/main/python/net/coderextreme/data/*
rm ./src/main/quarter/net/coderextreme/data/*
rm ./src/main/truffleruby/net/coderextreme/data/*
rm ./src/main/vrml/net/coderextreme/data/*
pushd src/specifications
bash genX3DUOM.sh
popd
pushd src/main/python
source venv/bin/activate
source venv/Scripts/activate
bash genauto.sh
popd
git add src/main/clojure/net/coderextreme/data/X3Dautoclass.clj src/main/clojure/net/coderextreme/personal/X3Dautoclass.clj src/main/graaljs/net/coderextreme/data/X3Dautoclass.js src/main/graaljs/net/coderextreme/personal/X3Dautoclass.js src/main/graaljs/net/remove/data/X3DautoclassNew.js src/main/graaljs/net/x3djsonld/data/X3Dautoclass.js src/main/graalpy/net/coderextreme/data/x3dpsail.py src/main/jruby/x3drsail.rb src/main/node/X3Dautoclass.js src/main/node/fieldTypes.js src/main/node/mapToMethod.js src/main/python/X3Dautoclass.py src/main/python/net/coderextreme/data/X3Dautoclass.py src/main/truffleruby/x3drsail.rb
