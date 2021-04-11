import sys
import json
import schemaparser32

schemaparser32.validate(json.loads(sys.stdin.read()))

