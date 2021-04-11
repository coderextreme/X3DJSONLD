import sys
import json
import schemaparser31

schemaparser31.validate(json.loads(sys.stdin.read()))

