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
    enums = elem.findall(".//enumeration")
    for enum in enums:
        # print(ET.tostring(enum))
        print("--------------------------------")
        print(enum.get('value'))
        print("Type:", "joint")
        print("Parent:", enum.get('parent'))
        print("Index:", enum.get('index'))
        xyz = enum.get('default')
        # print(xyz)
        if xyz is not None:
            default = xyz.split(" ")
            print("X:", default[0], "m")
            print("Y:", default[1], "m")
            print("Z:", default[2], "m")
        else:
            print("X:", "x", "m")
            print("Y:", "y", "m")
            print("Z:", "z", "m")
        if enum.get('alias') is not None:
            print("Aliases:", enum.get('alias'))
        print("")

print("--------------------------------")
print("Sites")
for elem in sites:
    # print(ET.tostring(elem))
    enums = elem.findall(".//enumeration")
    for enum in enums:
        #print(ET.tostring(enum))
        print("--------------------------------")
        print(enum.get('value'))
        print("Type:", "site")
        print("Parent:", enum.get('parent'))
        print("Index:", enum.get('index'))
        xyz = enum.get('default')
        if xyz is not None:
            default = xyz.split(" ")
            # print(default)
            print("X:", default[0], "m")
            print("Y:", default[1], "m")
            print("Z:", default[2], "m")
        else:
            print("X:", "x", "m")
            print("Y:", "y", "m")
            print("Z:", "z", "m")
        if enum.get('alias') is not None:
            print("Aliases:", enum.get('alias'))
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
        print("Index:", enum.get('index'))
        if enum.get('alias') is not None:
            print("Aliases:", enum.get('alias'))
        print("")
