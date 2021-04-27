import sys
import json
import schemaparser32

try:
	schemaparser32.validate(json.loads(sys.stdin.read()))
except:
	print('Invalid')
