import os

# create python script for validing draft-07 JSON schemas
os.system(f'cat  ../schema/draft-07-JSONSchema.json | python3 -m fastjsonschema > draft07.py')
# validate draft-07 schema against draft-07.py
os.system(f'echo "import sys\nimport json\nimport draft07\n\ndraft07.validate_http___json_schema_org_draft_07_schema(json.loads(sys.stdin.read()))\n" > validate07.py')
# validate draft-07 against draft-07
os.system(f'python3 validate07.py < ../schema/draft-07-JSONSchema.json')

# generates X3D JSON schema from 5 different versions of X3DUOM.
versions = ['3.0', '3.1', '3.2', '3.3', '4.0']
for version in versions:
    print(f"{version}")
    schemacodeversion = version.replace(".", "")
    # generate the version-based X3D JSON schema
    os.system(f'python3 ../python/etgenerateJSONschema.py {version} < /c/x3d-code/www.web3d.org/specifications/X3dUnifiedObjectModel-{version}.xml | jsonlint > ../schema/x3d-{version}-JSONSchema.json')
    # generate the python code for version-based validation of X3D JSON
    os.system(f'python3 -m fastjsonschema > schemaparser{schemacodeversion}.py < ../schema/x3d-{version}-JSONSchema.json')
    # validate an X3D JSON schema version against draft07.py
    os.system(f'python3 validate07.py < ../schema/x3d-{version}-JSONSchema.json')
    # create a python script for validating this version
    os.system(f'echo "import sys\nimport json\nimport schemaparser{schemacodeversion}\n\nschemaparser{schemacodeversion}.validate(json.loads(sys.stdin.read()))\n" > validate{schemacodeversion}.py')

# now try to validate some JSON examples
print(f"3.3, HelloWorld.json")
os.system(f'python3 validate33.py < /c/x3d-code/www.web3d.org/x3d/content/examples/HelloWorld.json')

print(f"4.0, AllAudioGraphNodesTest.json")
os.system(f'python3 validate40.py < /c/x3d-code/www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/AudioSpatialSound/AllAudioGraphNodesTest.json')

print(f"3.3, CADPartChildTransformationAlternativeB.json")
os.system(f'python3 validate33.py < /c/x3d-code/www.web3d.org/x3d/content/examples/Basic/CAD/CADPartChildTransformationAlternativeB.json')

print(f"3.3, CADPartChildTransformationAlternativeC.json")
os.system(f'python3 validate33.py < /c/x3d-code/www.web3d.org/x3d/content/examples/Basic/CAD/CADPartChildTransformationAlternativeC.json')
