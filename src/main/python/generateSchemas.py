import os

versions = ['3.0', '3.1', '3.2', '3.3', '4.0']
for version in versions:
    print(f"{version}")
    os.system(f'python3 ../python/etgenerateJSONschema.py {version} < /c/x3d-code/www.web3d.org/specifications/X3dUnifiedObjectModel-{version}.xml | jsonlint > ../schema/x3d-{version}-JSONSchema.json')
