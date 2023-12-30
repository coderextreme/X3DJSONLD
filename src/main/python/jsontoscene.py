from x3d import *
import json
import pprint
from xml.etree import ElementTree as ET
from X3Dautoclass import X3dClassLookup
# from X3DfieldTypes import X3dFieldTypesLookup
from X3Dmethods import X3dMethodLookup
from X3DaccessTypes import X3dAccessTypesLookup
import numbers
#def etree_to_dict(t):
#    if type(t) is ET.ElementTree:
#        return etree_to_dict(t.getroot())
#    children = []
#    for e in t:
#        children.append({
#            **e.attrib,
#            # 'text': t.text,
#            **{e.tag: etree_to_dict(e)}})
#    if children == []:
#        return None
#    return children
#
#tree = ET.parse("C:/x3d-code/www.web3d.org/x3d/content/examples/HelloWorld.x3d")
#dictionary = etree_to_dict(tree)
# pprint.pprint(dictionary)

def buildJson(parentprop=None, prop=None, value=None, childprop=None, childvalue=None, indent=0):
    if isinstance(value, str):
        #print(" " * indent, value)
        jsonout = value
    elif isinstance(value, int):
        #print(" " * indent, value)
        jsonout = value
    elif isinstance(value, float):
        #print(" " * indent, value)
        jsonout = value
    elif isinstance(value, list):
        jsonout = []
        count = 0
        for o in value:
            arrayel = buildJson(prop, count, o, None, None, indent+2)
            jsonout.append(arrayel)
            count = count + 1
    elif isinstance(value, dict):
        jsonout = {}
        for j,o in value.items():
            # print(" " * indent, j, ":")
            if j.startswith("-") or j.startswith("@") or j.startswith("#"):
                #j = j[1:]
                pass
            jsonout[j] = buildJson(prop, j, o, indent+2)
        if parentprop in ("meta", "component", "unit"):
            jsonout["tag"] = parentprop
        else:
            jsonout["tag"] = prop
    else:
            print("In buildJson, Unhandled %s of type %s" % (value, type(value)))
            jsonout = value
    return jsonout

def buildX3dObject(parentname, parentvalue, propertyname, propertyvalue, indent=0):
    x3dout = SFNode()
    tag = propertyvalue["tag"]
    if tag is not None and not isinstance(tag, numbers.Real) and not tag.startswith("-") and not tag.startswith("@"):
        clazz = X3dClassLookup[tag]  # look up class in secure table
        x3dout = clazz()  # instantiate an X3D class
    if isinstance(propertyvalue, dict):
        for x,o in propertyvalue.items():
            try:
                if x == "tag":
                    tag = o
                    continue
                print("0. Trying to set %s.%s.%s.%s" % (tag, propertyname, x, o))
                if x in ("#comment"):
                    print("1. Trying to set comment %s = %s" % (x, o))
                    comment = Comment(o)
                    # TODO, this should append to children
                    setattr(x3dout, "children", comment)
                elif x in ("JSON schema", "encoding", "@xsd:noNamespaceSchemaLocation"):
                    continue
                elif x.startswith("-") or x.startswith("@"):
                    x = x[1:]
                    field = buildX3d(tag, propertyvalue, x, o, indent+2)
                    print(f"Warning, Field is {x3dout}.{x}.{field} prop {propertyname} value {o}")
                    try:
                        if field is not None:
                            if X3dAccessTypesLookup[tag][x] not in ( "initializeOnly", "outputOnly"):  # Attempt to be secure
                                setattr(x3dout, x, field);
                    except (X3DTypeError, KeyError):
                        print("Error: %s.%s.%s not found" % (x3dout, x, field))
                        pass
                elif tag is not None and not isinstance(tag, numbers.Real) and not tag.startswith("-") and not tag.startswith("@"):
                    print("3. Trying to set %s %s %s %s" % (tag, propertyname, x, o))
                    if X3dMethodLookup[tag] is not None:
                        print(f"Method lookup enabled, looking for {tag}.{x} in {X3dMethodLookup[tag]}")
                        if X3dMethodLookup[tag][x] is not None:
                            print(f"Method lookup done, accesss testing for {X3dMethodLookup[tag][x]}")
                            if X3dAccessTypesLookup[tag][x] != "outputOnly":  # Attempt to be secure
                                print(f"Access to {tag}.{x} granted")
                                # get setter method
                                setattr(x3dout, x, buildX3d(propertyname, propertyvalue, x, o, indent+2))
                            else:
                                print(f"You can't set the value of {tag}.{x} denied")
                        else:
                            print(f"There is no {tag}.{x} in method lookup")
                    else:
                        print(f"That class,  {tag}, does not exist in method lookup")
                else:
                    print("6. Trying to set %s" % (x))
                    setattr(x3dout, x, buildX3d(tag, propertyvalue, x, o, indent+2))
            except KeyError:
                print("KeyError: %s.%s.%s not found" % (parentname, propertyname, x))
                raise
    else:
            print("DUDE, What are you making an object from? %s.%s" % (propertyname, propertyvalue))
    print("0. Returning %s" % x3dout)
    return x3dout


def buildX3dArray(parentname, parentvalue, propertyname, propertyvalue, indent=0):
    print("buildX3dArray %s\n--%s\n--%s\n--%s\n" % (parentname, parentvalue, propertyname, propertyvalue[0]))
    x3dout = []
    if isinstance(propertyvalue[0], str):
        x3dout = propertyvalue
    elif isinstance(propertyvalue[0], int):
        x3dout = MFInt32(propertyvalue)
    elif isinstance(propertyvalue[0], bool):
        x3dout = x3d.MFBoolean(propertyvalue)
    elif isinstance(propertyvalue[0], float):
        x3dout = MFFloat(propertyvalue)
    elif isinstance(propertyvalue[0], dict):
        #try:
            count = 0
            for count in range(len(propertyvalue)):
                print("HEY parent %s, count %s, obj %s" % (parentname, str(count), propertyvalue[count]))
                obj = buildX3d(parentname, parentvalue, count, propertyvalue[count], indent+2)
                print(f"X3D {x3dout} OBJ {obj}")
                x3dout.append(obj)
                count = count + 1
            # setattr(x3dout, propertyname, array)
        #except:
        #    print("Couldn't find containerField for parent %s\n-- property %s\n-- x %s\n--%s\n--%s\n" % (parentname, propertyname, x, parentvalue, propertyvalue))
    else:
            print("In buildX3dArray, Unhandled ? %s.%s of type %s" % (propertyname, propertyvalue, type(propertyvalue)))
    print("A. Returning %s" % x3dout)
    return x3dout

def buildX3d(parentname, parentvalue, propertyname, propertyvalue, indent=0):
    print("buildX3d %s\n--%s\n--%s\n--%s\n" % (parentname, parentvalue, propertyname, propertyvalue))
    if isinstance(propertyvalue, str):
        x3dout = propertyvalue
    elif isinstance(propertyvalue, int):
        x3dout = SFInt32(propertyvalue)
    elif isinstance(propertyvalue, bool):
        x3dout = SFBoolean(propertyvalue)
    elif isinstance(propertyvalue, float):
        x3dout = SFFloat(propertyvalue)
    elif isinstance(propertyvalue, list):
        x3dout = buildX3dArray(parentname, parentvalue, propertyname, propertyvalue, indent+2)
    elif isinstance(propertyvalue, dict):
        x3dout = buildX3dObject(parentname, parentvalue, propertyname, propertyvalue, indent+2)
    else:
        print("In buildX3d, Unhandled %s of type %s" % (propertyvalue, type(propertyvalue)))
        x3dout = propertyvalue
    print("D. Returning %s" % x3dout)
    return x3dout

with open("../data/ball.json") as f:
    dictionary = json.load(f)
    # pprint.pprint(dictionary)
    jsonout = buildJson(value=dictionary)
    pprint.pprint(jsonout)
    x3dout = buildX3d(None, None, "X3D", jsonout["X3D"], 0)
    print(x3dout.XML())
    print("DONE")
