import xml.etree.ElementTree
import re

class ClassPrinter:
    def __init__(self, node, metaInfo):
        self.node = node
        self.parents = []
        addinhers = self.node.iter("AdditionalInheritance")
        for addinher in addinhers:
            self.parents.append(addinher.get('baseType'))
        inhers = self.node.iter("Inheritance")
        for inher in inhers:
            self.parents.append(inher.get('baseType'))
        self.metaInfo = metaInfo
        self.printed = False
        try:
            if self.node:
                self.package = "fields"
                i = 0
                for ver in self.node.findall('.//InterfaceDefinition/componentInfo'):
                    self.package = ver.attrib.get('name', None)   # TODO too many components?
                    i = i + 1
                    # print(i, self.name, self.package)
            else:
                self.package = "xxx"
        except:
            self.package = "zzz"
            raise

        self.package = re.sub(r"-", "", self.package)
        if not self.node.get('name').startswith("X3D")  or self.node.get('name') == "X3D":
            self.imprt = "import org.web3d.x3d.jsail."+self.package+"."+self.node.get("name")+";\n"
        elif self.node.get("name") in [ "X3DField", "X3DArrayField" ]:

            self.imprt = "import org.web3d.x3d.sai."+self.node.get("name")+";\n"
        else:
            self.imprt = "import org.web3d.x3d.sai."+self.package+"."+self.node.get("name")+";\n"

    def printClass(self):
        str = ""
        if self.printed:
            return str
        for parent in self.parents:
            try:
                str += classes[parent].printClass()
            except:
                pass
        if not self.node.get('name').startswith("X3D")  or self.node.get('name') == "X3D":
            str += "case "+self.node.get('name')+" obj -> {\n"
            fields = self.node.iter("field")
            for field in fields:
                if field.get("type").endswith("FNode") and not field.get("name").startswith("add") and not field.get("name").startswith("remove") and not field.get("name") == "set_contacts":
                    try:
                        acceptableType = field.get("acceptableNodeTypes")
                        if acceptableType.find("|") >= 0:
                            raise
                    except:
                        acceptableType = field.get("type")
                    if acceptableType in ("X3DTexture2DNode") and field.get("name") == "texture":
                        if self.node.get('name').startswith("TextureProjector"):
                            pass
                        else:
                            acceptableType = "X3DNode[]"
                    elif acceptableType in ("X3DTexture2DNode"):
                        pass
                    elif acceptableType in ("X3DComposableVolumeRenderStyleNode") and field.get("name") == "renderStyle":
                        if self.node.get('name').endswith("BlendedVolumeStyle"):
                            pass
                        else:
                            acceptableType = "X3DNode[]"
                    elif acceptableType in ("X3DSingleTextureNode") and field.get("name") == "texture":
                        acceptableType = "X3DNode[]"
                    elif acceptableType in ("X3DSingleTextureNode"):
                        pass
                    elif acceptableType in ("X3DSingleTextureCoordinateNode") and field.get("name") == "texCoord":
                        if self.node.get('name').endswith("ElevationGrid"):
                            pass
                        else:
                            acceptableType = "X3DNode[]"
                    elif acceptableType in ("X3DNBodyCollidableNode") and field.get("name") in ("geometry", "intersections"):
                        acceptableType = "X3DNode[]"
                    elif acceptableType in ("X3DNBodyCollidableNode"):
                        pass
                    elif acceptableType in ("X3DVolumeRenderStyleNode") and field.get("name") == "renderStyle":
                        if self.node.get('name') == "VolumeData":
                            pass
                        else:
                            acceptableType = "X3DNode[]"
                    elif acceptableType in ("RigidBody") and field.get("name") == "bodies":
                        acceptableType = "X3DNode[]"
                    elif acceptableType in ("X3DNode") and field.get("name") == "data":
                        acceptableType = "X3DNode[]"
                    elif acceptableType in ("X3DMetadataObject") and field.get("name") == "value":
                        acceptableType = "X3DNode[]"
                    #elif acceptableType in ("X3DComposableVolumeRenderStyleNode", "X3DNBodyCollidableNode", "X3DSingleTextureCoordinateNode", "X3DSingleTextureNode", "X3DTexture2DNode", "X3DVolumeRenderStyleNode"):
                    #    print(f"{acceptableType} {field.get('name')}")
                    elif acceptableType in ("MFNode") and self.node.get('name') == "Scene":
                        acceptableType = "ArrayList<X3DNode>"
                    elif acceptableType in ("X3DChildNode", "MFNode", "X3DShaderNode", "CADFace", "Contact", "Contour2D", "DISEntityTypeMapping", "HAnimDisplacer", "HAnimJoint", "HAnimMotion", "HAnimSegment", "HAnimSite", "ShaderPart", "ShaderProgram", "X3DComposableVolumeRenderStyleNode", "X3DLayerNode", "X3DNBodyCollidableNode", "X3DParametricGeometryNode", "X3DParticlePhysicsModelNode", "X3DRigidJointNode", "X3DSingleTextureCoordinateNode", "X3DSingleTextureNode", "X3DSingleTextureTransformNode", "X3DTexture2DNode", "X3DUrlObject", "X3DVertexAttributeNode", "X3DVolumeRenderStyleNode"):
                        if  field.get("name") == "proxy":
                            pass
                        else:
                            acceptableType = "X3DNode[]"
                    elif acceptableType in ("SFNode"):
                        acceptableType = "X3DNode"
                    elif acceptableType in ("Shape", "AcousticProperties", "FillProperties", "LineProperties", "PointProperties"):
                        acceptableType = "org.web3d.x3d.sai.Shape."+acceptableType
                    elif acceptableType in ("RigidBody", "CollisionCollection"):
                        acceptableType = "org.web3d.x3d.sai.RigidBodyPhysics."+acceptableType
                    elif acceptableType in ("FogCoordinate"):
                        acceptableType = "org.web3d.x3d.sai.EnvironmentalEffects."+acceptableType
                    elif acceptableType in ("GeoOrigin"):
                        acceptableType = "org.web3d.x3d.sai.Geospatial."+acceptableType
                    elif acceptableType in ("NavigationInfo"):
                        acceptableType = "org.web3d.x3d.sai.Navigation."+acceptableType
                    elif acceptableType in ("NurbsCurve"):
                        acceptableType = "org.web3d.x3d.sai.NURBS."+acceptableType
                    elif acceptableType in ("TextureProperties"):
                        acceptableType = "org.web3d.x3d.sai.Texturing."+acceptableType
                    elif acceptableType in ("X3DNode") and field.get("name") == "children":
                        acceptableType = "ArrayList<X3DNode>"
                    elif acceptableType in ("component"):
                        acceptableType = "ArrayList<component>"
                    elif acceptableType in ("meta"):
                        acceptableType = "ArrayList<meta>"
                    elif acceptableType in ("unit"):
                        acceptableType = "ArrayList<unit>"
                    elif acceptableType in ("field"):
                        acceptableType = "ArrayList<field>"
                    elif acceptableType in ("fieldValue"):
                        acceptableType = "ArrayList<fieldValue>"
                    elif acceptableType in ("connect"):
                        acceptableType = "ArrayList<connect>"

                    fieldname = field.get("name")
                    if fieldname in ("meta", "unit", "component", "field", "fieldValue", "connect"):
                        fieldname += "List"
                    fieldname = fieldname[0].upper()+fieldname[1:]

                    str += "\t{\n"
                    if field.get("accessType") != "inputOnly":
                        str += '\t\t'+acceptableType+' children = obj.get'+fieldname+'();\n'
                    if field.get("accessType") != "outputOnly":
                        str += '\t\tremoveAll(children, toRemove);\n'
                        str += '\t\tobj.set'+fieldname+'(children);\n'
                    str += "\t}\n"
            str += "}\n"
        self.printed = True
        return str

code = "package net.coderextreme;\n\n"
code += "import java.util.HashSet;\n"
code += "import java.util.ArrayList;\n"
code += "import org.web3d.x3d.jsail.fields.MFNode;\n"
code += "import org.web3d.x3d.jsail.fields.SFNode;\n"

soup = xml.etree.ElementTree.parse(open("../../specifications/X3dUnifiedObjectModel-4.0.xml")).getroot()

classes = {}

ants = soup.iter("AbstractNodeType")
for ant in ants:
    classes[ant.get('name')] = ClassPrinter(ant, "")
    code += classes[ant.get('name')].imprt

aots = soup.iter("AbstractObjectType")
for aot in aots:
    classes[aot.get('name')] = ClassPrinter(aot, "")
    code += classes[aot.get('name')].imprt

cns = soup.iter("ConcreteNode")
for cn in cns:
    classes[cn.get('name')] = ClassPrinter(cn, "")
    code += classes[cn.get('name')].imprt

sts = soup.iter("Statement")
for st in sts:
    classes[st.get('name')] = ClassPrinter(st, "")
    code += classes[st.get('name')].imprt

code += "\n"
code += "public class Remove {\n"
code += "public void removeChildren(ArrayList children, HashSet toRemove) {\n"
code += "\tif (children != null) {\n"
code += "\t\tfor (int ci = 0; ci < children.size(); ci++) {\n"
code += "\t\t\tremoveNodes(children.get(ci), toRemove);\n"
code += "\t\t}\n"
code += "\t}\n"
code += "}\n"
code += "public void removeNodes(Object child, HashSet toRemove) {\n"
code += "switch (child) {\n"

for k,v in classes.items():
    code += v.printClass()

code += "default -> {\n"
code += "}\n"
code += "}\n"
code += "}\n"
code += "}\n"

f = open("../java/net/coderextreme/Remove.java", "w")
f.write(code)
f.close()
