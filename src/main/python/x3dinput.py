import json
from x3d import *
from x3d import _X3DNode

class JSON_X3D(X3D):
    def parseJSON(self, data):
        if '@version' in data:
            self.version = data["@version"]
        if '@profile' in data:
            self.profile = data["@profile"]
        if 'head' in data:
            self.head = JSON_head()
            self.head.parseJSON(data["head"])
        if 'Scene' in data:
            self.Scene = JSON_Scene()
            self.Scene.parseJSON(data["Scene"])
        return self

class JSON_head(head):
    def parseJSON(self, data):
        self.children = JSON_MFNode("head")
        self.children.parseJSON(data)
        self.children = tuple(self.children.value)
        return self

class JSON_Scene(Scene):
    def parseJSON(self, data):
        if '-children' in data:
            self.children = JSON_MFNode("Scene")
            self.children.parseJSON(data)
            self.children = tuple(self.children.value)
        return self

class JSON_FontStyle(FontStyle):
    def parseJSON(self, data):
        if '@justify' in data:
            self.justify = '" "'.join(data["@justify"])
        return self

class JSON_Text(Text):
    def parseJSON(self, data):
        if '@DEF' in data:
            self.DEF = data["@DEF"]
        if '@string' in data:
            self.string = '" "'.join(data["@string"])
        if '-fontStyle' in data:
            self.fontStyle = JSON_FontStyle()
            self.fontStyle.parseJSON(data["-fontStyle"]["FontStyle"])
        return self

class JSON_Sphere(Sphere):
    def parseJSON(self, data):
        if '@radius' in data:
            self.radius = JSON_SFFloat()
            self.radius.parseJSON(data["@radius"])
        return self

class JSON_Appearance(Appearance):
    def parseJSON(self, data):
        if '-children' in data:
            self.children = JSON_MFNode("Appearance")
            self.children.parseJSON(data)
            self.children = tuple(self.children.value)
        if '-material' in data:
            self.material = JSON_Material()
            self.material.parseJSON(data["-material"]["Material"])
        if '-texture' in data:
            self.texture = JSON_ImageTexture()
            self.texture.parseJSON(data["-texture"]["ImageTexture"])
        return self

class JSON_ImageTexture(ImageTexture):
    def parseJSON(self, data):
        if '@DEF' in data:
            self.DEF = data["@DEF"]
        if '@url' in data:
            self.url = '" "'.join(data["@url"])
        return self

class JSON_Material(Material):
    def parseJSON(self, data):
        if '@DEF' in data:
            self.DEF = data["@DEF"]
        if '@USE' in data:
            self.USE = data["@USE"]
        if '@diffuseColor' in data:
            self.diffuseColor = tuple(data["@diffuseColor"])
        return self

class JSON_Shape(Shape):
    def parseJSON(self, data):
        if '-appearance' in data:
            self.appearance = JSON_Appearance()
            self.appearance.parseJSON(data["-appearance"]["Appearance"])
        if '-geometry' in data:
            # note that this loop should only do one iteration, otherwise
            for key in data["-geometry"]:
                self.geometry = eval("JSON_"+key)()
                self.geometry.parseJSON(data["-geometry"][key])
        return self

class JSON_Group(Group):
    def parseJSON(self, data):
        if '-children' in data:
            self.children = JSON_MFNode("Group")
            self.children.parseJSON(data)
            self.children = tuple(self.children.value)
        return self

class JSON_Transform(Transform):
    def parseJSON(self, data):
        if '@rotation' in data:
            self.rotation = JSON_SFRotation()
            self.rotation.parseJSON(data["@rotation"])
        if '@translation' in data:
            self.translation = JSON_SFVec3f()
            self.translation.parseJSON(data["@translation"])
        if '-children' in data:
            self.children = JSON_MFNode("Transform")
            self.children.parseJSON(data)
            self.children = tuple(self.children.value)
        return self

class JSON_component(component):
    def parseJSON(self, data):
        if '@name' in data:
            self.name = data["@name"]
        if '@level' in data:
            self.level = data["@level"]
        return self

class JSON_unit(unit):
    def parseJSON(self, data):
        if '@name' in data:
            self.name = data["@name"]
        if '@category' in data:
            self.category = data["@category"]
        return self

class JSON_meta(meta):
    def parseJSON(self, data):
        if '@name' in data:
            self.name = data["@name"]
        if '@content' in data:
            self.content = data["@content"]
        return self

class JSON_WorldInfo(WorldInfo):
    def parseJSON(self, data):
        if '@info' in data:
            self.info = data["@info"]
        if '@title' in data:
            self.title = data["@title"]
        return self

class JSON_SFRotation(SFRotation):
    def parseJSON(self, data):
        self.value = tuple(data)
        return self

class JSON_Comment(Comment):
    def parseJSON(self, data):
        self.value = str(data)
        return self

class JSON_SFFloat(SFFloat):
    def parseJSON(self, data):
        self.value = float(data)
        return self

class JSON_SFVec3f(SFVec3f):
    def parseJSON(self, data):
        self.value = tuple(data)
        return self

class JSON_Viewpoint(Viewpoint):
    def parseJSON(self, data):
        if '@DEF' in data:
            self.DEF = data["@DEF"]
        if '@centerOfRotation' in data:
            self.centerOfRotation = JSON_SFVec3f()
            self.centerOfRotation.parseJSON((data["@centerOfRotation"]))
        if '@description' in data:
            self.description = data["@description"]
        if '@position' in data:
            self.position = JSON_SFVec3f()
            self.position.parseJSON(data["@position"])
        return self


class JSON_SFNode(SFNode, _X3DNode):
    def parseJSON(self, data):
        for key in data:
            if key.startswith('-') or key.startswith('#'):
                self.value = eval("JSON_"+key[1:2].upper()+key[2:])()
            else:
                self.value = eval("JSON_"+key)()
            self.value.parseJSON(data[key])
        return self

class JSON_MFNode(MFNode):
    def __init__(self, parent=None, value=None):
        super().__init__(value=value)
        self.parent = parent
    def parseJSON(self, data):
        self.value = []
        if '-children' in data:
            for c in data["-children"]:
                sfnode = JSON_SFNode()
                sfnode.parseJSON(c)
                self.value.append(sfnode)
        if self.parent == 'head':
            if 'component' in data:
                for p in data["component"]:
                    componentchild = JSON_component()
                    componentchild.parseJSON(m)
                    self.value.append(componentchild)
            if 'unit' in data:
                for u in data["unit"]:
                    unitchild = JSON_unit()
                    unitchild.parseJSON(m)
                    self.value.append(unitchild)
            if 'meta' in data:
                for m in data["meta"]:
                    metachild = JSON_meta()
                    metachild.parseJSON(m)
                    self.value.append(metachild)
        return self

with open('../data/HelloWorld.json', encoding="utf-8") as json_file:
    data = json.load(json_file)
    newscene = JSON_X3D()
    scene = newscene.parseJSON(data["X3D"])
    print(scene.JSON(indentLevel=0, syntax="XML"))

with open('../personal/rubik.json', encoding="utf-8") as json_file:
    data = json.load(json_file)
    newscene = JSON_X3D()
    scene = newscene.parseJSON(data["X3D"])
    print(scene.JSON(indentLevel=0, syntax="XML"))
