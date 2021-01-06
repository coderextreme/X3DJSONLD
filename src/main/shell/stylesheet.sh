for i in `ls -d "$@"| grep -v "\.new"`
do
echo ../../../node_modules/.bin/xslt3 -xsl:/c/x3d-code/www.web3d.org/x3d/stylesheets/X3dToJson.xslt -s:$i -o:`dirname $i`/`basename $i .x3d`.json2
../../../node_modules/.bin/xslt3 -xsl:/c/x3d-code/www.web3d.org/x3d/stylesheets/X3dToJson.xslt -s:$i -o:`dirname $i`/`basename $i .x3d`.json2
echo diff -w `dirname $i`/`basename $i x3d`json `dirname $i`/`basename $i x3d`json2
diff -w `dirname $i`/`basename $i x3d`json `dirname $i`/`basename $i x3d`json2
done
