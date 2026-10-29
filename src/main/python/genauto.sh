cp x3d_validator.py ../python/venv/lib/python3.12/site-packages/x3d/x3d_validator.py
# cp x3d_validator.py ../python/venv/lib/site-packages/x3d/x3d_validator.py

cp x3d_validator.py ../python/net/x3djsonld/data/x3d_validator.py
cp x3d_validator.py ../python/net/coderextreme/data/x3d_validator.py
cp x3d_validator.py ../graalpy/net/coderextreme/data/x3d_validator.py
cp x3d_validator.py ../shell/x3d_validator.py

source venv/bin/activate
# source venv/Scripts/activate

pip install BeautifulSoup4

python autoclass.py
python classesNew.py
python classes.py
python nodeclasses.py
python pyclasses.py
python rubyclasses.py
python truffleruby.py
python clojure.py
# HAnimSets.py:with open("Joints.txt", "w") as f:
# HAnimSets.py:with open("Sites.txt", "w") as f:
# HAnimSets.py:with open("Segments.txt", "w") as f:
python fieldTypesGenerator.py
python mapToMethodGenerator.py
# pyAccessTypeGenerator.py:f = open("X3DaccessTypes.py", "w")
# pyfieldTypesGenerator.py:f = open("X3DfieldTypes.py", "w")
# pyMethodGenerator.py:f = open("X3Dmethods.py", "w")
# pynodelist.py:f = open("nodelist.txt", "w")
# python Visitor.py
# python removeGenerator.py
cp X3Dautoclass.py net/coderextreme/data/
