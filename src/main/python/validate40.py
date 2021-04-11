import sys
import json
import schemaparser40

schemaparser40.validate(json.loads(sys.stdin.read()))

