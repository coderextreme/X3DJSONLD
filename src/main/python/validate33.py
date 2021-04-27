import sys
import json
import schemaparser33

try:
	schemaparser33.validate(json.loads(sys.stdin.read()))
except:
	print('Invalid')
