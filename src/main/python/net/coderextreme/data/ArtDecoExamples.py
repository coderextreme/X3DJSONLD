print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.1"
head1 = x3d.head()
meta2 = x3d.meta()
meta2.name = "title"
meta2.content = "ArtDecoExamples.x3d"

head1.children.append(meta2)
meta3 = x3d.meta()
meta3.name = "description"
meta3.content = "Example ExternProtoDeclare/ProtoInstance usage of X3D/VRML materials, originally converted from SGI's Open Inventor material examples."

head1.children.append(meta3)
meta4 = x3d.meta()
meta4.name = "creator"
meta4.content = "David Roussel"

head1.children.append(meta4)
meta5 = x3d.meta()
meta5.name = "translator"
meta5.content = "James Harney, Don Brutzman NPS"

head1.children.append(meta5)
meta6 = x3d.meta()
meta6.name = "created"
meta6.content = "7 April 2002"

head1.children.append(meta6)
meta7 = x3d.meta()
meta7.name = "modified"
meta7.content = "Mon, 09 Feb 2026 12:22:57 GMT"

head1.children.append(meta7)
meta8 = x3d.meta()
meta8.name = "reference"
meta8.content = "http://vrmlstuff.free.fr/materials"

head1.children.append(meta8)
meta9 = x3d.meta()
meta9.name = "subject"
meta9.content = "Universal Media Material Library"

head1.children.append(meta9)
meta10 = x3d.meta()
meta10.name = "identifier"
meta10.content = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoExamples.x3d"

head1.children.append(meta10)

X3D0.head = head1
Scene11 = x3d.Scene()
ExternProtoDeclare12 = x3d.ExternProtoDeclare()
ExternProtoDeclare12.name = "ArtDeco00"
ExternProtoDeclare12.appinfo = "UniversalMediaMaterials prototype"
ExternProtoDeclare12.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ExternProtoDeclare12.url = ["../data/ArtDecoPrototypes.json#ArtDeco00","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco00","ArtDecoPrototypes.wrl#ArtDeco00","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco00"]

Scene11.children.append(ExternProtoDeclare12)
ExternProtoDeclare13 = x3d.ExternProtoDeclare()
ExternProtoDeclare13.name = "ArtDeco01"
ExternProtoDeclare13.appinfo = "UniversalMediaMaterials prototype"
ExternProtoDeclare13.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ExternProtoDeclare13.url = ["../data/ArtDecoPrototypes.json#ArtDeco01","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco01","ArtDecoPrototypes.wrl#ArtDeco01","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco01"]

Scene11.children.append(ExternProtoDeclare13)
ExternProtoDeclare14 = x3d.ExternProtoDeclare()
ExternProtoDeclare14.name = "ArtDeco02"
ExternProtoDeclare14.appinfo = "UniversalMediaMaterials prototype"
ExternProtoDeclare14.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ExternProtoDeclare14.url = ["../data/ArtDecoPrototypes.json#ArtDeco02","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco02","ArtDecoPrototypes.wrl#ArtDeco02","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco02"]

Scene11.children.append(ExternProtoDeclare14)
ExternProtoDeclare15 = x3d.ExternProtoDeclare()
ExternProtoDeclare15.name = "ArtDeco03"
ExternProtoDeclare15.appinfo = "UniversalMediaMaterials prototype"
ExternProtoDeclare15.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ExternProtoDeclare15.url = ["../data/ArtDecoPrototypes.json#ArtDeco03","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco03","ArtDecoPrototypes.wrl#ArtDeco03","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco03"]

Scene11.children.append(ExternProtoDeclare15)
ExternProtoDeclare16 = x3d.ExternProtoDeclare()
ExternProtoDeclare16.name = "ArtDeco04"
ExternProtoDeclare16.appinfo = "UniversalMediaMaterials prototype"
ExternProtoDeclare16.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ExternProtoDeclare16.url = ["../data/ArtDecoPrototypes.json#ArtDeco04","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco04","ArtDecoPrototypes.wrl#ArtDeco04","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco04"]

Scene11.children.append(ExternProtoDeclare16)
ExternProtoDeclare17 = x3d.ExternProtoDeclare()
ExternProtoDeclare17.name = "ArtDeco05"
ExternProtoDeclare17.appinfo = "UniversalMediaMaterials prototype"
ExternProtoDeclare17.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ExternProtoDeclare17.url = ["../data/ArtDecoPrototypes.json#ArtDeco05","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco05","ArtDecoPrototypes.wrl#ArtDeco05","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco05"]

Scene11.children.append(ExternProtoDeclare17)
ExternProtoDeclare18 = x3d.ExternProtoDeclare()
ExternProtoDeclare18.name = "ArtDeco06"
ExternProtoDeclare18.appinfo = "UniversalMediaMaterials prototype"
ExternProtoDeclare18.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ExternProtoDeclare18.url = ["../data/ArtDecoPrototypes.json#ArtDeco06","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco06","ArtDecoPrototypes.wrl#ArtDeco06","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco06"]

Scene11.children.append(ExternProtoDeclare18)
ExternProtoDeclare19 = x3d.ExternProtoDeclare()
ExternProtoDeclare19.name = "ArtDeco07"
ExternProtoDeclare19.appinfo = "UniversalMediaMaterials prototype"
ExternProtoDeclare19.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ExternProtoDeclare19.url = ["../data/ArtDecoPrototypes.json#ArtDeco07","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco07","ArtDecoPrototypes.wrl#ArtDeco07","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco07"]

Scene11.children.append(ExternProtoDeclare19)
ExternProtoDeclare20 = x3d.ExternProtoDeclare()
ExternProtoDeclare20.name = "ArtDeco08"
ExternProtoDeclare20.appinfo = "UniversalMediaMaterials prototype"
ExternProtoDeclare20.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ExternProtoDeclare20.url = ["../data/ArtDecoPrototypes.json#ArtDeco08","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco08","ArtDecoPrototypes.wrl#ArtDeco08","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco08"]

Scene11.children.append(ExternProtoDeclare20)
ExternProtoDeclare21 = x3d.ExternProtoDeclare()
ExternProtoDeclare21.name = "ArtDeco09"
ExternProtoDeclare21.appinfo = "UniversalMediaMaterials prototype"
ExternProtoDeclare21.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ExternProtoDeclare21.url = ["../data/ArtDecoPrototypes.json#ArtDeco09","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco09","ArtDecoPrototypes.wrl#ArtDeco09","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco09"]

Scene11.children.append(ExternProtoDeclare21)
ExternProtoDeclare22 = x3d.ExternProtoDeclare()
ExternProtoDeclare22.name = "ArtDeco10"
ExternProtoDeclare22.appinfo = "UniversalMediaMaterials prototype"
ExternProtoDeclare22.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ExternProtoDeclare22.url = ["../data/ArtDecoPrototypes.json#ArtDeco10","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco10","ArtDecoPrototypes.wrl#ArtDeco10","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco10"]

Scene11.children.append(ExternProtoDeclare22)
ExternProtoDeclare23 = x3d.ExternProtoDeclare()
ExternProtoDeclare23.name = "ArtDeco11"
ExternProtoDeclare23.appinfo = "UniversalMediaMaterials prototype"
ExternProtoDeclare23.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ExternProtoDeclare23.url = ["../data/ArtDecoPrototypes.json#ArtDeco11","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco11","ArtDecoPrototypes.wrl#ArtDeco11","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco11"]

Scene11.children.append(ExternProtoDeclare23)
ExternProtoDeclare24 = x3d.ExternProtoDeclare()
ExternProtoDeclare24.name = "ArtDeco12"
ExternProtoDeclare24.appinfo = "UniversalMediaMaterials prototype"
ExternProtoDeclare24.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ExternProtoDeclare24.url = ["../data/ArtDecoPrototypes.json#ArtDeco12","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco12","ArtDecoPrototypes.wrl#ArtDeco12","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco12"]

Scene11.children.append(ExternProtoDeclare24)
ExternProtoDeclare25 = x3d.ExternProtoDeclare()
ExternProtoDeclare25.name = "ArtDeco13"
ExternProtoDeclare25.appinfo = "UniversalMediaMaterials prototype"
ExternProtoDeclare25.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ExternProtoDeclare25.url = ["../data/ArtDecoPrototypes.json#ArtDeco13","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco13","ArtDecoPrototypes.wrl#ArtDeco13","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco13"]

Scene11.children.append(ExternProtoDeclare25)
ExternProtoDeclare26 = x3d.ExternProtoDeclare()
ExternProtoDeclare26.name = "ArtDeco14"
ExternProtoDeclare26.appinfo = "UniversalMediaMaterials prototype"
ExternProtoDeclare26.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ExternProtoDeclare26.url = ["../data/ArtDecoPrototypes.json#ArtDeco14","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco14","ArtDecoPrototypes.wrl#ArtDeco14","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco14"]

Scene11.children.append(ExternProtoDeclare26)
ExternProtoDeclare27 = x3d.ExternProtoDeclare()
ExternProtoDeclare27.name = "ArtDeco15"
ExternProtoDeclare27.appinfo = "UniversalMediaMaterials prototype"
ExternProtoDeclare27.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ExternProtoDeclare27.url = ["../data/ArtDecoPrototypes.json#ArtDeco15","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco15","ArtDecoPrototypes.wrl#ArtDeco15","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco15"]

Scene11.children.append(ExternProtoDeclare27)
ExternProtoDeclare28 = x3d.ExternProtoDeclare()
ExternProtoDeclare28.name = "ArtDeco16"
ExternProtoDeclare28.appinfo = "UniversalMediaMaterials prototype"
ExternProtoDeclare28.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ExternProtoDeclare28.url = ["../data/ArtDecoPrototypes.json#ArtDeco16","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco16","ArtDecoPrototypes.wrl#ArtDeco16","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco16"]

Scene11.children.append(ExternProtoDeclare28)
ExternProtoDeclare29 = x3d.ExternProtoDeclare()
ExternProtoDeclare29.name = "ArtDeco17"
ExternProtoDeclare29.appinfo = "UniversalMediaMaterials prototype"
ExternProtoDeclare29.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ExternProtoDeclare29.url = ["../data/ArtDecoPrototypes.json#ArtDeco17","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco17","ArtDecoPrototypes.wrl#ArtDeco17","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco17"]

Scene11.children.append(ExternProtoDeclare29)
ExternProtoDeclare30 = x3d.ExternProtoDeclare()
ExternProtoDeclare30.name = "ArtDeco18"
ExternProtoDeclare30.appinfo = "UniversalMediaMaterials prototype"
ExternProtoDeclare30.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ExternProtoDeclare30.url = ["../data/ArtDecoPrototypes.json#ArtDeco18","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco18","ArtDecoPrototypes.wrl#ArtDeco18","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco18"]

Scene11.children.append(ExternProtoDeclare30)
ExternProtoDeclare31 = x3d.ExternProtoDeclare()
ExternProtoDeclare31.name = "ArtDeco19"
ExternProtoDeclare31.appinfo = "UniversalMediaMaterials prototype"
ExternProtoDeclare31.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ExternProtoDeclare31.url = ["../data/ArtDecoPrototypes.json#ArtDeco19","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco19","ArtDecoPrototypes.wrl#ArtDeco19","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco19"]

Scene11.children.append(ExternProtoDeclare31)
ExternProtoDeclare32 = x3d.ExternProtoDeclare()
ExternProtoDeclare32.name = "ArtDeco20"
ExternProtoDeclare32.appinfo = "UniversalMediaMaterials prototype"
ExternProtoDeclare32.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ExternProtoDeclare32.url = ["../data/ArtDecoPrototypes.json#ArtDeco20","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco20","ArtDecoPrototypes.wrl#ArtDeco20","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco20"]

Scene11.children.append(ExternProtoDeclare32)
ExternProtoDeclare33 = x3d.ExternProtoDeclare()
ExternProtoDeclare33.name = "ArtDeco21"
ExternProtoDeclare33.appinfo = "UniversalMediaMaterials prototype"
ExternProtoDeclare33.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ExternProtoDeclare33.url = ["../data/ArtDecoPrototypes.json#ArtDeco21","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco21","ArtDecoPrototypes.wrl#ArtDeco21","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco21"]

Scene11.children.append(ExternProtoDeclare33)
ExternProtoDeclare34 = x3d.ExternProtoDeclare()
ExternProtoDeclare34.name = "ArtDeco22"
ExternProtoDeclare34.appinfo = "UniversalMediaMaterials prototype"
ExternProtoDeclare34.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ExternProtoDeclare34.url = ["../data/ArtDecoPrototypes.json#ArtDeco22","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco22","ArtDecoPrototypes.wrl#ArtDeco22","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco22"]

Scene11.children.append(ExternProtoDeclare34)
ExternProtoDeclare35 = x3d.ExternProtoDeclare()
ExternProtoDeclare35.name = "ArtDeco23"
ExternProtoDeclare35.appinfo = "UniversalMediaMaterials prototype"
ExternProtoDeclare35.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ExternProtoDeclare35.url = ["../data/ArtDecoPrototypes.json#ArtDeco23","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco23","ArtDecoPrototypes.wrl#ArtDeco23","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco23"]

Scene11.children.append(ExternProtoDeclare35)
ExternProtoDeclare36 = x3d.ExternProtoDeclare()
ExternProtoDeclare36.name = "ArtDeco24"
ExternProtoDeclare36.appinfo = "UniversalMediaMaterials prototype"
ExternProtoDeclare36.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ExternProtoDeclare36.url = ["../data/ArtDecoPrototypes.json#ArtDeco24","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco24","ArtDecoPrototypes.wrl#ArtDeco24","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco24"]

Scene11.children.append(ExternProtoDeclare36)
ExternProtoDeclare37 = x3d.ExternProtoDeclare()
ExternProtoDeclare37.name = "ArtDeco25"
ExternProtoDeclare37.appinfo = "UniversalMediaMaterials prototype"
ExternProtoDeclare37.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ExternProtoDeclare37.url = ["../data/ArtDecoPrototypes.json#ArtDeco25","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco25","ArtDecoPrototypes.wrl#ArtDeco25","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco25"]

Scene11.children.append(ExternProtoDeclare37)
ExternProtoDeclare38 = x3d.ExternProtoDeclare()
ExternProtoDeclare38.name = "ArtDeco26"
ExternProtoDeclare38.appinfo = "UniversalMediaMaterials prototype"
ExternProtoDeclare38.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ExternProtoDeclare38.url = ["../data/ArtDecoPrototypes.json#ArtDeco26","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco26","ArtDecoPrototypes.wrl#ArtDeco26","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco26"]

Scene11.children.append(ExternProtoDeclare38)
ExternProtoDeclare39 = x3d.ExternProtoDeclare()
ExternProtoDeclare39.name = "ArtDeco27"
ExternProtoDeclare39.appinfo = "UniversalMediaMaterials prototype"
ExternProtoDeclare39.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ExternProtoDeclare39.url = ["../data/ArtDecoPrototypes.json#ArtDeco27","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco27","ArtDecoPrototypes.wrl#ArtDeco27","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco27"]

Scene11.children.append(ExternProtoDeclare39)
ExternProtoDeclare40 = x3d.ExternProtoDeclare()
ExternProtoDeclare40.name = "ArtDeco28"
ExternProtoDeclare40.appinfo = "UniversalMediaMaterials prototype"
ExternProtoDeclare40.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ExternProtoDeclare40.url = ["../data/ArtDecoPrototypes.json#ArtDeco28","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco28","ArtDecoPrototypes.wrl#ArtDeco28","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco28"]

Scene11.children.append(ExternProtoDeclare40)
ExternProtoDeclare41 = x3d.ExternProtoDeclare()
ExternProtoDeclare41.name = "ArtDeco29"
ExternProtoDeclare41.appinfo = "UniversalMediaMaterials prototype"
ExternProtoDeclare41.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ExternProtoDeclare41.url = ["../data/ArtDecoPrototypes.json#ArtDeco29","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco29","ArtDecoPrototypes.wrl#ArtDeco29","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco29"]

Scene11.children.append(ExternProtoDeclare41)
ExternProtoDeclare42 = x3d.ExternProtoDeclare()
ExternProtoDeclare42.name = "ArtDeco30"
ExternProtoDeclare42.appinfo = "UniversalMediaMaterials prototype"
ExternProtoDeclare42.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ExternProtoDeclare42.url = ["../data/ArtDecoPrototypes.json#ArtDeco30","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco30","ArtDecoPrototypes.wrl#ArtDeco30","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco30"]

Scene11.children.append(ExternProtoDeclare42)
ExternProtoDeclare43 = x3d.ExternProtoDeclare()
ExternProtoDeclare43.name = "ArtDeco31"
ExternProtoDeclare43.appinfo = "UniversalMediaMaterials prototype"
ExternProtoDeclare43.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ExternProtoDeclare43.url = ["../data/ArtDecoPrototypes.json#ArtDeco31","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco31","ArtDecoPrototypes.wrl#ArtDeco31","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco31"]

Scene11.children.append(ExternProtoDeclare43)
ExternProtoDeclare44 = x3d.ExternProtoDeclare()
ExternProtoDeclare44.name = "ArtDeco32"
ExternProtoDeclare44.appinfo = "UniversalMediaMaterials prototype"
ExternProtoDeclare44.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ExternProtoDeclare44.url = ["../data/ArtDecoPrototypes.json#ArtDeco32","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco32","ArtDecoPrototypes.wrl#ArtDeco32","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco32"]

Scene11.children.append(ExternProtoDeclare44)
ExternProtoDeclare45 = x3d.ExternProtoDeclare()
ExternProtoDeclare45.name = "ArtDeco33"
ExternProtoDeclare45.appinfo = "UniversalMediaMaterials prototype"
ExternProtoDeclare45.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ExternProtoDeclare45.url = ["../data/ArtDecoPrototypes.json#ArtDeco33","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco33","ArtDecoPrototypes.wrl#ArtDeco33","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco33"]

Scene11.children.append(ExternProtoDeclare45)
ExternProtoDeclare46 = x3d.ExternProtoDeclare()
ExternProtoDeclare46.name = "ArtDeco34"
ExternProtoDeclare46.appinfo = "UniversalMediaMaterials prototype"
ExternProtoDeclare46.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ExternProtoDeclare46.url = ["../data/ArtDecoPrototypes.json#ArtDeco34","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco34","ArtDecoPrototypes.wrl#ArtDeco34","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco34"]

Scene11.children.append(ExternProtoDeclare46)
WorldInfo47 = x3d.WorldInfo()
WorldInfo47.title = "ArtDecoExamples.x3d"

Scene11.children.append(WorldInfo47)
Group48 = x3d.Group()
NavigationInfo49 = x3d.NavigationInfo()
NavigationInfo49.headlight = False

Group48.children.append(NavigationInfo49)
Viewpoint50 = x3d.Viewpoint(DEF="Front")
Viewpoint50.description = "Front view"
Viewpoint50.position = [0,0,12]

Group48.children.append(Viewpoint50)
Viewpoint51 = x3d.Viewpoint(DEF="PersRight")
Viewpoint51.description = "Low Right"
Viewpoint51.position = [6.9282,-6.9282,6.9282]
Viewpoint51.orientation = [0.74291,0.30772,0.59447,1.2171]

Group48.children.append(Viewpoint51)
Viewpoint52 = x3d.Viewpoint(DEF="PersLeft")
Viewpoint52.description = "Low Left"
Viewpoint52.position = [-6.9282,-6.9282,6.9282]
Viewpoint52.orientation = [0.74291,-0.30772,-0.59447,1.2171]

Group48.children.append(Viewpoint52)
Viewpoint53 = x3d.Viewpoint(DEF="Back")
Viewpoint53.description = "Back view"
Viewpoint53.position = [0,0,-12]
Viewpoint53.orientation = [0,1,0,3.1416]

Group48.children.append(Viewpoint53)
Transform54 = x3d.Transform(DEF="Close_travel")
Transform54.translation = [0,0.6883332,0]
PositionInterpolator55 = x3d.PositionInterpolator(DEF="Close_Mover")
PositionInterpolator55.key = [0,0.25,0.5,0.75,1]
PositionInterpolator55.keyValue = [(0, 2.5, 0),(0, 0, 0),(0, -2.5, 0),(0, 0, 0),(0, 2.5, 0)]

Transform54.children.append(PositionInterpolator55)
TimeSensor56 = x3d.TimeSensor(DEF="Close_Time")
TimeSensor56.cycleInterval = 12
TimeSensor56.loop = True

Transform54.children.append(TimeSensor56)
Viewpoint57 = x3d.Viewpoint(DEF="Close")
Viewpoint57.description = "Close Front"
Viewpoint57.position = [0,0,6]

Transform54.children.append(Viewpoint57)

Group48.children.append(Transform54)
DirectionalLight58 = x3d.DirectionalLight()
DirectionalLight58.direction = [1,-1,-1]

Group48.children.append(DirectionalLight58)
DirectionalLight59 = x3d.DirectionalLight()
DirectionalLight59.intensity = 0.5
DirectionalLight59.direction = [0,1,-0.5]

Group48.children.append(DirectionalLight59)
Anchor60 = x3d.Anchor()
Anchor60.description = "Return to front view"
Anchor60.url = ["#Front"]
Transform61 = x3d.Transform()
Transform61.translation = [0,0,-0.5]
Inline62 = x3d.Inline()
Inline62.url = ["../data/gridBack.json","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/gridBack.x3d","gridBack.wrl","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/gridBack.wrl"]

Transform61.children.append(Inline62)

Anchor60.children.append(Transform61)

Group48.children.append(Anchor60)
Viewpoint63 = x3d.Viewpoint(DEF="View00")
Viewpoint63.description = "ArtDeco00"
Viewpoint63.position = [-3.75,3.75,3]

Group48.children.append(Viewpoint63)
Transform64 = x3d.Transform()
Transform64.translation = [-3.75,3.75,0]
Anchor65 = x3d.Anchor()
Anchor65.description = "ArtDeco00 view"
Anchor65.url = ["#View00"]
Shape66 = x3d.Shape()
Appearance67 = x3d.Appearance()
ProtoInstance68 = x3d.ProtoInstance()
ProtoInstance68.name = "ArtDeco00"

Appearance67.material = ProtoInstance68

Shape66.appearance = Appearance67
Sphere69 = x3d.Sphere(DEF="Ball")
Sphere69.radius = 0.5

Shape66.geometry = Sphere69

Anchor65.children.append(Shape66)

Transform64.children.append(Anchor65)
Transform70 = x3d.Transform()
Transform70.translation = [0,0.3,0.5]
Anchor71 = x3d.Anchor()
Anchor71.description = "ArtDeco00 view source documentation"
Anchor71.url = ["../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco00","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco00"]
Anchor71.parameter = ["target=_source"]
Shape72 = x3d.Shape()
Appearance73 = x3d.Appearance()
Material74 = x3d.Material(DEF="TextMat")
Material74.diffuseColor = [1,1,1]

Appearance73.material = Material74

Shape72.appearance = Appearance73
Text75 = x3d.Text()
Text75.string = ["ArtDeco00"]
FontStyle76 = x3d.FontStyle(DEF="Style")
FontStyle76.family = ["SANS"]
FontStyle76.style = "BOLD"
FontStyle76.size = 0.3
FontStyle76.justify = ["MIDDLE","MIDDLE"]

Text75.fontStyle = FontStyle76

Shape72.geometry = Text75

Anchor71.children.append(Shape72)

Transform70.children.append(Anchor71)

Transform64.children.append(Transform70)

Group48.children.append(Transform64)
Viewpoint77 = x3d.Viewpoint(DEF="View01")
Viewpoint77.description = "ArtDeco01"
Viewpoint77.position = [-2.25,3.75,3]

Group48.children.append(Viewpoint77)
Transform78 = x3d.Transform()
Transform78.translation = [-2.25,3.75,0]
Anchor79 = x3d.Anchor()
Anchor79.description = "ArtDeco01 view"
Anchor79.url = ["#View01"]
Shape80 = x3d.Shape()
Appearance81 = x3d.Appearance()
ProtoInstance82 = x3d.ProtoInstance()
ProtoInstance82.name = "ArtDeco01"

Appearance81.material = ProtoInstance82

Shape80.appearance = Appearance81
Sphere83 = x3d.Sphere(USE="Ball")

Shape80.geometry = Sphere83

Anchor79.children.append(Shape80)

Transform78.children.append(Anchor79)
Transform84 = x3d.Transform()
Transform84.translation = [0,0.3,0.5]
Anchor85 = x3d.Anchor()
Anchor85.description = "ArtDeco01 view source documentation"
Anchor85.url = ["../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco01","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco01"]
Anchor85.parameter = ["target=_source"]
Shape86 = x3d.Shape()
Appearance87 = x3d.Appearance()
Material88 = x3d.Material(USE="TextMat")

Appearance87.material = Material88

Shape86.appearance = Appearance87
Text89 = x3d.Text()
Text89.string = ["ArtDeco01"]
FontStyle90 = x3d.FontStyle(USE="Style")

Text89.fontStyle = FontStyle90

Shape86.geometry = Text89

Anchor85.children.append(Shape86)

Transform84.children.append(Anchor85)

Transform78.children.append(Transform84)

Group48.children.append(Transform78)
Viewpoint91 = x3d.Viewpoint(DEF="View02")
Viewpoint91.description = "ArtDeco02"
Viewpoint91.position = [-0.75,3.75,3]

Group48.children.append(Viewpoint91)
Transform92 = x3d.Transform()
Transform92.translation = [-0.75,3.75,0]
Anchor93 = x3d.Anchor()
Anchor93.description = "ArtDeco02 view"
Anchor93.url = ["#View02"]
Shape94 = x3d.Shape()
Appearance95 = x3d.Appearance()
ProtoInstance96 = x3d.ProtoInstance()
ProtoInstance96.name = "ArtDeco02"

Appearance95.material = ProtoInstance96

Shape94.appearance = Appearance95
Sphere97 = x3d.Sphere(USE="Ball")

Shape94.geometry = Sphere97

Anchor93.children.append(Shape94)

Transform92.children.append(Anchor93)
Transform98 = x3d.Transform()
Transform98.translation = [0,0.3,0.5]
Anchor99 = x3d.Anchor()
Anchor99.description = "ArtDeco02 view source documentation"
Anchor99.url = ["../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco02","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco02"]
Anchor99.parameter = ["target=_source"]
Shape100 = x3d.Shape()
Appearance101 = x3d.Appearance()
Material102 = x3d.Material(USE="TextMat")

Appearance101.material = Material102

Shape100.appearance = Appearance101
Text103 = x3d.Text()
Text103.string = ["ArtDeco02"]
FontStyle104 = x3d.FontStyle(USE="Style")

Text103.fontStyle = FontStyle104

Shape100.geometry = Text103

Anchor99.children.append(Shape100)

Transform98.children.append(Anchor99)

Transform92.children.append(Transform98)

Group48.children.append(Transform92)
Viewpoint105 = x3d.Viewpoint(DEF="View03")
Viewpoint105.description = "ArtDeco03"
Viewpoint105.position = [0.75,3.75,3]

Group48.children.append(Viewpoint105)
Transform106 = x3d.Transform()
Transform106.translation = [0.75,3.75,0]
Anchor107 = x3d.Anchor()
Anchor107.description = "ArtDeco03 view"
Anchor107.url = ["#View03"]
Shape108 = x3d.Shape()
Appearance109 = x3d.Appearance()
ProtoInstance110 = x3d.ProtoInstance()
ProtoInstance110.name = "ArtDeco03"

Appearance109.material = ProtoInstance110

Shape108.appearance = Appearance109
Sphere111 = x3d.Sphere(USE="Ball")

Shape108.geometry = Sphere111

Anchor107.children.append(Shape108)

Transform106.children.append(Anchor107)
Transform112 = x3d.Transform()
Transform112.translation = [0,0.3,0.5]
Anchor113 = x3d.Anchor()
Anchor113.description = "ArtDeco03 view source documentation"
Anchor113.url = ["../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco03","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco03"]
Anchor113.parameter = ["target=_source"]
Shape114 = x3d.Shape()
Appearance115 = x3d.Appearance()
Material116 = x3d.Material(USE="TextMat")

Appearance115.material = Material116

Shape114.appearance = Appearance115
Text117 = x3d.Text()
Text117.string = ["ArtDeco03"]
FontStyle118 = x3d.FontStyle(USE="Style")

Text117.fontStyle = FontStyle118

Shape114.geometry = Text117

Anchor113.children.append(Shape114)

Transform112.children.append(Anchor113)

Transform106.children.append(Transform112)

Group48.children.append(Transform106)
Viewpoint119 = x3d.Viewpoint(DEF="View04")
Viewpoint119.description = "ArtDeco04"
Viewpoint119.position = [2.25,3.75,3]

Group48.children.append(Viewpoint119)
Transform120 = x3d.Transform()
Transform120.translation = [2.25,3.75,0]
Anchor121 = x3d.Anchor()
Anchor121.description = "ArtDeco04 view"
Anchor121.url = ["#View04"]
Shape122 = x3d.Shape()
Appearance123 = x3d.Appearance()
ProtoInstance124 = x3d.ProtoInstance()
ProtoInstance124.name = "ArtDeco04"

Appearance123.material = ProtoInstance124

Shape122.appearance = Appearance123
Sphere125 = x3d.Sphere(USE="Ball")

Shape122.geometry = Sphere125

Anchor121.children.append(Shape122)

Transform120.children.append(Anchor121)
Transform126 = x3d.Transform()
Transform126.translation = [0,0.3,0.5]
Anchor127 = x3d.Anchor()
Anchor127.description = "ArtDeco04 view source documentation"
Anchor127.url = ["../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco04","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco04"]
Anchor127.parameter = ["target=_source"]
Shape128 = x3d.Shape()
Appearance129 = x3d.Appearance()
Material130 = x3d.Material(USE="TextMat")

Appearance129.material = Material130

Shape128.appearance = Appearance129
Text131 = x3d.Text()
Text131.string = ["ArtDeco04"]
FontStyle132 = x3d.FontStyle(USE="Style")

Text131.fontStyle = FontStyle132

Shape128.geometry = Text131

Anchor127.children.append(Shape128)

Transform126.children.append(Anchor127)

Transform120.children.append(Transform126)

Group48.children.append(Transform120)
Viewpoint133 = x3d.Viewpoint(DEF="View05")
Viewpoint133.description = "ArtDeco05"
Viewpoint133.position = [3.75,3.75,3]

Group48.children.append(Viewpoint133)
Transform134 = x3d.Transform()
Transform134.translation = [3.75,3.75,0]
Anchor135 = x3d.Anchor()
Anchor135.description = "ArtDeco05 view"
Anchor135.url = ["#View05"]
Shape136 = x3d.Shape()
Appearance137 = x3d.Appearance()
ProtoInstance138 = x3d.ProtoInstance()
ProtoInstance138.name = "ArtDeco05"

Appearance137.material = ProtoInstance138

Shape136.appearance = Appearance137
Sphere139 = x3d.Sphere(USE="Ball")

Shape136.geometry = Sphere139

Anchor135.children.append(Shape136)

Transform134.children.append(Anchor135)
Transform140 = x3d.Transform()
Transform140.translation = [0,0.3,0.5]
Anchor141 = x3d.Anchor()
Anchor141.description = "ArtDeco05 view source documentation"
Anchor141.url = ["../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco05","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco05"]
Anchor141.parameter = ["target=_source"]
Shape142 = x3d.Shape()
Appearance143 = x3d.Appearance()
Material144 = x3d.Material(USE="TextMat")

Appearance143.material = Material144

Shape142.appearance = Appearance143
Text145 = x3d.Text()
Text145.string = ["ArtDeco05"]
FontStyle146 = x3d.FontStyle(USE="Style")

Text145.fontStyle = FontStyle146

Shape142.geometry = Text145

Anchor141.children.append(Shape142)

Transform140.children.append(Anchor141)

Transform134.children.append(Transform140)

Group48.children.append(Transform134)
Viewpoint147 = x3d.Viewpoint(DEF="View06")
Viewpoint147.description = "ArtDeco06"
Viewpoint147.position = [-3.75,2.25,3]

Group48.children.append(Viewpoint147)
Transform148 = x3d.Transform()
Transform148.translation = [-3.75,2.25,0]
Anchor149 = x3d.Anchor()
Anchor149.description = "ArtDeco06 view"
Anchor149.url = ["#View06"]
Shape150 = x3d.Shape()
Appearance151 = x3d.Appearance()
ProtoInstance152 = x3d.ProtoInstance()
ProtoInstance152.name = "ArtDeco06"

Appearance151.material = ProtoInstance152

Shape150.appearance = Appearance151
Sphere153 = x3d.Sphere(USE="Ball")

Shape150.geometry = Sphere153

Anchor149.children.append(Shape150)

Transform148.children.append(Anchor149)
Transform154 = x3d.Transform()
Transform154.translation = [0,0.3,0.5]
Anchor155 = x3d.Anchor()
Anchor155.description = "ArtDeco06 view source documentation"
Anchor155.url = ["../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco06","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco06"]
Anchor155.parameter = ["target=_source"]
Shape156 = x3d.Shape()
Appearance157 = x3d.Appearance()
Material158 = x3d.Material(USE="TextMat")

Appearance157.material = Material158

Shape156.appearance = Appearance157
Text159 = x3d.Text()
Text159.string = ["ArtDeco06"]
FontStyle160 = x3d.FontStyle(USE="Style")

Text159.fontStyle = FontStyle160

Shape156.geometry = Text159

Anchor155.children.append(Shape156)

Transform154.children.append(Anchor155)

Transform148.children.append(Transform154)

Group48.children.append(Transform148)
Viewpoint161 = x3d.Viewpoint(DEF="View07")
Viewpoint161.description = "ArtDeco07"
Viewpoint161.position = [-2.25,2.25,3]

Group48.children.append(Viewpoint161)
Transform162 = x3d.Transform()
Transform162.translation = [-2.25,2.25,0]
Anchor163 = x3d.Anchor()
Anchor163.description = "ArtDeco07 view"
Anchor163.url = ["#View07"]
Shape164 = x3d.Shape()
Appearance165 = x3d.Appearance()
ProtoInstance166 = x3d.ProtoInstance()
ProtoInstance166.name = "ArtDeco07"

Appearance165.material = ProtoInstance166

Shape164.appearance = Appearance165
Sphere167 = x3d.Sphere(USE="Ball")

Shape164.geometry = Sphere167

Anchor163.children.append(Shape164)

Transform162.children.append(Anchor163)
Transform168 = x3d.Transform()
Transform168.translation = [0,0.3,0.5]
Anchor169 = x3d.Anchor()
Anchor169.description = "ArtDeco07 view source documentation"
Anchor169.url = ["../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco07","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco07"]
Anchor169.parameter = ["target=_source"]
Shape170 = x3d.Shape()
Appearance171 = x3d.Appearance()
Material172 = x3d.Material(USE="TextMat")

Appearance171.material = Material172

Shape170.appearance = Appearance171
Text173 = x3d.Text()
Text173.string = ["ArtDeco07"]
FontStyle174 = x3d.FontStyle(USE="Style")

Text173.fontStyle = FontStyle174

Shape170.geometry = Text173

Anchor169.children.append(Shape170)

Transform168.children.append(Anchor169)

Transform162.children.append(Transform168)

Group48.children.append(Transform162)
Viewpoint175 = x3d.Viewpoint(DEF="View08")
Viewpoint175.description = "ArtDeco08"
Viewpoint175.position = [-0.75,2.25,3]

Group48.children.append(Viewpoint175)
Transform176 = x3d.Transform()
Transform176.translation = [-0.75,2.25,0]
Anchor177 = x3d.Anchor()
Anchor177.description = "ArtDeco08 view"
Anchor177.url = ["#View08"]
Shape178 = x3d.Shape()
Appearance179 = x3d.Appearance()
ProtoInstance180 = x3d.ProtoInstance()
ProtoInstance180.name = "ArtDeco08"

Appearance179.material = ProtoInstance180

Shape178.appearance = Appearance179
Sphere181 = x3d.Sphere(USE="Ball")

Shape178.geometry = Sphere181

Anchor177.children.append(Shape178)

Transform176.children.append(Anchor177)
Transform182 = x3d.Transform()
Transform182.translation = [0,0.3,0.5]
Anchor183 = x3d.Anchor()
Anchor183.description = "ArtDeco08 view source documentation"
Anchor183.url = ["../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco08","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco08"]
Anchor183.parameter = ["target=_source"]
Shape184 = x3d.Shape()
Appearance185 = x3d.Appearance()
Material186 = x3d.Material(USE="TextMat")

Appearance185.material = Material186

Shape184.appearance = Appearance185
Text187 = x3d.Text()
Text187.string = ["ArtDeco08"]
FontStyle188 = x3d.FontStyle(USE="Style")

Text187.fontStyle = FontStyle188

Shape184.geometry = Text187

Anchor183.children.append(Shape184)

Transform182.children.append(Anchor183)

Transform176.children.append(Transform182)

Group48.children.append(Transform176)
Viewpoint189 = x3d.Viewpoint(DEF="View09")
Viewpoint189.description = "ArtDeco09"
Viewpoint189.position = [0.75,2.25,3]

Group48.children.append(Viewpoint189)
Transform190 = x3d.Transform()
Transform190.translation = [0.75,2.25,0]
Anchor191 = x3d.Anchor()
Anchor191.description = "ArtDeco09 view"
Anchor191.url = ["#View09"]
Shape192 = x3d.Shape()
Appearance193 = x3d.Appearance()
ProtoInstance194 = x3d.ProtoInstance()
ProtoInstance194.name = "ArtDeco09"

Appearance193.material = ProtoInstance194

Shape192.appearance = Appearance193
Sphere195 = x3d.Sphere(USE="Ball")

Shape192.geometry = Sphere195

Anchor191.children.append(Shape192)

Transform190.children.append(Anchor191)
Transform196 = x3d.Transform()
Transform196.translation = [0,0.3,0.5]
Anchor197 = x3d.Anchor()
Anchor197.description = "ArtDeco09 view source documentation"
Anchor197.url = ["../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco09","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco09"]
Anchor197.parameter = ["target=_source"]
Shape198 = x3d.Shape()
Appearance199 = x3d.Appearance()
Material200 = x3d.Material(USE="TextMat")

Appearance199.material = Material200

Shape198.appearance = Appearance199
Text201 = x3d.Text()
Text201.string = ["ArtDeco09"]
FontStyle202 = x3d.FontStyle(USE="Style")

Text201.fontStyle = FontStyle202

Shape198.geometry = Text201

Anchor197.children.append(Shape198)

Transform196.children.append(Anchor197)

Transform190.children.append(Transform196)

Group48.children.append(Transform190)
Viewpoint203 = x3d.Viewpoint(DEF="View10")
Viewpoint203.description = "ArtDeco10"
Viewpoint203.position = [2.25,2.25,3]

Group48.children.append(Viewpoint203)
Transform204 = x3d.Transform()
Transform204.translation = [2.25,2.25,0]
Anchor205 = x3d.Anchor()
Anchor205.description = "ArtDeco10 view"
Anchor205.url = ["#View10"]
Shape206 = x3d.Shape()
Appearance207 = x3d.Appearance()
ProtoInstance208 = x3d.ProtoInstance()
ProtoInstance208.name = "ArtDeco10"

Appearance207.material = ProtoInstance208

Shape206.appearance = Appearance207
Sphere209 = x3d.Sphere(USE="Ball")

Shape206.geometry = Sphere209

Anchor205.children.append(Shape206)

Transform204.children.append(Anchor205)
Transform210 = x3d.Transform()
Transform210.translation = [0,0.3,0.5]
Anchor211 = x3d.Anchor()
Anchor211.description = "ArtDeco10 view source documentation"
Anchor211.url = ["../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco10","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco10"]
Anchor211.parameter = ["target=_source"]
Shape212 = x3d.Shape()
Appearance213 = x3d.Appearance()
Material214 = x3d.Material(USE="TextMat")

Appearance213.material = Material214

Shape212.appearance = Appearance213
Text215 = x3d.Text()
Text215.string = ["ArtDeco10"]
FontStyle216 = x3d.FontStyle(USE="Style")

Text215.fontStyle = FontStyle216

Shape212.geometry = Text215

Anchor211.children.append(Shape212)

Transform210.children.append(Anchor211)

Transform204.children.append(Transform210)

Group48.children.append(Transform204)
Viewpoint217 = x3d.Viewpoint(DEF="View11")
Viewpoint217.description = "ArtDeco11"
Viewpoint217.position = [3.75,2.25,3]

Group48.children.append(Viewpoint217)
Transform218 = x3d.Transform()
Transform218.translation = [3.75,2.25,0]
Anchor219 = x3d.Anchor()
Anchor219.description = "ArtDeco11 view"
Anchor219.url = ["#View11"]
Shape220 = x3d.Shape()
Appearance221 = x3d.Appearance()
ProtoInstance222 = x3d.ProtoInstance()
ProtoInstance222.name = "ArtDeco11"

Appearance221.material = ProtoInstance222

Shape220.appearance = Appearance221
Sphere223 = x3d.Sphere(USE="Ball")

Shape220.geometry = Sphere223

Anchor219.children.append(Shape220)

Transform218.children.append(Anchor219)
Transform224 = x3d.Transform()
Transform224.translation = [0,0.3,0.5]
Anchor225 = x3d.Anchor()
Anchor225.description = "ArtDeco11 view source documentation"
Anchor225.url = ["../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco11","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco11"]
Anchor225.parameter = ["target=_source"]
Shape226 = x3d.Shape()
Appearance227 = x3d.Appearance()
Material228 = x3d.Material(USE="TextMat")

Appearance227.material = Material228

Shape226.appearance = Appearance227
Text229 = x3d.Text()
Text229.string = ["ArtDeco11"]
FontStyle230 = x3d.FontStyle(USE="Style")

Text229.fontStyle = FontStyle230

Shape226.geometry = Text229

Anchor225.children.append(Shape226)

Transform224.children.append(Anchor225)

Transform218.children.append(Transform224)

Group48.children.append(Transform218)
Viewpoint231 = x3d.Viewpoint(DEF="View12")
Viewpoint231.description = "ArtDeco12"
Viewpoint231.position = [-3.75,0.75,3]

Group48.children.append(Viewpoint231)
Transform232 = x3d.Transform()
Transform232.translation = [-3.75,0.75,0]
Anchor233 = x3d.Anchor()
Anchor233.description = "ArtDeco12 view"
Anchor233.url = ["#View12"]
Shape234 = x3d.Shape()
Appearance235 = x3d.Appearance()
ProtoInstance236 = x3d.ProtoInstance()
ProtoInstance236.name = "ArtDeco12"

Appearance235.material = ProtoInstance236

Shape234.appearance = Appearance235
Sphere237 = x3d.Sphere(USE="Ball")

Shape234.geometry = Sphere237

Anchor233.children.append(Shape234)

Transform232.children.append(Anchor233)
Transform238 = x3d.Transform()
Transform238.translation = [0,0.3,0.5]
Anchor239 = x3d.Anchor()
Anchor239.description = "ArtDeco12 view source documentation"
Anchor239.url = ["../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco12","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco12"]
Anchor239.parameter = ["target=_source"]
Shape240 = x3d.Shape()
Appearance241 = x3d.Appearance()
Material242 = x3d.Material(USE="TextMat")

Appearance241.material = Material242

Shape240.appearance = Appearance241
Text243 = x3d.Text()
Text243.string = ["ArtDeco12"]
FontStyle244 = x3d.FontStyle(USE="Style")

Text243.fontStyle = FontStyle244

Shape240.geometry = Text243

Anchor239.children.append(Shape240)

Transform238.children.append(Anchor239)

Transform232.children.append(Transform238)

Group48.children.append(Transform232)
Viewpoint245 = x3d.Viewpoint(DEF="View13")
Viewpoint245.description = "ArtDeco13"
Viewpoint245.position = [-2.25,0.75,3]

Group48.children.append(Viewpoint245)
Transform246 = x3d.Transform()
Transform246.translation = [-2.25,0.75,0]
Anchor247 = x3d.Anchor()
Anchor247.description = "ArtDeco13 view"
Anchor247.url = ["#View13"]
Shape248 = x3d.Shape()
Appearance249 = x3d.Appearance()
ProtoInstance250 = x3d.ProtoInstance()
ProtoInstance250.name = "ArtDeco13"

Appearance249.material = ProtoInstance250

Shape248.appearance = Appearance249
Sphere251 = x3d.Sphere(USE="Ball")

Shape248.geometry = Sphere251

Anchor247.children.append(Shape248)

Transform246.children.append(Anchor247)
Transform252 = x3d.Transform()
Transform252.translation = [0,0.3,0.5]
Anchor253 = x3d.Anchor()
Anchor253.description = "ArtDeco13 view source documentation"
Anchor253.url = ["../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco3","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco13"]
Anchor253.parameter = ["target=_source"]
Shape254 = x3d.Shape()
Appearance255 = x3d.Appearance()
Material256 = x3d.Material(USE="TextMat")

Appearance255.material = Material256

Shape254.appearance = Appearance255
Text257 = x3d.Text()
Text257.string = ["ArtDeco13"]
FontStyle258 = x3d.FontStyle(USE="Style")

Text257.fontStyle = FontStyle258

Shape254.geometry = Text257

Anchor253.children.append(Shape254)

Transform252.children.append(Anchor253)

Transform246.children.append(Transform252)

Group48.children.append(Transform246)
Viewpoint259 = x3d.Viewpoint(DEF="View14")
Viewpoint259.description = "ArtDeco14"
Viewpoint259.position = [-0.75,0.75,3]

Group48.children.append(Viewpoint259)
Transform260 = x3d.Transform()
Transform260.translation = [-0.75,0.75,0]
Anchor261 = x3d.Anchor()
Anchor261.description = "ArtDeco14 view"
Anchor261.url = ["#View14"]
Shape262 = x3d.Shape()
Appearance263 = x3d.Appearance()
ProtoInstance264 = x3d.ProtoInstance()
ProtoInstance264.name = "ArtDeco14"

Appearance263.material = ProtoInstance264

Shape262.appearance = Appearance263
Sphere265 = x3d.Sphere(USE="Ball")

Shape262.geometry = Sphere265

Anchor261.children.append(Shape262)

Transform260.children.append(Anchor261)
Transform266 = x3d.Transform()
Transform266.translation = [0,0.3,0.5]
Anchor267 = x3d.Anchor()
Anchor267.description = "ArtDeco14 view source documentation"
Anchor267.url = ["../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco4","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco14"]
Anchor267.parameter = ["target=_source"]
Shape268 = x3d.Shape()
Appearance269 = x3d.Appearance()
Material270 = x3d.Material(USE="TextMat")

Appearance269.material = Material270

Shape268.appearance = Appearance269
Text271 = x3d.Text()
Text271.string = ["ArtDeco14"]
FontStyle272 = x3d.FontStyle(USE="Style")

Text271.fontStyle = FontStyle272

Shape268.geometry = Text271

Anchor267.children.append(Shape268)

Transform266.children.append(Anchor267)

Transform260.children.append(Transform266)

Group48.children.append(Transform260)
Viewpoint273 = x3d.Viewpoint(DEF="View15")
Viewpoint273.description = "ArtDeco15"
Viewpoint273.position = [0.75,0.75,3]

Group48.children.append(Viewpoint273)
Transform274 = x3d.Transform()
Transform274.translation = [0.75,0.75,0]
Anchor275 = x3d.Anchor()
Anchor275.description = "ArtDeco15 view"
Anchor275.url = ["#View15"]
Shape276 = x3d.Shape()
Appearance277 = x3d.Appearance()
ProtoInstance278 = x3d.ProtoInstance()
ProtoInstance278.name = "ArtDeco15"

Appearance277.material = ProtoInstance278

Shape276.appearance = Appearance277
Sphere279 = x3d.Sphere(USE="Ball")

Shape276.geometry = Sphere279

Anchor275.children.append(Shape276)

Transform274.children.append(Anchor275)
Transform280 = x3d.Transform()
Transform280.translation = [0,0.3,0.5]
Anchor281 = x3d.Anchor()
Anchor281.description = "ArtDeco15 view source documentation"
Anchor281.url = ["../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco5","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco15"]
Anchor281.parameter = ["target=_source"]
Shape282 = x3d.Shape()
Appearance283 = x3d.Appearance()
Material284 = x3d.Material(USE="TextMat")

Appearance283.material = Material284

Shape282.appearance = Appearance283
Text285 = x3d.Text()
Text285.string = ["ArtDeco15"]
FontStyle286 = x3d.FontStyle(USE="Style")

Text285.fontStyle = FontStyle286

Shape282.geometry = Text285

Anchor281.children.append(Shape282)

Transform280.children.append(Anchor281)

Transform274.children.append(Transform280)

Group48.children.append(Transform274)
Viewpoint287 = x3d.Viewpoint(DEF="View16")
Viewpoint287.description = "ArtDeco16"
Viewpoint287.position = [2.25,0.75,3]

Group48.children.append(Viewpoint287)
Transform288 = x3d.Transform()
Transform288.translation = [2.25,0.75,0]
Anchor289 = x3d.Anchor()
Anchor289.description = "ArtDeco16 view"
Anchor289.url = ["#View16"]
Shape290 = x3d.Shape()
Appearance291 = x3d.Appearance()
ProtoInstance292 = x3d.ProtoInstance()
ProtoInstance292.name = "ArtDeco16"

Appearance291.material = ProtoInstance292

Shape290.appearance = Appearance291
Sphere293 = x3d.Sphere(USE="Ball")

Shape290.geometry = Sphere293

Anchor289.children.append(Shape290)

Transform288.children.append(Anchor289)
Transform294 = x3d.Transform()
Transform294.translation = [0,0.3,0.5]
Anchor295 = x3d.Anchor()
Anchor295.description = "ArtDeco16 view source documentation"
Anchor295.url = ["../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco16","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco16"]
Anchor295.parameter = ["target=_source"]
Shape296 = x3d.Shape()
Appearance297 = x3d.Appearance()
Material298 = x3d.Material(USE="TextMat")

Appearance297.material = Material298

Shape296.appearance = Appearance297
Text299 = x3d.Text()
Text299.string = ["ArtDeco16"]
FontStyle300 = x3d.FontStyle(USE="Style")

Text299.fontStyle = FontStyle300

Shape296.geometry = Text299

Anchor295.children.append(Shape296)

Transform294.children.append(Anchor295)

Transform288.children.append(Transform294)

Group48.children.append(Transform288)
Viewpoint301 = x3d.Viewpoint(DEF="View17")
Viewpoint301.description = "ArtDeco17"
Viewpoint301.position = [3.75,0.75,3]

Group48.children.append(Viewpoint301)
Transform302 = x3d.Transform()
Transform302.translation = [3.75,0.75,0]
Anchor303 = x3d.Anchor()
Anchor303.description = "ArtDeco17 view"
Anchor303.url = ["#View17"]
Shape304 = x3d.Shape()
Appearance305 = x3d.Appearance()
ProtoInstance306 = x3d.ProtoInstance()
ProtoInstance306.name = "ArtDeco17"

Appearance305.material = ProtoInstance306

Shape304.appearance = Appearance305
Sphere307 = x3d.Sphere(USE="Ball")

Shape304.geometry = Sphere307

Anchor303.children.append(Shape304)

Transform302.children.append(Anchor303)
Transform308 = x3d.Transform()
Transform308.translation = [0,0.3,0.5]
Anchor309 = x3d.Anchor()
Anchor309.description = "ArtDeco17 view source documentation"
Anchor309.url = ["../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco7","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco17"]
Anchor309.parameter = ["target=_source"]
Shape310 = x3d.Shape()
Appearance311 = x3d.Appearance()
Material312 = x3d.Material(USE="TextMat")

Appearance311.material = Material312

Shape310.appearance = Appearance311
Text313 = x3d.Text()
Text313.string = ["ArtDeco17"]
FontStyle314 = x3d.FontStyle(USE="Style")

Text313.fontStyle = FontStyle314

Shape310.geometry = Text313

Anchor309.children.append(Shape310)

Transform308.children.append(Anchor309)

Transform302.children.append(Transform308)

Group48.children.append(Transform302)
Viewpoint315 = x3d.Viewpoint(DEF="View18")
Viewpoint315.description = "ArtDeco18"
Viewpoint315.position = [-3.75,-0.75,3]

Group48.children.append(Viewpoint315)
Transform316 = x3d.Transform()
Transform316.translation = [-3.75,-0.75,0]
Anchor317 = x3d.Anchor()
Anchor317.description = "ArtDeco18 view"
Anchor317.url = ["#View18"]
Shape318 = x3d.Shape()
Appearance319 = x3d.Appearance()
ProtoInstance320 = x3d.ProtoInstance()
ProtoInstance320.name = "ArtDeco18"

Appearance319.material = ProtoInstance320

Shape318.appearance = Appearance319
Sphere321 = x3d.Sphere(USE="Ball")

Shape318.geometry = Sphere321

Anchor317.children.append(Shape318)

Transform316.children.append(Anchor317)
Transform322 = x3d.Transform()
Transform322.translation = [0,0.3,0.5]
Anchor323 = x3d.Anchor()
Anchor323.description = "ArtDeco18 view source documentation"
Anchor323.url = ["../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco18","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco18"]
Anchor323.parameter = ["target=_source"]
Shape324 = x3d.Shape()
Appearance325 = x3d.Appearance()
Material326 = x3d.Material(USE="TextMat")

Appearance325.material = Material326

Shape324.appearance = Appearance325
Text327 = x3d.Text()
Text327.string = ["ArtDeco18"]
FontStyle328 = x3d.FontStyle(USE="Style")

Text327.fontStyle = FontStyle328

Shape324.geometry = Text327

Anchor323.children.append(Shape324)

Transform322.children.append(Anchor323)

Transform316.children.append(Transform322)

Group48.children.append(Transform316)
Viewpoint329 = x3d.Viewpoint(DEF="View19")
Viewpoint329.description = "ArtDeco19"
Viewpoint329.position = [-2.25,-0.75,3]

Group48.children.append(Viewpoint329)
Transform330 = x3d.Transform()
Transform330.translation = [-2.25,-0.75,0]
Anchor331 = x3d.Anchor()
Anchor331.description = "ArtDeco19 view"
Anchor331.url = ["#View19"]
Shape332 = x3d.Shape()
Appearance333 = x3d.Appearance()
ProtoInstance334 = x3d.ProtoInstance()
ProtoInstance334.name = "ArtDeco19"

Appearance333.material = ProtoInstance334

Shape332.appearance = Appearance333
Sphere335 = x3d.Sphere(USE="Ball")

Shape332.geometry = Sphere335

Anchor331.children.append(Shape332)

Transform330.children.append(Anchor331)
Transform336 = x3d.Transform()
Transform336.translation = [0,0.3,0.5]
Anchor337 = x3d.Anchor()
Anchor337.description = "ArtDeco19 view source documentation"
Anchor337.url = ["../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco9","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco19"]
Anchor337.parameter = ["target=_source"]
Shape338 = x3d.Shape()
Appearance339 = x3d.Appearance()
Material340 = x3d.Material(USE="TextMat")

Appearance339.material = Material340

Shape338.appearance = Appearance339
Text341 = x3d.Text()
Text341.string = ["ArtDeco19"]
FontStyle342 = x3d.FontStyle(USE="Style")

Text341.fontStyle = FontStyle342

Shape338.geometry = Text341

Anchor337.children.append(Shape338)

Transform336.children.append(Anchor337)

Transform330.children.append(Transform336)

Group48.children.append(Transform330)
Viewpoint343 = x3d.Viewpoint(DEF="View20")
Viewpoint343.description = "ArtDeco20"
Viewpoint343.position = [-0.75,-0.75,3]

Group48.children.append(Viewpoint343)
Transform344 = x3d.Transform()
Transform344.translation = [-0.75,-0.75,0]
Anchor345 = x3d.Anchor()
Anchor345.description = "ArtDeco20 view"
Anchor345.url = ["#View20"]
Shape346 = x3d.Shape()
Appearance347 = x3d.Appearance()
ProtoInstance348 = x3d.ProtoInstance()
ProtoInstance348.name = "ArtDeco20"

Appearance347.material = ProtoInstance348

Shape346.appearance = Appearance347
Sphere349 = x3d.Sphere(USE="Ball")

Shape346.geometry = Sphere349

Anchor345.children.append(Shape346)

Transform344.children.append(Anchor345)
Transform350 = x3d.Transform()
Transform350.translation = [0,0.3,0.5]
Anchor351 = x3d.Anchor()
Anchor351.description = "ArtDeco20 view source documentation"
Anchor351.url = ["../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco20","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco20"]
Anchor351.parameter = ["target=_source"]
Shape352 = x3d.Shape()
Appearance353 = x3d.Appearance()
Material354 = x3d.Material(USE="TextMat")

Appearance353.material = Material354

Shape352.appearance = Appearance353
Text355 = x3d.Text()
Text355.string = ["ArtDeco20"]
FontStyle356 = x3d.FontStyle(USE="Style")

Text355.fontStyle = FontStyle356

Shape352.geometry = Text355

Anchor351.children.append(Shape352)

Transform350.children.append(Anchor351)

Transform344.children.append(Transform350)

Group48.children.append(Transform344)
Viewpoint357 = x3d.Viewpoint(DEF="View21")
Viewpoint357.description = "ArtDeco21"
Viewpoint357.position = [0.75,-0.75,3]

Group48.children.append(Viewpoint357)
Transform358 = x3d.Transform()
Transform358.translation = [0.75,-0.75,0]
Anchor359 = x3d.Anchor()
Anchor359.description = "ArtDeco21 view"
Anchor359.url = ["#View21"]
Shape360 = x3d.Shape()
Appearance361 = x3d.Appearance()
ProtoInstance362 = x3d.ProtoInstance()
ProtoInstance362.name = "ArtDeco21"

Appearance361.material = ProtoInstance362

Shape360.appearance = Appearance361
Sphere363 = x3d.Sphere(USE="Ball")

Shape360.geometry = Sphere363

Anchor359.children.append(Shape360)

Transform358.children.append(Anchor359)
Transform364 = x3d.Transform()
Transform364.translation = [0,0.3,0.5]
Anchor365 = x3d.Anchor()
Anchor365.description = "ArtDeco21 view source documentation"
Anchor365.url = ["../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco21","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco21"]
Anchor365.parameter = ["target=_source"]
Shape366 = x3d.Shape()
Appearance367 = x3d.Appearance()
Material368 = x3d.Material(USE="TextMat")

Appearance367.material = Material368

Shape366.appearance = Appearance367
Text369 = x3d.Text()
Text369.string = ["ArtDeco21"]
FontStyle370 = x3d.FontStyle(USE="Style")

Text369.fontStyle = FontStyle370

Shape366.geometry = Text369

Anchor365.children.append(Shape366)

Transform364.children.append(Anchor365)

Transform358.children.append(Transform364)

Group48.children.append(Transform358)
Viewpoint371 = x3d.Viewpoint(DEF="View22")
Viewpoint371.description = "ArtDeco22"
Viewpoint371.position = [2.25,-0.75,3]

Group48.children.append(Viewpoint371)
Transform372 = x3d.Transform()
Transform372.translation = [2.25,-0.75,0]
Anchor373 = x3d.Anchor()
Anchor373.description = "ArtDeco22 view"
Anchor373.url = ["#View22"]
Shape374 = x3d.Shape()
Appearance375 = x3d.Appearance()
ProtoInstance376 = x3d.ProtoInstance()
ProtoInstance376.name = "ArtDeco22"

Appearance375.material = ProtoInstance376

Shape374.appearance = Appearance375
Sphere377 = x3d.Sphere(USE="Ball")

Shape374.geometry = Sphere377

Anchor373.children.append(Shape374)

Transform372.children.append(Anchor373)
Transform378 = x3d.Transform()
Transform378.translation = [0,0.3,0.5]
Anchor379 = x3d.Anchor()
Anchor379.description = "ArtDeco22 view source documentation"
Anchor379.url = ["../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco22","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco22"]
Anchor379.parameter = ["target=_source"]
Shape380 = x3d.Shape()
Appearance381 = x3d.Appearance()
Material382 = x3d.Material(USE="TextMat")

Appearance381.material = Material382

Shape380.appearance = Appearance381
Text383 = x3d.Text()
Text383.string = ["ArtDeco22"]
FontStyle384 = x3d.FontStyle(USE="Style")

Text383.fontStyle = FontStyle384

Shape380.geometry = Text383

Anchor379.children.append(Shape380)

Transform378.children.append(Anchor379)

Transform372.children.append(Transform378)

Group48.children.append(Transform372)
Viewpoint385 = x3d.Viewpoint(DEF="View23")
Viewpoint385.description = "ArtDeco23"
Viewpoint385.position = [3.75,-0.75,3]

Group48.children.append(Viewpoint385)
Transform386 = x3d.Transform()
Transform386.translation = [3.75,-0.75,0]
Anchor387 = x3d.Anchor()
Anchor387.description = "ArtDeco23 view"
Anchor387.url = ["#View23"]
Shape388 = x3d.Shape()
Appearance389 = x3d.Appearance()
ProtoInstance390 = x3d.ProtoInstance()
ProtoInstance390.name = "ArtDeco23"

Appearance389.material = ProtoInstance390

Shape388.appearance = Appearance389
Sphere391 = x3d.Sphere(USE="Ball")

Shape388.geometry = Sphere391

Anchor387.children.append(Shape388)

Transform386.children.append(Anchor387)
Transform392 = x3d.Transform()
Transform392.translation = [0,0.3,0.5]
Anchor393 = x3d.Anchor()
Anchor393.description = "ArtDeco23 view source documentation"
Anchor393.url = ["../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco23","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco23"]
Anchor393.parameter = ["target=_source"]
Shape394 = x3d.Shape()
Appearance395 = x3d.Appearance()
Material396 = x3d.Material(USE="TextMat")

Appearance395.material = Material396

Shape394.appearance = Appearance395
Text397 = x3d.Text()
Text397.string = ["ArtDeco23"]
FontStyle398 = x3d.FontStyle(USE="Style")

Text397.fontStyle = FontStyle398

Shape394.geometry = Text397

Anchor393.children.append(Shape394)

Transform392.children.append(Anchor393)

Transform386.children.append(Transform392)

Group48.children.append(Transform386)
Viewpoint399 = x3d.Viewpoint(DEF="View24")
Viewpoint399.description = "ArtDeco24"
Viewpoint399.position = [-3.75,-2.25,3]

Group48.children.append(Viewpoint399)
Transform400 = x3d.Transform()
Transform400.translation = [-3.75,-2.25,0]
Anchor401 = x3d.Anchor()
Anchor401.description = "ArtDeco24 view"
Anchor401.url = ["#View24"]
Shape402 = x3d.Shape()
Appearance403 = x3d.Appearance()
ProtoInstance404 = x3d.ProtoInstance()
ProtoInstance404.name = "ArtDeco24"

Appearance403.material = ProtoInstance404

Shape402.appearance = Appearance403
Sphere405 = x3d.Sphere(USE="Ball")

Shape402.geometry = Sphere405

Anchor401.children.append(Shape402)

Transform400.children.append(Anchor401)
Transform406 = x3d.Transform()
Transform406.translation = [0,0.3,0.5]
Anchor407 = x3d.Anchor()
Anchor407.description = "ArtDeco24 view source documentation"
Anchor407.url = ["../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco24","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco24"]
Anchor407.parameter = ["target=_source"]
Shape408 = x3d.Shape()
Appearance409 = x3d.Appearance()
Material410 = x3d.Material(USE="TextMat")

Appearance409.material = Material410

Shape408.appearance = Appearance409
Text411 = x3d.Text()
Text411.string = ["ArtDeco24"]
FontStyle412 = x3d.FontStyle(USE="Style")

Text411.fontStyle = FontStyle412

Shape408.geometry = Text411

Anchor407.children.append(Shape408)

Transform406.children.append(Anchor407)

Transform400.children.append(Transform406)

Group48.children.append(Transform400)
Viewpoint413 = x3d.Viewpoint(DEF="View25")
Viewpoint413.description = "ArtDeco25"
Viewpoint413.position = [-2.25,-2.25,3]

Group48.children.append(Viewpoint413)
Transform414 = x3d.Transform()
Transform414.translation = [-2.25,-2.25,0]
Anchor415 = x3d.Anchor()
Anchor415.description = "ArtDeco25 view"
Anchor415.url = ["#View25"]
Shape416 = x3d.Shape()
Appearance417 = x3d.Appearance()
ProtoInstance418 = x3d.ProtoInstance()
ProtoInstance418.name = "ArtDeco25"

Appearance417.material = ProtoInstance418

Shape416.appearance = Appearance417
Sphere419 = x3d.Sphere(USE="Ball")

Shape416.geometry = Sphere419

Anchor415.children.append(Shape416)

Transform414.children.append(Anchor415)
Transform420 = x3d.Transform()
Transform420.translation = [0,0.3,0.5]
Anchor421 = x3d.Anchor()
Anchor421.description = "ArtDeco25 view source documentation"
Anchor421.url = ["../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco25","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco25"]
Anchor421.parameter = ["target=_source"]
Shape422 = x3d.Shape()
Appearance423 = x3d.Appearance()
Material424 = x3d.Material(USE="TextMat")

Appearance423.material = Material424

Shape422.appearance = Appearance423
Text425 = x3d.Text()
Text425.string = ["ArtDeco25"]
FontStyle426 = x3d.FontStyle(USE="Style")

Text425.fontStyle = FontStyle426

Shape422.geometry = Text425

Anchor421.children.append(Shape422)

Transform420.children.append(Anchor421)

Transform414.children.append(Transform420)

Group48.children.append(Transform414)
Viewpoint427 = x3d.Viewpoint(DEF="View26")
Viewpoint427.description = "ArtDeco26"
Viewpoint427.position = [-0.75,-2.25,3]

Group48.children.append(Viewpoint427)
Transform428 = x3d.Transform()
Transform428.translation = [-0.75,-2.25,0]
Anchor429 = x3d.Anchor()
Anchor429.description = "ArtDeco26 view"
Anchor429.url = ["#View26"]
Shape430 = x3d.Shape()
Appearance431 = x3d.Appearance()
ProtoInstance432 = x3d.ProtoInstance()
ProtoInstance432.name = "ArtDeco26"

Appearance431.material = ProtoInstance432

Shape430.appearance = Appearance431
Sphere433 = x3d.Sphere(USE="Ball")

Shape430.geometry = Sphere433

Anchor429.children.append(Shape430)

Transform428.children.append(Anchor429)
Transform434 = x3d.Transform()
Transform434.translation = [0,0.3,0.5]
Anchor435 = x3d.Anchor()
Anchor435.description = "ArtDeco26 view source documentation"
Anchor435.url = ["../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco26","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco26"]
Anchor435.parameter = ["target=_source"]
Shape436 = x3d.Shape()
Appearance437 = x3d.Appearance()
Material438 = x3d.Material(USE="TextMat")

Appearance437.material = Material438

Shape436.appearance = Appearance437
Text439 = x3d.Text()
Text439.string = ["ArtDeco26"]
FontStyle440 = x3d.FontStyle(USE="Style")

Text439.fontStyle = FontStyle440

Shape436.geometry = Text439

Anchor435.children.append(Shape436)

Transform434.children.append(Anchor435)

Transform428.children.append(Transform434)

Group48.children.append(Transform428)
Viewpoint441 = x3d.Viewpoint(DEF="View27")
Viewpoint441.description = "ArtDeco27"
Viewpoint441.position = [0.75,-2.25,3]

Group48.children.append(Viewpoint441)
Transform442 = x3d.Transform()
Transform442.translation = [0.75,-2.25,0]
Anchor443 = x3d.Anchor()
Anchor443.description = "ArtDeco27 view"
Anchor443.url = ["#View27"]
Shape444 = x3d.Shape()
Appearance445 = x3d.Appearance()
ProtoInstance446 = x3d.ProtoInstance()
ProtoInstance446.name = "ArtDeco27"

Appearance445.material = ProtoInstance446

Shape444.appearance = Appearance445
Sphere447 = x3d.Sphere(USE="Ball")

Shape444.geometry = Sphere447

Anchor443.children.append(Shape444)

Transform442.children.append(Anchor443)
Transform448 = x3d.Transform()
Transform448.translation = [0,0.3,0.5]
Anchor449 = x3d.Anchor()
Anchor449.description = "ArtDeco27 view source documentation"
Anchor449.url = ["../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco27","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco27"]
Anchor449.parameter = ["target=_source"]
Shape450 = x3d.Shape()
Appearance451 = x3d.Appearance()
Material452 = x3d.Material(USE="TextMat")

Appearance451.material = Material452

Shape450.appearance = Appearance451
Text453 = x3d.Text()
Text453.string = ["ArtDeco27"]
FontStyle454 = x3d.FontStyle(USE="Style")

Text453.fontStyle = FontStyle454

Shape450.geometry = Text453

Anchor449.children.append(Shape450)

Transform448.children.append(Anchor449)

Transform442.children.append(Transform448)

Group48.children.append(Transform442)
Viewpoint455 = x3d.Viewpoint(DEF="View28")
Viewpoint455.description = "ArtDeco28"
Viewpoint455.position = [2.25,-2.25,3]

Group48.children.append(Viewpoint455)
Transform456 = x3d.Transform()
Transform456.translation = [2.25,-2.25,0]
Anchor457 = x3d.Anchor()
Anchor457.description = "ArtDeco28 view"
Anchor457.url = ["#View28"]
Shape458 = x3d.Shape()
Appearance459 = x3d.Appearance()
ProtoInstance460 = x3d.ProtoInstance()
ProtoInstance460.name = "ArtDeco28"

Appearance459.material = ProtoInstance460

Shape458.appearance = Appearance459
Sphere461 = x3d.Sphere(USE="Ball")

Shape458.geometry = Sphere461

Anchor457.children.append(Shape458)

Transform456.children.append(Anchor457)
Transform462 = x3d.Transform()
Transform462.translation = [0,0.3,0.5]
Anchor463 = x3d.Anchor()
Anchor463.description = "ArtDeco28 view source documentation"
Anchor463.url = ["../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco28","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco28"]
Anchor463.parameter = ["target=_source"]
Shape464 = x3d.Shape()
Appearance465 = x3d.Appearance()
Material466 = x3d.Material(USE="TextMat")

Appearance465.material = Material466

Shape464.appearance = Appearance465
Text467 = x3d.Text()
Text467.string = ["ArtDeco28"]
FontStyle468 = x3d.FontStyle(USE="Style")

Text467.fontStyle = FontStyle468

Shape464.geometry = Text467

Anchor463.children.append(Shape464)

Transform462.children.append(Anchor463)

Transform456.children.append(Transform462)

Group48.children.append(Transform456)
Viewpoint469 = x3d.Viewpoint(DEF="View29")
Viewpoint469.description = "ArtDeco29"
Viewpoint469.position = [3.75,-2.25,3]

Group48.children.append(Viewpoint469)
Transform470 = x3d.Transform()
Transform470.translation = [3.75,-2.25,0]
Anchor471 = x3d.Anchor()
Anchor471.description = "ArtDeco29 view"
Anchor471.url = ["#View29"]
Shape472 = x3d.Shape()
Appearance473 = x3d.Appearance()
ProtoInstance474 = x3d.ProtoInstance()
ProtoInstance474.name = "ArtDeco29"

Appearance473.material = ProtoInstance474

Shape472.appearance = Appearance473
Sphere475 = x3d.Sphere(USE="Ball")

Shape472.geometry = Sphere475

Anchor471.children.append(Shape472)

Transform470.children.append(Anchor471)
Transform476 = x3d.Transform()
Transform476.translation = [0,0.3,0.5]
Anchor477 = x3d.Anchor()
Anchor477.description = "ArtDeco29 view source documentation"
Anchor477.url = ["../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco29","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco29"]
Anchor477.parameter = ["target=_source"]
Shape478 = x3d.Shape()
Appearance479 = x3d.Appearance()
Material480 = x3d.Material(USE="TextMat")

Appearance479.material = Material480

Shape478.appearance = Appearance479
Text481 = x3d.Text()
Text481.string = ["ArtDeco29"]
FontStyle482 = x3d.FontStyle(USE="Style")

Text481.fontStyle = FontStyle482

Shape478.geometry = Text481

Anchor477.children.append(Shape478)

Transform476.children.append(Anchor477)

Transform470.children.append(Transform476)

Group48.children.append(Transform470)
Viewpoint483 = x3d.Viewpoint(DEF="View30")
Viewpoint483.description = "ArtDeco30"
Viewpoint483.position = [-3.75,-3.75,3]

Group48.children.append(Viewpoint483)
Transform484 = x3d.Transform()
Transform484.translation = [-3.75,-3.75,0]
Anchor485 = x3d.Anchor()
Anchor485.description = "ArtDeco30 view"
Anchor485.url = ["#View30"]
Shape486 = x3d.Shape()
Appearance487 = x3d.Appearance()
ProtoInstance488 = x3d.ProtoInstance()
ProtoInstance488.name = "ArtDeco30"

Appearance487.material = ProtoInstance488

Shape486.appearance = Appearance487
Sphere489 = x3d.Sphere(USE="Ball")

Shape486.geometry = Sphere489

Anchor485.children.append(Shape486)

Transform484.children.append(Anchor485)
Transform490 = x3d.Transform()
Transform490.translation = [0,0.3,0.5]
Anchor491 = x3d.Anchor()
Anchor491.description = "ArtDeco30 view source documentation"
Anchor491.url = ["../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco30","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco30"]
Anchor491.parameter = ["target=_source"]
Shape492 = x3d.Shape()
Appearance493 = x3d.Appearance()
Material494 = x3d.Material(USE="TextMat")

Appearance493.material = Material494

Shape492.appearance = Appearance493
Text495 = x3d.Text()
Text495.string = ["ArtDeco30"]
FontStyle496 = x3d.FontStyle(USE="Style")

Text495.fontStyle = FontStyle496

Shape492.geometry = Text495

Anchor491.children.append(Shape492)

Transform490.children.append(Anchor491)

Transform484.children.append(Transform490)

Group48.children.append(Transform484)
Viewpoint497 = x3d.Viewpoint(DEF="View31")
Viewpoint497.description = "ArtDeco31"
Viewpoint497.position = [-2.25,-3.75,3]

Group48.children.append(Viewpoint497)
Transform498 = x3d.Transform()
Transform498.translation = [-2.25,-3.75,0]
Anchor499 = x3d.Anchor()
Anchor499.description = "ArtDeco31 view"
Anchor499.url = ["#View31"]
Shape500 = x3d.Shape()
Appearance501 = x3d.Appearance()
ProtoInstance502 = x3d.ProtoInstance()
ProtoInstance502.name = "ArtDeco31"

Appearance501.material = ProtoInstance502

Shape500.appearance = Appearance501
Sphere503 = x3d.Sphere(USE="Ball")

Shape500.geometry = Sphere503

Anchor499.children.append(Shape500)

Transform498.children.append(Anchor499)
Transform504 = x3d.Transform()
Transform504.translation = [0,0.3,0.5]
Anchor505 = x3d.Anchor()
Anchor505.description = "ArtDeco31 view source documentation"
Anchor505.url = ["../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco31","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco31"]
Anchor505.parameter = ["target=_source"]
Shape506 = x3d.Shape()
Appearance507 = x3d.Appearance()
Material508 = x3d.Material(USE="TextMat")

Appearance507.material = Material508

Shape506.appearance = Appearance507
Text509 = x3d.Text()
Text509.string = ["ArtDeco31"]
FontStyle510 = x3d.FontStyle(USE="Style")

Text509.fontStyle = FontStyle510

Shape506.geometry = Text509

Anchor505.children.append(Shape506)

Transform504.children.append(Anchor505)

Transform498.children.append(Transform504)

Group48.children.append(Transform498)
Viewpoint511 = x3d.Viewpoint(DEF="View32")
Viewpoint511.description = "ArtDeco32"
Viewpoint511.position = [-0.75,-3.75,3]

Group48.children.append(Viewpoint511)
Transform512 = x3d.Transform()
Transform512.translation = [-0.75,-3.75,0]
Anchor513 = x3d.Anchor()
Anchor513.description = "ArtDeco32 view"
Anchor513.url = ["#View32"]
Shape514 = x3d.Shape()
Appearance515 = x3d.Appearance()
ProtoInstance516 = x3d.ProtoInstance()
ProtoInstance516.name = "ArtDeco32"

Appearance515.material = ProtoInstance516

Shape514.appearance = Appearance515
Sphere517 = x3d.Sphere(USE="Ball")

Shape514.geometry = Sphere517

Anchor513.children.append(Shape514)

Transform512.children.append(Anchor513)
Transform518 = x3d.Transform()
Transform518.translation = [0,0.3,0.5]
Anchor519 = x3d.Anchor()
Anchor519.description = "ArtDeco32 view source documentation"
Anchor519.url = ["../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco32","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco32"]
Anchor519.parameter = ["target=_source"]
Shape520 = x3d.Shape()
Appearance521 = x3d.Appearance()
Material522 = x3d.Material(USE="TextMat")

Appearance521.material = Material522

Shape520.appearance = Appearance521
Text523 = x3d.Text()
Text523.string = ["ArtDeco32"]
FontStyle524 = x3d.FontStyle(USE="Style")

Text523.fontStyle = FontStyle524

Shape520.geometry = Text523

Anchor519.children.append(Shape520)

Transform518.children.append(Anchor519)

Transform512.children.append(Transform518)

Group48.children.append(Transform512)
Viewpoint525 = x3d.Viewpoint(DEF="View33")
Viewpoint525.description = "ArtDeco33"
Viewpoint525.position = [0.75,-3.75,3]

Group48.children.append(Viewpoint525)
Transform526 = x3d.Transform()
Transform526.translation = [0.75,-3.75,0]
Anchor527 = x3d.Anchor()
Anchor527.description = "ArtDeco33 view"
Anchor527.url = ["#View33"]
Shape528 = x3d.Shape()
Appearance529 = x3d.Appearance()
ProtoInstance530 = x3d.ProtoInstance()
ProtoInstance530.name = "ArtDeco33"

Appearance529.material = ProtoInstance530

Shape528.appearance = Appearance529
Sphere531 = x3d.Sphere(USE="Ball")

Shape528.geometry = Sphere531

Anchor527.children.append(Shape528)

Transform526.children.append(Anchor527)
Transform532 = x3d.Transform()
Transform532.translation = [0,0.3,0.5]
Anchor533 = x3d.Anchor()
Anchor533.description = "ArtDeco33 view source documentation"
Anchor533.url = ["../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco33","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco33"]
Anchor533.parameter = ["target=_source"]
Shape534 = x3d.Shape()
Appearance535 = x3d.Appearance()
Material536 = x3d.Material(USE="TextMat")

Appearance535.material = Material536

Shape534.appearance = Appearance535
Text537 = x3d.Text()
Text537.string = ["ArtDeco33"]
FontStyle538 = x3d.FontStyle(USE="Style")

Text537.fontStyle = FontStyle538

Shape534.geometry = Text537

Anchor533.children.append(Shape534)

Transform532.children.append(Anchor533)

Transform526.children.append(Transform532)

Group48.children.append(Transform526)
Viewpoint539 = x3d.Viewpoint(DEF="View34")
Viewpoint539.description = "ArtDeco34"
Viewpoint539.position = [2.25,-3.75,3]

Group48.children.append(Viewpoint539)
Transform540 = x3d.Transform()
Transform540.translation = [2.25,-3.75,0]
Anchor541 = x3d.Anchor()
Anchor541.description = "ArtDeco34 view"
Anchor541.url = ["#View34"]
Shape542 = x3d.Shape()
Appearance543 = x3d.Appearance()
ProtoInstance544 = x3d.ProtoInstance()
ProtoInstance544.name = "ArtDeco34"

Appearance543.material = ProtoInstance544

Shape542.appearance = Appearance543
Sphere545 = x3d.Sphere(USE="Ball")

Shape542.geometry = Sphere545

Anchor541.children.append(Shape542)

Transform540.children.append(Anchor541)
Transform546 = x3d.Transform()
Transform546.translation = [0,0.3,0.5]
Anchor547 = x3d.Anchor()
Anchor547.description = "ArtDeco34 view source documentation"
Anchor547.url = ["../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco34","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco34"]
Anchor547.parameter = ["target=_source"]
Shape548 = x3d.Shape()
Appearance549 = x3d.Appearance()
Material550 = x3d.Material(USE="TextMat")

Appearance549.material = Material550

Shape548.appearance = Appearance549
Text551 = x3d.Text()
Text551.string = ["ArtDeco34"]
FontStyle552 = x3d.FontStyle(USE="Style")

Text551.fontStyle = FontStyle552

Shape548.geometry = Text551

Anchor547.children.append(Shape548)

Transform546.children.append(Anchor547)

Transform540.children.append(Transform546)

Group48.children.append(Transform540)

Scene11.children.append(Group48)
ROUTE553 = x3d.ROUTE()
ROUTE553.fromNode = "Close_Time"
ROUTE553.fromField = "fraction_changed"
ROUTE553.toNode = "Close_Mover"
ROUTE553.toField = "set_fraction"

Scene11.children.append(ROUTE553)
ROUTE554 = x3d.ROUTE()
ROUTE554.fromNode = "Close_Mover"
ROUTE554.fromField = "value_changed"
ROUTE554.toNode = "Close_travel"
ROUTE554.toField = "set_translation"

Scene11.children.append(ROUTE554)

X3D0.Scene = Scene11
f = open("../data/ArtDecoExamples.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/ArtDecoExamples.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/ArtDecoExamples.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
