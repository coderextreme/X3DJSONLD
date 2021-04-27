import sys
import json
import schemaparser40

try:
	schemaparser40.validate(json.loads(sys.stdin.read()))
except:
	print('Invalid')
