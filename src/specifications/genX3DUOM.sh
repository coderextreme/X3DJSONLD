set -x
cp ../specifications/X3dUnifiedObjectModel-4.1.xml ../main/graalpy/net/coderextreme/data/X3dUnifiedObjectModel-4.1.xml

cp ../specifications/X3dUnifiedObjectModel-4.1.xml ../main/python/net/coderextreme/data/X3dUnifiedObjectModel-4.1.xml

cp ../specifications/X3dUnifiedObjectModel-4.1.xml ../main/python/net/x3djsonld/data/X3dUnifiedObjectModel-4.1.xml

cp ../specifications/X3dUnifiedObjectModel-4.1.xml ../main/python/X3dUnifiedObjectModel-4.1.xml

cp ../specifications/X3dUnifiedObjectModel-4.1.xml ../main/shell/X3dUnifiedObjectModel-4.1.xml

find ..  -name X3dUnifiedObjectModel-4.1.xml | xargs git add
