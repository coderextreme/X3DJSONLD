import xml.etree.ElementTree as ET

# list Joint centers in Katy's format

tree = ET.parse("../../specifications/X3dUnifiedObjectModel-4.0.xml")

root = tree.getroot()

#featurePoints = root.findall(".//SimpleType[@name='hanimFeaturePointNameValues']")
joints = root.findall(".//SimpleType[@name='hanimJointNameValues']")
#segmentNames = root.findall(".//SimpleType[@name='hanimSegmentNameValues']")
#versions = root.findall(".//SimpleType[@name='hanimVersionChoices']")

for elem in joints:
    # print(ET.tostring(elem))
    enums = elem.findall(".//enumeration[@default]")
    for enum in enums:
        print(ET.tostring(enum))
        xyz = enum.get('default')
        default = xyz.split(" ")
        # print(default)
        print("--------------------------------")
        print(enum.get('value'))
        print("X: ", default[0])
        print("Y: ", default[1])
        print("Z: ", default[2])
        print("")
