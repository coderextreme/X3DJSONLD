import xml.etree.ElementTree as ET

tree = ET.parse("../../specifications/X3dUnifiedObjectModel-4.0.xml")

root = tree.getroot()

sites = root.findall(".//SimpleType[@name='hanimFeaturePointNameValues']")
joints = root.findall(".//SimpleType[@name='hanimJointNameValues']")
segments = root.findall(".//SimpleType[@name='hanimSegmentNameValues']")

def mapPrint(alias, value):
        print(f'("{alias}", "{value}"),')

for elem in joints:
    enums = elem.findall(".//enumeration")
    for enum in enums:
        if enum.get('alias') is not None:
            for alias in enum.get('alias').split(","):
                mapPrint(alias, enum.get('value'))
        else:
            mapPrint(enum.get('value'), enum.get('value'))
for elem in sites:
    enums = elem.findall(".//enumeration")
    for enum in enums:
        if enum.get('alias') is not None:
            for alias in enum.get('alias').split(","):
                mapPrint(alias, enum.get('value'))
        else:
            mapPrint(enum.get('value'), enum.get('value'))
for elem in segments:
    enums = elem.findall(".//enumeration[@value]")
    for enum in enums:
        if enum.get('alias') is not None:
            for alias in enum.get('alias').split(","):
                mapPrint(alias, enum.get('value'))
        else:
            mapPrint(enum.get('value'), enum.get('value'))
