import sys
import json
import schemaparser30

schemaparser30.validate(json.loads(sys.stdin.read()))

