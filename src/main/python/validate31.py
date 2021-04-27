import sys
import json
import schemaparser31

try:
	schemaparser31.validate(json.loads(sys.stdin.read()))
except:
	print('Invalid')
