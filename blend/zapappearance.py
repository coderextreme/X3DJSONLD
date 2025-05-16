import xml.etree.ElementTree
import os
import re
import glob
import sys
import time

# find the parent of a child
def find_parent(root, child):
    for parent in root.iter():
        if child in parent:
            return parent
    return None

input_file = 'JinLOA4.scaled.shapesonly.x3d'

print(f"Input file: {input_file}")

X3D = xml.etree.ElementTree.parse(input_file)
root = X3D.getroot()
scene = root.find("Scene")
appearances = scene.findall(".//Appearance")

for appearance in appearances:
    parent = find_parent(scene, appearance)
    parent.remove(appearance)

header = '<?xml version="1.0" encoding="UTF-8"?>\n<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 4.0//EN" "https://www.web3d.org/specifications/x3d-4.0.dtd">'
xmlstr = xml.etree.ElementTree.tostring(root, encoding='unicode')

wi_str = '''
  </Scene>
</X3D>
'''

xmlString = f"{header}{xmlstr[:-16]}{wi_str}"
file_output = os.path.join(".",os.path.basename("JinLOA4.scaled.zappedappearances.x3d"))

with open(file_output, "w") as output_file:
    output_file.write(xmlString)
