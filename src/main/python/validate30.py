import sys
import json
import schemaparser30

try:
	schemaparser30.validate(json.loads(sys.stdin.read()))
except:
	print('Invalid')
