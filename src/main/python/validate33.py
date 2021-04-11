import sys
import json
import schemaparser33

schemaparser33.validate(json.loads(sys.stdin.read()))

