import xml.etree.ElementTree as ET

# list Joint centers in Katy's format

tree = ET.parse("../../specifications/X3dUnifiedObjectModel-4.0.xml")

root = tree.getroot()

sites = root.findall(".//SimpleType[@name='hanimFeaturePointNameValues']")
joints = root.findall(".//SimpleType[@name='hanimJointNameValues']")
segments = root.findall(".//SimpleType[@name='hanimSegmentNameValues']")
#versions = root.findall(".//SimpleType[@name='hanimVersionChoices']")

print("--------------------------------")
print("Joints")
for elem in joints:
    # print(ET.tostring(elem))
    enums = elem.findall(".//enumeration[@default]")
    for enum in enums:
        # print(ET.tostring(enum))
        xyz = enum.get('default')
        default = xyz.split(" ")
        # print(default)
        print("--------------------------------")
        print(enum.get('value'))
        print("Type: ", "joint")
        print("Parent:", enum.get('parent'))
        print("X:", default[0], "m")
        print("Y:", default[1], "m")
        print("Z:", default[2], "m")
        print("")

print("--------------------------------")
print("Sites")
for elem in sites:
    # print(ET.tostring(elem))
    enums = elem.findall(".//enumeration[@default]")
    for enum in enums:
        #print(ET.tostring(enum))
        xyz = enum.get('default')
        default = xyz.split(" ")
        # print(default)
        print("--------------------------------")
        print(enum.get('value'))
        print("Type:", "site")
        print("Parent:", enum.get('parent'))
        print("X:", default[0], "m")
        print("Y:", default[1], "m")
        print("Z:", default[2], "m")
        print("")

print("--------------------------------")
print("Segments")
for elem in segments:
    # print(ET.tostring(elem))
    enums = elem.findall(".//enumeration[@value]")
    for enum in enums:
        # print(ET.tostring(enum))
        print("--------------------------------")
        print(enum.get('value'))
        print("Parent:", enum.get('parent'))
        print("Type:", "segment")
