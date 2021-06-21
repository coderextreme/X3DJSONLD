import sys
import json
import schemaparser30
import schemaparser31
import schemaparser32
import schemaparser33
import schemaparser40

jsobj = json.loads(sys.stdin.read())
version = jsobj["X3D"]["@version"].replace(".", "")
try:
	if version in [ "30", "31", "32", "33", "40" ]:
		eval("schemaparser"+version+".validate(jsobj)")
except:
	print('Invalid')
