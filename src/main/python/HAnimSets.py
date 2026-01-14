import xml.etree.ElementTree as ET

# list Joint centers in Katy's format

tree = ET.parse("../../specifications/X3dUnifiedObjectModel-4.1.xml")

root = tree.getroot()

sites = root.findall(".//SimpleType[@name='hanimFeaturePointNameValues']")
joints = root.findall(".//SimpleType[@name='hanimJointNameValues']")
segments = root.findall(".//SimpleType[@name='hanimSegmentNameValues']")

with open("Joints.txt", "w") as f:
    for elem in joints:
        enums = elem.findall(".//enumeration")
        for enum in enums:
            f.write(enum.get('value')+"\n")

with open("Sites.txt", "w") as f:
    for elem in sites:
        enums = elem.findall(".//enumeration")
        for enum in enums:
            f.write(enum.get('value')+"\n")

with open("Segments.txt", "w") as f:
    for elem in segments:
        enums = elem.findall(".//enumeration[@value]")
        for enum in enums:
            f.write(enum.get('value')+"\n")
