import sys
import json
import draft07

draft07.validate_http___json_schema_org_draft_07_schema(json.loads(sys.stdin.read()))

