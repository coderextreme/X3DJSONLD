import os
import sys

# validate the X3D Resources examples with draft 2020-12 JSON schema

for base, directoreis, filenames in list(os.walk("/c/x3d-code/www.web3d.org/x3d/content/examples")):
    for filename in filenames:
        if filename.endswith(".json"):
            fullpath = os.path.join(base, filename)
            os.system(f'python3 2020-12validate.py < "'+fullpath+'"')
            sys.stdout.write(fullpath)
            sys.stdout.write("\n")
            sys.stdout.flush()

