javac -cp saxon9B.jar RunSaxon.java

rm *Canonical*
rm *roundtrip*

find . -name '*.x3d' -type f -print0 | xargs -0 node convert.js
