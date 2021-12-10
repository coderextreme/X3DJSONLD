import os
#A friend wrote a loop to generate versions of X3D JSON Schemas.  He wrote the loop in python.  I have modified the loop to create schema validators in python.  The code and products are checked into X3DJSONLD/src/main/python. There are examples of using python scripts generated from the validator for 3.3 and 4.0.
#
#If someone would like to, they can develop a script for Command Prompt or PowerShell based on this python script.   I don't know if python on windows does any mapping from Linux to Windows.
#
#You will need to install fastjsonschema first.  pip3 comes with python3:
#
#
#$ pip3 install fastjsonschema
#
#And install jsonlint (use your favorite node.js package manager) for pretty printing:
#
#$ npm install jsonlint -g
#
#You may have better results using the schema validator directly as far as getting good error messages.  I haven't figured out how to do that yet (exercise left to the reader). Right now, the python validators throws an ugly python error when running python (of course, to be expected).
#
#
#What I have shown is the generated schemas pass draft-07 built into a potential build script, and potential for speeding up python X3D JSON validation.
#
#
#I know it's very complex, but *well documented* I think.
#
#I am mainly sending a link due to various mail filters messing up filenames with embedded host names. Here's the code:
#
#https://github.com/coderextreme/X3DJSONLD/blob/master/src/main/python/generateSchemas.py
#
#One should run the script in the X3DJSONLD/src/main/python folder.
#
#Usage to validate an X3D JSON file (python script found online next to generateSchemas.py):
#
#python3 validate.py < X3D_JSON_file_name.json
#
#So you can drop the JSON schema entirely with python, if you wish, AFAICT right now.  This possibly would be advantageous to an x3d.py JSON "typeless" loader.
#
#I don't know if we're close to reading a X3D JSON file into a python X3D model with python.    That's probably still a ways out, I think.  Of course, one can read a JSON file already in python.  So these validators provide a bit of type-safety in the short term, when converting X3D JSON to a X3D model in python.   That is, it's easier to write a validator in the short term, since it's pretty much a series of commands to the operating system shell, and a lot of code is available for validating.
#
#Be warned that this package generates an runs unchecked (by me) python, so you may want to use care.
#
#generateSchemas.py generates the following files:
#
#> draft07.py
#> validate07.py
#> ../schema/x3d-{version}-JSONSchema.json
#> schemaparser{schemacodeversion}.py
#> validate{schemacodeversion}.py
#
#be sure to make backups, fork my repository, if you run the generateSchemas.py script.   The products are already checked in, so there's no real reason to run it!

# create python script for validing draft-07 JSON schemas
# os.system(f'cat  ../schema/draft-07-JSONSchema.json | python3 -m fastjsonschema > draft07.py')
# validate draft-07 schema against draft-07.py
# os.system(f'echo "import sys\nimport json\nimport draft07\n\ndraft07.validate_http___json_schema_org_draft_07_schema(json.loads(sys.stdin.read()))\n" > validate07.py')
# validate draft-07 against draft-07
# os.system(f'python3 validate07.py < ../schema/draft-07-JSONSchema.json')

# generates X3D JSON schema from 5 different versions of X3DUOM.
versions = ['3.0', '3.1', '3.2', '3.3', '4.0']
for version in versions:
    print(f"{version}")
    schemacodeversion = version.replace(".", "")
    # generate the version-based X3D JSON schema
    os.system(f'python3 ../python/etgenerateJSONschema2020-12.py {version} < ../../specifications/X3dUnifiedObjectModel-{version}.xml | jsonlint > ../schema/x3d-{version}-JSONSchema.json')
    # generate the python code for version-based validation of X3D JSON
    #os.system(f'python3 -m fastjsonschema > schemaparser{schemacodeversion}.py < ../schema/x3d-{version}-JSONSchema.json')
    # validate an X3D JSON schema version against draft07.py
    #os.system(f'python3 validate07.py < ../schema/x3d-{version}-JSONSchema.json')
    # create a python script for validating this version
    #os.system(f'echo "import sys\nimport json\nimport schemaparser{schemacodeversion}\n\ntry:\n\tschemaparser{schemacodeversion}.validate(json.loads(sys.stdin.read()))\nexcept:\n\tprint(\'Invalid\')" > validate{schemacodeversion}.py')

# run testjschon.py
# print("testjschon.py")
# os.system(f'python3 testjschon.py')
