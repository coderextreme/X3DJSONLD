import requests
from bs4 import BeautifulSoup

with open("X3dUnifiedObjectModel-4.1.xml") as fx3duom:
    x3duom = BeautifulSoup(fx3duom, features="xml")
with open("X_ITE.xml") as fx_iteuom:
    x_ite = BeautifulSoup(fx_iteuom, features="xml")

parent = x3duom.find("SimpleTypeEnumerations")
if parent is None:
    print("Error: SimpleTypeEnumerations not found in X3dUnifiedObjectModel-4.1.xml")
    exit(1)
stsuom = parent.find_all("SimpleType")
sts = x_ite.find_all("SimpleType")
for st in sts:
    found = False
    for stuom in stsuom:
        if st['name'] == stuom['name']:
            found = True
            #print(f"Found! {st['name']}")
            for child in st:
                stuom.append(child)
    if not found:
        parent.append(st)

parent = x3duom.find("FieldTypes")
ftsuom = parent.find_all("FieldType")
fts = x_ite.find_all("FieldType")
for ft in fts:
    found = False
    for ftuom in ftsuom:
        if ft['type'] == ftuom['type']:
            found = True
            #print(f"Found! {ft['name']}")
            for child in ft:
                ftuom.append(child)
    if not found:
        parent.append(ft)

parent = x3duom.find("AbstractNodeTypes")
antsuom = parent.find_all("AbstractNodeType")
ants = x_ite.find_all("AbstractNodeType")
for ant in ants:
    found = False
    for antuom in antsuom:
        if ant['name'] == antuom['name']:
            found = True
            #print(f"Found! {ant['name']}")
            for child in ant.find_all("field"):
                antuom.append(child)
    if not found:
        parent.append(ant)

parent = x3duom.find("AbstractObjectTypes")
aotsuom = parent.find_all("AbstractObjectType")
aots = x_ite.find_all("AbstractObjectType")
for aot in aots:
    found = False
    for aotuom in aotsuom:
        if aot['name'] == aotuom['name']:
            found = True
            #print(f"Found! {aot['name']}")
            for child in aot:
                aotuom.append(child)
    if not found:
        parent.append(aot)


parent = x3duom.find("ConcreteNodes")
cnsuom = parent.find_all("ConcreteNode")
cns = x_ite.find_all("ConcreteNode")
for cn in cns:
    found = False
    for cnuom in cnsuom:
        if cn['name'] == cnuom['name']:
            found = True
            #print(f"Found! {cn}")
            for child in cn.find_all("field"):
                #print(f"Found! Child! {str(child)}")
                cnuom.InterfaceDefinition.append(child)
    if not found:
        parent.append(cn)

parent = x3duom.find("Statements")
ssuom = parent.find_all("Statement")
ss = x_ite.find_all("Statement")
for s in ss:
    found = False
    for suom in ssuom:
        if s['name'] == suom['name']:
            found = True
            # print(f"Found! {s['name']}")
            for field in s.find_all("field"):
                # print(f"Found! Child! {field}")
                for fielduom in suom.find_all("field"):
                    if fielduom['name'] == field['name']:
                        # print(f"Found! {field['name']}")
                        for enu in field.find_all("enumeration"):
                            fielduom.append(enu)
    if not found:
        parent.append(s)

print(x3duom.prettify())
