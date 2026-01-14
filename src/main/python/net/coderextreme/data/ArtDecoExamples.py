print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.0"
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
meta7.content = "19 January 2025"

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
meta11 = x3d.meta()
meta11.name = "generator"
meta11.content = "Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html"

head1.children.append(meta11)
meta12 = x3d.meta()
meta12.name = "license"
meta12.content = "../license.html"

head1.children.append(meta12)

X3D0.head = head1
Scene13 = x3d.Scene()
WorldInfo14 = x3d.WorldInfo()
WorldInfo14.title = "ArtDecoExamples.x3d"

Scene13.children.append(WorldInfo14)
ExternProtoDeclare15 = x3d.ExternProtoDeclare()
ExternProtoDeclare15.name = "ArtDeco00"
ExternProtoDeclare15.appinfo = "UniversalMediaMaterials prototype"
ExternProtoDeclare15.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ExternProtoDeclare15.url = ["../data/ArtDecoPrototypes.json#ArtDeco00","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco00","ArtDecoPrototypes.wrl#ArtDeco00","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco00"]

Scene13.children.append(ExternProtoDeclare15)
ExternProtoDeclare16 = x3d.ExternProtoDeclare()
ExternProtoDeclare16.name = "ArtDeco01"
ExternProtoDeclare16.appinfo = "UniversalMediaMaterials prototype"
ExternProtoDeclare16.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ExternProtoDeclare16.url = ["../data/ArtDecoPrototypes.json#ArtDeco01","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco01","ArtDecoPrototypes.wrl#ArtDeco01","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco01"]

Scene13.children.append(ExternProtoDeclare16)
ExternProtoDeclare17 = x3d.ExternProtoDeclare()
ExternProtoDeclare17.name = "ArtDeco02"
ExternProtoDeclare17.appinfo = "UniversalMediaMaterials prototype"
ExternProtoDeclare17.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ExternProtoDeclare17.url = ["../data/ArtDecoPrototypes.json#ArtDeco02","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco02","ArtDecoPrototypes.wrl#ArtDeco02","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco02"]

Scene13.children.append(ExternProtoDeclare17)
ExternProtoDeclare18 = x3d.ExternProtoDeclare()
ExternProtoDeclare18.name = "ArtDeco03"
ExternProtoDeclare18.appinfo = "UniversalMediaMaterials prototype"
ExternProtoDeclare18.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ExternProtoDeclare18.url = ["../data/ArtDecoPrototypes.json#ArtDeco03","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco03","ArtDecoPrototypes.wrl#ArtDeco03","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco03"]

Scene13.children.append(ExternProtoDeclare18)
ExternProtoDeclare19 = x3d.ExternProtoDeclare()
ExternProtoDeclare19.name = "ArtDeco04"
ExternProtoDeclare19.appinfo = "UniversalMediaMaterials prototype"
ExternProtoDeclare19.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ExternProtoDeclare19.url = ["../data/ArtDecoPrototypes.json#ArtDeco04","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco04","ArtDecoPrototypes.wrl#ArtDeco04","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco04"]

Scene13.children.append(ExternProtoDeclare19)
ExternProtoDeclare20 = x3d.ExternProtoDeclare()
ExternProtoDeclare20.name = "ArtDeco05"
ExternProtoDeclare20.appinfo = "UniversalMediaMaterials prototype"
ExternProtoDeclare20.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ExternProtoDeclare20.url = ["../data/ArtDecoPrototypes.json#ArtDeco05","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco05","ArtDecoPrototypes.wrl#ArtDeco05","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco05"]

Scene13.children.append(ExternProtoDeclare20)
ExternProtoDeclare21 = x3d.ExternProtoDeclare()
ExternProtoDeclare21.name = "ArtDeco06"
ExternProtoDeclare21.appinfo = "UniversalMediaMaterials prototype"
ExternProtoDeclare21.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ExternProtoDeclare21.url = ["../data/ArtDecoPrototypes.json#ArtDeco06","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco06","ArtDecoPrototypes.wrl#ArtDeco06","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco06"]

Scene13.children.append(ExternProtoDeclare21)
ExternProtoDeclare22 = x3d.ExternProtoDeclare()
ExternProtoDeclare22.name = "ArtDeco07"
ExternProtoDeclare22.appinfo = "UniversalMediaMaterials prototype"
ExternProtoDeclare22.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ExternProtoDeclare22.url = ["../data/ArtDecoPrototypes.json#ArtDeco07","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco07","ArtDecoPrototypes.wrl#ArtDeco07","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco07"]

Scene13.children.append(ExternProtoDeclare22)
ExternProtoDeclare23 = x3d.ExternProtoDeclare()
ExternProtoDeclare23.name = "ArtDeco08"
ExternProtoDeclare23.appinfo = "UniversalMediaMaterials prototype"
ExternProtoDeclare23.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ExternProtoDeclare23.url = ["../data/ArtDecoPrototypes.json#ArtDeco08","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco08","ArtDecoPrototypes.wrl#ArtDeco08","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco08"]

Scene13.children.append(ExternProtoDeclare23)
ExternProtoDeclare24 = x3d.ExternProtoDeclare()
ExternProtoDeclare24.name = "ArtDeco09"
ExternProtoDeclare24.appinfo = "UniversalMediaMaterials prototype"
ExternProtoDeclare24.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ExternProtoDeclare24.url = ["../data/ArtDecoPrototypes.json#ArtDeco09","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco09","ArtDecoPrototypes.wrl#ArtDeco09","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco09"]

Scene13.children.append(ExternProtoDeclare24)
ExternProtoDeclare25 = x3d.ExternProtoDeclare()
ExternProtoDeclare25.name = "ArtDeco10"
ExternProtoDeclare25.appinfo = "UniversalMediaMaterials prototype"
ExternProtoDeclare25.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ExternProtoDeclare25.url = ["../data/ArtDecoPrototypes.json#ArtDeco10","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco10","ArtDecoPrototypes.wrl#ArtDeco10","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco10"]

Scene13.children.append(ExternProtoDeclare25)
ExternProtoDeclare26 = x3d.ExternProtoDeclare()
ExternProtoDeclare26.name = "ArtDeco11"
ExternProtoDeclare26.appinfo = "UniversalMediaMaterials prototype"
ExternProtoDeclare26.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ExternProtoDeclare26.url = ["../data/ArtDecoPrototypes.json#ArtDeco11","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco11","ArtDecoPrototypes.wrl#ArtDeco11","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco11"]

Scene13.children.append(ExternProtoDeclare26)
ExternProtoDeclare27 = x3d.ExternProtoDeclare()
ExternProtoDeclare27.name = "ArtDeco12"
ExternProtoDeclare27.appinfo = "UniversalMediaMaterials prototype"
ExternProtoDeclare27.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ExternProtoDeclare27.url = ["../data/ArtDecoPrototypes.json#ArtDeco12","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco12","ArtDecoPrototypes.wrl#ArtDeco12","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco12"]

Scene13.children.append(ExternProtoDeclare27)
ExternProtoDeclare28 = x3d.ExternProtoDeclare()
ExternProtoDeclare28.name = "ArtDeco13"
ExternProtoDeclare28.appinfo = "UniversalMediaMaterials prototype"
ExternProtoDeclare28.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ExternProtoDeclare28.url = ["../data/ArtDecoPrototypes.json#ArtDeco13","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco13","ArtDecoPrototypes.wrl#ArtDeco13","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco13"]

Scene13.children.append(ExternProtoDeclare28)
ExternProtoDeclare29 = x3d.ExternProtoDeclare()
ExternProtoDeclare29.name = "ArtDeco14"
ExternProtoDeclare29.appinfo = "UniversalMediaMaterials prototype"
ExternProtoDeclare29.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ExternProtoDeclare29.url = ["../data/ArtDecoPrototypes.json#ArtDeco14","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco14","ArtDecoPrototypes.wrl#ArtDeco14","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco14"]

Scene13.children.append(ExternProtoDeclare29)
ExternProtoDeclare30 = x3d.ExternProtoDeclare()
ExternProtoDeclare30.name = "ArtDeco15"
ExternProtoDeclare30.appinfo = "UniversalMediaMaterials prototype"
ExternProtoDeclare30.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ExternProtoDeclare30.url = ["../data/ArtDecoPrototypes.json#ArtDeco15","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco15","ArtDecoPrototypes.wrl#ArtDeco15","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco15"]

Scene13.children.append(ExternProtoDeclare30)
ExternProtoDeclare31 = x3d.ExternProtoDeclare()
ExternProtoDeclare31.name = "ArtDeco16"
ExternProtoDeclare31.appinfo = "UniversalMediaMaterials prototype"
ExternProtoDeclare31.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ExternProtoDeclare31.url = ["../data/ArtDecoPrototypes.json#ArtDeco16","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco16","ArtDecoPrototypes.wrl#ArtDeco16","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco16"]

Scene13.children.append(ExternProtoDeclare31)
ExternProtoDeclare32 = x3d.ExternProtoDeclare()
ExternProtoDeclare32.name = "ArtDeco17"
ExternProtoDeclare32.appinfo = "UniversalMediaMaterials prototype"
ExternProtoDeclare32.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ExternProtoDeclare32.url = ["../data/ArtDecoPrototypes.json#ArtDeco17","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco17","ArtDecoPrototypes.wrl#ArtDeco17","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco17"]

Scene13.children.append(ExternProtoDeclare32)
ExternProtoDeclare33 = x3d.ExternProtoDeclare()
ExternProtoDeclare33.name = "ArtDeco18"
ExternProtoDeclare33.appinfo = "UniversalMediaMaterials prototype"
ExternProtoDeclare33.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ExternProtoDeclare33.url = ["../data/ArtDecoPrototypes.json#ArtDeco18","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco18","ArtDecoPrototypes.wrl#ArtDeco18","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco18"]

Scene13.children.append(ExternProtoDeclare33)
ExternProtoDeclare34 = x3d.ExternProtoDeclare()
ExternProtoDeclare34.name = "ArtDeco19"
ExternProtoDeclare34.appinfo = "UniversalMediaMaterials prototype"
ExternProtoDeclare34.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ExternProtoDeclare34.url = ["../data/ArtDecoPrototypes.json#ArtDeco19","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco19","ArtDecoPrototypes.wrl#ArtDeco19","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco19"]

Scene13.children.append(ExternProtoDeclare34)
ExternProtoDeclare35 = x3d.ExternProtoDeclare()
ExternProtoDeclare35.name = "ArtDeco20"
ExternProtoDeclare35.appinfo = "UniversalMediaMaterials prototype"
ExternProtoDeclare35.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ExternProtoDeclare35.url = ["../data/ArtDecoPrototypes.json#ArtDeco20","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco20","ArtDecoPrototypes.wrl#ArtDeco20","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco20"]

Scene13.children.append(ExternProtoDeclare35)
ExternProtoDeclare36 = x3d.ExternProtoDeclare()
ExternProtoDeclare36.name = "ArtDeco21"
ExternProtoDeclare36.appinfo = "UniversalMediaMaterials prototype"
ExternProtoDeclare36.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ExternProtoDeclare36.url = ["../data/ArtDecoPrototypes.json#ArtDeco21","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco21","ArtDecoPrototypes.wrl#ArtDeco21","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco21"]

Scene13.children.append(ExternProtoDeclare36)
ExternProtoDeclare37 = x3d.ExternProtoDeclare()
ExternProtoDeclare37.name = "ArtDeco22"
ExternProtoDeclare37.appinfo = "UniversalMediaMaterials prototype"
ExternProtoDeclare37.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ExternProtoDeclare37.url = ["../data/ArtDecoPrototypes.json#ArtDeco22","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco22","ArtDecoPrototypes.wrl#ArtDeco22","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco22"]

Scene13.children.append(ExternProtoDeclare37)
ExternProtoDeclare38 = x3d.ExternProtoDeclare()
ExternProtoDeclare38.name = "ArtDeco23"
ExternProtoDeclare38.appinfo = "UniversalMediaMaterials prototype"
ExternProtoDeclare38.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ExternProtoDeclare38.url = ["../data/ArtDecoPrototypes.json#ArtDeco23","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco23","ArtDecoPrototypes.wrl#ArtDeco23","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco23"]

Scene13.children.append(ExternProtoDeclare38)
ExternProtoDeclare39 = x3d.ExternProtoDeclare()
ExternProtoDeclare39.name = "ArtDeco24"
ExternProtoDeclare39.appinfo = "UniversalMediaMaterials prototype"
ExternProtoDeclare39.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ExternProtoDeclare39.url = ["../data/ArtDecoPrototypes.json#ArtDeco24","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco24","ArtDecoPrototypes.wrl#ArtDeco24","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco24"]

Scene13.children.append(ExternProtoDeclare39)
ExternProtoDeclare40 = x3d.ExternProtoDeclare()
ExternProtoDeclare40.name = "ArtDeco25"
ExternProtoDeclare40.appinfo = "UniversalMediaMaterials prototype"
ExternProtoDeclare40.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ExternProtoDeclare40.url = ["../data/ArtDecoPrototypes.json#ArtDeco25","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco25","ArtDecoPrototypes.wrl#ArtDeco25","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco25"]

Scene13.children.append(ExternProtoDeclare40)
ExternProtoDeclare41 = x3d.ExternProtoDeclare()
ExternProtoDeclare41.name = "ArtDeco26"
ExternProtoDeclare41.appinfo = "UniversalMediaMaterials prototype"
ExternProtoDeclare41.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ExternProtoDeclare41.url = ["../data/ArtDecoPrototypes.json#ArtDeco26","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco26","ArtDecoPrototypes.wrl#ArtDeco26","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco26"]

Scene13.children.append(ExternProtoDeclare41)
ExternProtoDeclare42 = x3d.ExternProtoDeclare()
ExternProtoDeclare42.name = "ArtDeco27"
ExternProtoDeclare42.appinfo = "UniversalMediaMaterials prototype"
ExternProtoDeclare42.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ExternProtoDeclare42.url = ["../data/ArtDecoPrototypes.json#ArtDeco27","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco27","ArtDecoPrototypes.wrl#ArtDeco27","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco27"]

Scene13.children.append(ExternProtoDeclare42)
ExternProtoDeclare43 = x3d.ExternProtoDeclare()
ExternProtoDeclare43.name = "ArtDeco28"
ExternProtoDeclare43.appinfo = "UniversalMediaMaterials prototype"
ExternProtoDeclare43.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ExternProtoDeclare43.url = ["../data/ArtDecoPrototypes.json#ArtDeco28","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco28","ArtDecoPrototypes.wrl#ArtDeco28","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco28"]

Scene13.children.append(ExternProtoDeclare43)
ExternProtoDeclare44 = x3d.ExternProtoDeclare()
ExternProtoDeclare44.name = "ArtDeco29"
ExternProtoDeclare44.appinfo = "UniversalMediaMaterials prototype"
ExternProtoDeclare44.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ExternProtoDeclare44.url = ["../data/ArtDecoPrototypes.json#ArtDeco29","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco29","ArtDecoPrototypes.wrl#ArtDeco29","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco29"]

Scene13.children.append(ExternProtoDeclare44)
ExternProtoDeclare45 = x3d.ExternProtoDeclare()
ExternProtoDeclare45.name = "ArtDeco30"
ExternProtoDeclare45.appinfo = "UniversalMediaMaterials prototype"
ExternProtoDeclare45.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ExternProtoDeclare45.url = ["../data/ArtDecoPrototypes.json#ArtDeco30","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco30","ArtDecoPrototypes.wrl#ArtDeco30","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco30"]

Scene13.children.append(ExternProtoDeclare45)
ExternProtoDeclare46 = x3d.ExternProtoDeclare()
ExternProtoDeclare46.name = "ArtDeco31"
ExternProtoDeclare46.appinfo = "UniversalMediaMaterials prototype"
ExternProtoDeclare46.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ExternProtoDeclare46.url = ["../data/ArtDecoPrototypes.json#ArtDeco31","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco31","ArtDecoPrototypes.wrl#ArtDeco31","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco31"]

Scene13.children.append(ExternProtoDeclare46)
ExternProtoDeclare47 = x3d.ExternProtoDeclare()
ExternProtoDeclare47.name = "ArtDeco32"
ExternProtoDeclare47.appinfo = "UniversalMediaMaterials prototype"
ExternProtoDeclare47.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ExternProtoDeclare47.url = ["../data/ArtDecoPrototypes.json#ArtDeco32","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco32","ArtDecoPrototypes.wrl#ArtDeco32","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco32"]

Scene13.children.append(ExternProtoDeclare47)
ExternProtoDeclare48 = x3d.ExternProtoDeclare()
ExternProtoDeclare48.name = "ArtDeco33"
ExternProtoDeclare48.appinfo = "UniversalMediaMaterials prototype"
ExternProtoDeclare48.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ExternProtoDeclare48.url = ["../data/ArtDecoPrototypes.json#ArtDeco33","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco33","ArtDecoPrototypes.wrl#ArtDeco33","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco33"]

Scene13.children.append(ExternProtoDeclare48)
ExternProtoDeclare49 = x3d.ExternProtoDeclare()
ExternProtoDeclare49.name = "ArtDeco34"
ExternProtoDeclare49.appinfo = "UniversalMediaMaterials prototype"
ExternProtoDeclare49.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ExternProtoDeclare49.url = ["../data/ArtDecoPrototypes.json#ArtDeco34","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco34","ArtDecoPrototypes.wrl#ArtDeco34","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco34"]

Scene13.children.append(ExternProtoDeclare49)
Group50 = x3d.Group()
NavigationInfo51 = x3d.NavigationInfo()
NavigationInfo51.headlight = False

Group50.children.append(NavigationInfo51)
Viewpoint52 = x3d.Viewpoint()
Viewpoint52.DEF = "Front"
Viewpoint52.description = "Front view"
Viewpoint52.position = [0,0,12]

Group50.children.append(Viewpoint52)
Viewpoint53 = x3d.Viewpoint()
Viewpoint53.DEF = "PersRight"
Viewpoint53.description = "Low Right"
Viewpoint53.orientation = [0.74291,0.30772,0.59447,1.2171]
Viewpoint53.position = [6.9282,-6.9282,6.9282]

Group50.children.append(Viewpoint53)
Viewpoint54 = x3d.Viewpoint()
Viewpoint54.DEF = "PersLeft"
Viewpoint54.description = "Low Left"
Viewpoint54.orientation = [0.74291,-0.30772,-0.59447,1.2171]
Viewpoint54.position = [-6.9282,-6.9282,6.9282]

Group50.children.append(Viewpoint54)
Viewpoint55 = x3d.Viewpoint()
Viewpoint55.DEF = "Back"
Viewpoint55.description = "Back view"
Viewpoint55.orientation = [0,1,0,3.1416]
Viewpoint55.position = [0,0,-12]

Group50.children.append(Viewpoint55)
Transform56 = x3d.Transform()
Transform56.DEF = "Close_travel"
PositionInterpolator57 = x3d.PositionInterpolator()
PositionInterpolator57.DEF = "Close_Mover"
PositionInterpolator57.key = [0,0.25,0.5,0.75,1]
PositionInterpolator57.keyValue = [(0, 2.5, 0),(0, 0, 0),(0, -2.5, 0),(0, 0, 0),(0, 2.5, 0)]

Transform56.children.append(PositionInterpolator57)
TimeSensor58 = x3d.TimeSensor()
TimeSensor58.DEF = "Close_Time"
TimeSensor58.cycleInterval = 12
TimeSensor58.loop = True

Transform56.children.append(TimeSensor58)
Viewpoint59 = x3d.Viewpoint()
Viewpoint59.DEF = "Close"
Viewpoint59.description = "Close Front"
Viewpoint59.position = [0,0,6]

Transform56.children.append(Viewpoint59)

Group50.children.append(Transform56)
DirectionalLight60 = x3d.DirectionalLight()
DirectionalLight60.direction = [1,-1,-1]

Group50.children.append(DirectionalLight60)
DirectionalLight61 = x3d.DirectionalLight()
DirectionalLight61.direction = [0,1,-0.5]
DirectionalLight61.intensity = 0.5

Group50.children.append(DirectionalLight61)
Anchor62 = x3d.Anchor()
Anchor62.description = "Return to front view"
Anchor62.url = ["#Front"]
Transform63 = x3d.Transform()
Transform63.translation = [0,0,-0.5]
Inline64 = x3d.Inline()
Inline64.url = ["../data/gridBack.json","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/gridBack.x3d","gridBack.wrl","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/gridBack.wrl"]

Transform63.children.append(Inline64)

Anchor62.children.append(Transform63)

Group50.children.append(Anchor62)
Viewpoint65 = x3d.Viewpoint()
Viewpoint65.DEF = "View00"
Viewpoint65.description = "ArtDeco00"
Viewpoint65.position = [-3.75,3.75,3]

Group50.children.append(Viewpoint65)
Transform66 = x3d.Transform()
Transform66.translation = [-3.75,3.75,0]
Anchor67 = x3d.Anchor()
Anchor67.description = "ArtDeco00 view"
Anchor67.url = ["#View00"]
Shape68 = x3d.Shape()
Appearance69 = x3d.Appearance()
ProtoInstance70 = x3d.ProtoInstance()
ProtoInstance70.name = "ArtDeco00"

Appearance69.material = ProtoInstance70

Shape68.appearance = Appearance69
Sphere71 = x3d.Sphere()
Sphere71.DEF = "Ball"
Sphere71.radius = 0.5

Shape68.geometry = Sphere71

Anchor67.children.append(Shape68)

Transform66.children.append(Anchor67)
Transform72 = x3d.Transform()
Transform72.translation = [0,0.3,0.5]
Anchor73 = x3d.Anchor()
Anchor73.description = "ArtDeco00 view source documentation"
Anchor73.parameter = ["target=_source"]
Anchor73.url = ["../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco00","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco00"]
Shape74 = x3d.Shape()
Appearance75 = x3d.Appearance()
Material76 = x3d.Material()
Material76.DEF = "TextMat"
Material76.diffuseColor = [1,1,1]

Appearance75.material = Material76

Shape74.appearance = Appearance75
Text77 = x3d.Text()
Text77.string = ["ArtDeco00"]
FontStyle78 = x3d.FontStyle()
FontStyle78.DEF = "Style"
FontStyle78.family = ["SANS"]
FontStyle78.justify = ["MIDDLE","MIDDLE"]
FontStyle78.size = 0.3
FontStyle78.style = "BOLD"

Text77.fontStyle = FontStyle78

Shape74.geometry = Text77

Anchor73.children.append(Shape74)

Transform72.children.append(Anchor73)

Transform66.children.append(Transform72)

Group50.children.append(Transform66)
Viewpoint79 = x3d.Viewpoint()
Viewpoint79.DEF = "View01"
Viewpoint79.description = "ArtDeco01"
Viewpoint79.position = [-2.25,3.75,3]

Group50.children.append(Viewpoint79)
Transform80 = x3d.Transform()
Transform80.translation = [-2.25,3.75,0]
Anchor81 = x3d.Anchor()
Anchor81.description = "ArtDeco01 view"
Anchor81.url = ["#View01"]
Shape82 = x3d.Shape()
Appearance83 = x3d.Appearance()
ProtoInstance84 = x3d.ProtoInstance()
ProtoInstance84.name = "ArtDeco01"

Appearance83.material = ProtoInstance84

Shape82.appearance = Appearance83
Sphere85 = x3d.Sphere()
Sphere85.USE = "Ball"

Shape82.geometry = Sphere85

Anchor81.children.append(Shape82)

Transform80.children.append(Anchor81)
Transform86 = x3d.Transform()
Transform86.translation = [0,0.3,0.5]
Anchor87 = x3d.Anchor()
Anchor87.description = "ArtDeco01 view source documentation"
Anchor87.parameter = ["target=_source"]
Anchor87.url = ["../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco01","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco01"]
Shape88 = x3d.Shape()
Appearance89 = x3d.Appearance()
Material90 = x3d.Material()
Material90.USE = "TextMat"

Appearance89.material = Material90

Shape88.appearance = Appearance89
Text91 = x3d.Text()
Text91.string = ["ArtDeco01"]
FontStyle92 = x3d.FontStyle()
FontStyle92.USE = "Style"

Text91.fontStyle = FontStyle92

Shape88.geometry = Text91

Anchor87.children.append(Shape88)

Transform86.children.append(Anchor87)

Transform80.children.append(Transform86)

Group50.children.append(Transform80)
Viewpoint93 = x3d.Viewpoint()
Viewpoint93.DEF = "View02"
Viewpoint93.description = "ArtDeco02"
Viewpoint93.position = [-0.75,3.75,3]

Group50.children.append(Viewpoint93)
Transform94 = x3d.Transform()
Transform94.translation = [-0.75,3.75,0]
Anchor95 = x3d.Anchor()
Anchor95.description = "ArtDeco02 view"
Anchor95.url = ["#View02"]
Shape96 = x3d.Shape()
Appearance97 = x3d.Appearance()
ProtoInstance98 = x3d.ProtoInstance()
ProtoInstance98.name = "ArtDeco02"

Appearance97.material = ProtoInstance98

Shape96.appearance = Appearance97
Sphere99 = x3d.Sphere()
Sphere99.USE = "Ball"

Shape96.geometry = Sphere99

Anchor95.children.append(Shape96)

Transform94.children.append(Anchor95)
Transform100 = x3d.Transform()
Transform100.translation = [0,0.3,0.5]
Anchor101 = x3d.Anchor()
Anchor101.description = "ArtDeco02 view source documentation"
Anchor101.parameter = ["target=_source"]
Anchor101.url = ["../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco02","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco02"]
Shape102 = x3d.Shape()
Appearance103 = x3d.Appearance()
Material104 = x3d.Material()
Material104.USE = "TextMat"

Appearance103.material = Material104

Shape102.appearance = Appearance103
Text105 = x3d.Text()
Text105.string = ["ArtDeco02"]
FontStyle106 = x3d.FontStyle()
FontStyle106.USE = "Style"

Text105.fontStyle = FontStyle106

Shape102.geometry = Text105

Anchor101.children.append(Shape102)

Transform100.children.append(Anchor101)

Transform94.children.append(Transform100)

Group50.children.append(Transform94)
Viewpoint107 = x3d.Viewpoint()
Viewpoint107.DEF = "View03"
Viewpoint107.description = "ArtDeco03"
Viewpoint107.position = [0.75,3.75,3]

Group50.children.append(Viewpoint107)
Transform108 = x3d.Transform()
Transform108.translation = [0.75,3.75,0]
Anchor109 = x3d.Anchor()
Anchor109.description = "ArtDeco03 view"
Anchor109.url = ["#View03"]
Shape110 = x3d.Shape()
Appearance111 = x3d.Appearance()
ProtoInstance112 = x3d.ProtoInstance()
ProtoInstance112.name = "ArtDeco03"

Appearance111.material = ProtoInstance112

Shape110.appearance = Appearance111
Sphere113 = x3d.Sphere()
Sphere113.USE = "Ball"

Shape110.geometry = Sphere113

Anchor109.children.append(Shape110)

Transform108.children.append(Anchor109)
Transform114 = x3d.Transform()
Transform114.translation = [0,0.3,0.5]
Anchor115 = x3d.Anchor()
Anchor115.description = "ArtDeco03 view source documentation"
Anchor115.parameter = ["target=_source"]
Anchor115.url = ["../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco03","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco03"]
Shape116 = x3d.Shape()
Appearance117 = x3d.Appearance()
Material118 = x3d.Material()
Material118.USE = "TextMat"

Appearance117.material = Material118

Shape116.appearance = Appearance117
Text119 = x3d.Text()
Text119.string = ["ArtDeco03"]
FontStyle120 = x3d.FontStyle()
FontStyle120.USE = "Style"

Text119.fontStyle = FontStyle120

Shape116.geometry = Text119

Anchor115.children.append(Shape116)

Transform114.children.append(Anchor115)

Transform108.children.append(Transform114)

Group50.children.append(Transform108)
Viewpoint121 = x3d.Viewpoint()
Viewpoint121.DEF = "View04"
Viewpoint121.description = "ArtDeco04"
Viewpoint121.position = [2.25,3.75,3]

Group50.children.append(Viewpoint121)
Transform122 = x3d.Transform()
Transform122.translation = [2.25,3.75,0]
Anchor123 = x3d.Anchor()
Anchor123.description = "ArtDeco04 view"
Anchor123.url = ["#View04"]
Shape124 = x3d.Shape()
Appearance125 = x3d.Appearance()
ProtoInstance126 = x3d.ProtoInstance()
ProtoInstance126.name = "ArtDeco04"

Appearance125.material = ProtoInstance126

Shape124.appearance = Appearance125
Sphere127 = x3d.Sphere()
Sphere127.USE = "Ball"

Shape124.geometry = Sphere127

Anchor123.children.append(Shape124)

Transform122.children.append(Anchor123)
Transform128 = x3d.Transform()
Transform128.translation = [0,0.3,0.5]
Anchor129 = x3d.Anchor()
Anchor129.description = "ArtDeco04 view source documentation"
Anchor129.parameter = ["target=_source"]
Anchor129.url = ["../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco04","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco04"]
Shape130 = x3d.Shape()
Appearance131 = x3d.Appearance()
Material132 = x3d.Material()
Material132.USE = "TextMat"

Appearance131.material = Material132

Shape130.appearance = Appearance131
Text133 = x3d.Text()
Text133.string = ["ArtDeco04"]
FontStyle134 = x3d.FontStyle()
FontStyle134.USE = "Style"

Text133.fontStyle = FontStyle134

Shape130.geometry = Text133

Anchor129.children.append(Shape130)

Transform128.children.append(Anchor129)

Transform122.children.append(Transform128)

Group50.children.append(Transform122)
Viewpoint135 = x3d.Viewpoint()
Viewpoint135.DEF = "View05"
Viewpoint135.description = "ArtDeco05"
Viewpoint135.position = [3.75,3.75,3]

Group50.children.append(Viewpoint135)
Transform136 = x3d.Transform()
Transform136.translation = [3.75,3.75,0]
Anchor137 = x3d.Anchor()
Anchor137.description = "ArtDeco05 view"
Anchor137.url = ["#View05"]
Shape138 = x3d.Shape()
Appearance139 = x3d.Appearance()
ProtoInstance140 = x3d.ProtoInstance()
ProtoInstance140.name = "ArtDeco05"

Appearance139.material = ProtoInstance140

Shape138.appearance = Appearance139
Sphere141 = x3d.Sphere()
Sphere141.USE = "Ball"

Shape138.geometry = Sphere141

Anchor137.children.append(Shape138)

Transform136.children.append(Anchor137)
Transform142 = x3d.Transform()
Transform142.translation = [0,0.3,0.5]
Anchor143 = x3d.Anchor()
Anchor143.description = "ArtDeco05 view source documentation"
Anchor143.parameter = ["target=_source"]
Anchor143.url = ["../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco05","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco05"]
Shape144 = x3d.Shape()
Appearance145 = x3d.Appearance()
Material146 = x3d.Material()
Material146.USE = "TextMat"

Appearance145.material = Material146

Shape144.appearance = Appearance145
Text147 = x3d.Text()
Text147.string = ["ArtDeco05"]
FontStyle148 = x3d.FontStyle()
FontStyle148.USE = "Style"

Text147.fontStyle = FontStyle148

Shape144.geometry = Text147

Anchor143.children.append(Shape144)

Transform142.children.append(Anchor143)

Transform136.children.append(Transform142)

Group50.children.append(Transform136)
Viewpoint149 = x3d.Viewpoint()
Viewpoint149.DEF = "View06"
Viewpoint149.description = "ArtDeco06"
Viewpoint149.position = [-3.75,2.25,3]

Group50.children.append(Viewpoint149)
Transform150 = x3d.Transform()
Transform150.translation = [-3.75,2.25,0]
Anchor151 = x3d.Anchor()
Anchor151.description = "ArtDeco06 view"
Anchor151.url = ["#View06"]
Shape152 = x3d.Shape()
Appearance153 = x3d.Appearance()
ProtoInstance154 = x3d.ProtoInstance()
ProtoInstance154.name = "ArtDeco06"

Appearance153.material = ProtoInstance154

Shape152.appearance = Appearance153
Sphere155 = x3d.Sphere()
Sphere155.USE = "Ball"

Shape152.geometry = Sphere155

Anchor151.children.append(Shape152)

Transform150.children.append(Anchor151)
Transform156 = x3d.Transform()
Transform156.translation = [0,0.3,0.5]
Anchor157 = x3d.Anchor()
Anchor157.description = "ArtDeco06 view source documentation"
Anchor157.parameter = ["target=_source"]
Anchor157.url = ["../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco06","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco06"]
Shape158 = x3d.Shape()
Appearance159 = x3d.Appearance()
Material160 = x3d.Material()
Material160.USE = "TextMat"

Appearance159.material = Material160

Shape158.appearance = Appearance159
Text161 = x3d.Text()
Text161.string = ["ArtDeco06"]
FontStyle162 = x3d.FontStyle()
FontStyle162.USE = "Style"

Text161.fontStyle = FontStyle162

Shape158.geometry = Text161

Anchor157.children.append(Shape158)

Transform156.children.append(Anchor157)

Transform150.children.append(Transform156)

Group50.children.append(Transform150)
Viewpoint163 = x3d.Viewpoint()
Viewpoint163.DEF = "View07"
Viewpoint163.description = "ArtDeco07"
Viewpoint163.position = [-2.25,2.25,3]

Group50.children.append(Viewpoint163)
Transform164 = x3d.Transform()
Transform164.translation = [-2.25,2.25,0]
Anchor165 = x3d.Anchor()
Anchor165.description = "ArtDeco07 view"
Anchor165.url = ["#View07"]
Shape166 = x3d.Shape()
Appearance167 = x3d.Appearance()
ProtoInstance168 = x3d.ProtoInstance()
ProtoInstance168.name = "ArtDeco07"

Appearance167.material = ProtoInstance168

Shape166.appearance = Appearance167
Sphere169 = x3d.Sphere()
Sphere169.USE = "Ball"

Shape166.geometry = Sphere169

Anchor165.children.append(Shape166)

Transform164.children.append(Anchor165)
Transform170 = x3d.Transform()
Transform170.translation = [0,0.3,0.5]
Anchor171 = x3d.Anchor()
Anchor171.description = "ArtDeco07 view source documentation"
Anchor171.parameter = ["target=_source"]
Anchor171.url = ["../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco07","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco07"]
Shape172 = x3d.Shape()
Appearance173 = x3d.Appearance()
Material174 = x3d.Material()
Material174.USE = "TextMat"

Appearance173.material = Material174

Shape172.appearance = Appearance173
Text175 = x3d.Text()
Text175.string = ["ArtDeco07"]
FontStyle176 = x3d.FontStyle()
FontStyle176.USE = "Style"

Text175.fontStyle = FontStyle176

Shape172.geometry = Text175

Anchor171.children.append(Shape172)

Transform170.children.append(Anchor171)

Transform164.children.append(Transform170)

Group50.children.append(Transform164)
Viewpoint177 = x3d.Viewpoint()
Viewpoint177.DEF = "View08"
Viewpoint177.description = "ArtDeco08"
Viewpoint177.position = [-0.75,2.25,3]

Group50.children.append(Viewpoint177)
Transform178 = x3d.Transform()
Transform178.translation = [-0.75,2.25,0]
Anchor179 = x3d.Anchor()
Anchor179.description = "ArtDeco08 view"
Anchor179.url = ["#View08"]
Shape180 = x3d.Shape()
Appearance181 = x3d.Appearance()
ProtoInstance182 = x3d.ProtoInstance()
ProtoInstance182.name = "ArtDeco08"

Appearance181.material = ProtoInstance182

Shape180.appearance = Appearance181
Sphere183 = x3d.Sphere()
Sphere183.USE = "Ball"

Shape180.geometry = Sphere183

Anchor179.children.append(Shape180)

Transform178.children.append(Anchor179)
Transform184 = x3d.Transform()
Transform184.translation = [0,0.3,0.5]
Anchor185 = x3d.Anchor()
Anchor185.description = "ArtDeco08 view source documentation"
Anchor185.parameter = ["target=_source"]
Anchor185.url = ["../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco08","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco08"]
Shape186 = x3d.Shape()
Appearance187 = x3d.Appearance()
Material188 = x3d.Material()
Material188.USE = "TextMat"

Appearance187.material = Material188

Shape186.appearance = Appearance187
Text189 = x3d.Text()
Text189.string = ["ArtDeco08"]
FontStyle190 = x3d.FontStyle()
FontStyle190.USE = "Style"

Text189.fontStyle = FontStyle190

Shape186.geometry = Text189

Anchor185.children.append(Shape186)

Transform184.children.append(Anchor185)

Transform178.children.append(Transform184)

Group50.children.append(Transform178)
Viewpoint191 = x3d.Viewpoint()
Viewpoint191.DEF = "View09"
Viewpoint191.description = "ArtDeco09"
Viewpoint191.position = [0.75,2.25,3]

Group50.children.append(Viewpoint191)
Transform192 = x3d.Transform()
Transform192.translation = [0.75,2.25,0]
Anchor193 = x3d.Anchor()
Anchor193.description = "ArtDeco09 view"
Anchor193.url = ["#View09"]
Shape194 = x3d.Shape()
Appearance195 = x3d.Appearance()
ProtoInstance196 = x3d.ProtoInstance()
ProtoInstance196.name = "ArtDeco09"

Appearance195.material = ProtoInstance196

Shape194.appearance = Appearance195
Sphere197 = x3d.Sphere()
Sphere197.USE = "Ball"

Shape194.geometry = Sphere197

Anchor193.children.append(Shape194)

Transform192.children.append(Anchor193)
Transform198 = x3d.Transform()
Transform198.translation = [0,0.3,0.5]
Anchor199 = x3d.Anchor()
Anchor199.description = "ArtDeco09 view source documentation"
Anchor199.parameter = ["target=_source"]
Anchor199.url = ["../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco09","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco09"]
Shape200 = x3d.Shape()
Appearance201 = x3d.Appearance()
Material202 = x3d.Material()
Material202.USE = "TextMat"

Appearance201.material = Material202

Shape200.appearance = Appearance201
Text203 = x3d.Text()
Text203.string = ["ArtDeco09"]
FontStyle204 = x3d.FontStyle()
FontStyle204.USE = "Style"

Text203.fontStyle = FontStyle204

Shape200.geometry = Text203

Anchor199.children.append(Shape200)

Transform198.children.append(Anchor199)

Transform192.children.append(Transform198)

Group50.children.append(Transform192)
Viewpoint205 = x3d.Viewpoint()
Viewpoint205.DEF = "View10"
Viewpoint205.description = "ArtDeco10"
Viewpoint205.position = [2.25,2.25,3]

Group50.children.append(Viewpoint205)
Transform206 = x3d.Transform()
Transform206.translation = [2.25,2.25,0]
Anchor207 = x3d.Anchor()
Anchor207.description = "ArtDeco10 view"
Anchor207.url = ["#View10"]
Shape208 = x3d.Shape()
Appearance209 = x3d.Appearance()
ProtoInstance210 = x3d.ProtoInstance()
ProtoInstance210.name = "ArtDeco10"

Appearance209.material = ProtoInstance210

Shape208.appearance = Appearance209
Sphere211 = x3d.Sphere()
Sphere211.USE = "Ball"

Shape208.geometry = Sphere211

Anchor207.children.append(Shape208)

Transform206.children.append(Anchor207)
Transform212 = x3d.Transform()
Transform212.translation = [0,0.3,0.5]
Anchor213 = x3d.Anchor()
Anchor213.description = "ArtDeco10 view source documentation"
Anchor213.parameter = ["target=_source"]
Anchor213.url = ["../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco10","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco10"]
Shape214 = x3d.Shape()
Appearance215 = x3d.Appearance()
Material216 = x3d.Material()
Material216.USE = "TextMat"

Appearance215.material = Material216

Shape214.appearance = Appearance215
Text217 = x3d.Text()
Text217.string = ["ArtDeco10"]
FontStyle218 = x3d.FontStyle()
FontStyle218.USE = "Style"

Text217.fontStyle = FontStyle218

Shape214.geometry = Text217

Anchor213.children.append(Shape214)

Transform212.children.append(Anchor213)

Transform206.children.append(Transform212)

Group50.children.append(Transform206)
Viewpoint219 = x3d.Viewpoint()
Viewpoint219.DEF = "View11"
Viewpoint219.description = "ArtDeco11"
Viewpoint219.position = [3.75,2.25,3]

Group50.children.append(Viewpoint219)
Transform220 = x3d.Transform()
Transform220.translation = [3.75,2.25,0]
Anchor221 = x3d.Anchor()
Anchor221.description = "ArtDeco11 view"
Anchor221.url = ["#View11"]
Shape222 = x3d.Shape()
Appearance223 = x3d.Appearance()
ProtoInstance224 = x3d.ProtoInstance()
ProtoInstance224.name = "ArtDeco11"

Appearance223.material = ProtoInstance224

Shape222.appearance = Appearance223
Sphere225 = x3d.Sphere()
Sphere225.USE = "Ball"

Shape222.geometry = Sphere225

Anchor221.children.append(Shape222)

Transform220.children.append(Anchor221)
Transform226 = x3d.Transform()
Transform226.translation = [0,0.3,0.5]
Anchor227 = x3d.Anchor()
Anchor227.description = "ArtDeco11 view source documentation"
Anchor227.parameter = ["target=_source"]
Anchor227.url = ["../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco11","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco11"]
Shape228 = x3d.Shape()
Appearance229 = x3d.Appearance()
Material230 = x3d.Material()
Material230.USE = "TextMat"

Appearance229.material = Material230

Shape228.appearance = Appearance229
Text231 = x3d.Text()
Text231.string = ["ArtDeco11"]
FontStyle232 = x3d.FontStyle()
FontStyle232.USE = "Style"

Text231.fontStyle = FontStyle232

Shape228.geometry = Text231

Anchor227.children.append(Shape228)

Transform226.children.append(Anchor227)

Transform220.children.append(Transform226)

Group50.children.append(Transform220)
Viewpoint233 = x3d.Viewpoint()
Viewpoint233.DEF = "View12"
Viewpoint233.description = "ArtDeco12"
Viewpoint233.position = [-3.75,0.75,3]

Group50.children.append(Viewpoint233)
Transform234 = x3d.Transform()
Transform234.translation = [-3.75,0.75,0]
Anchor235 = x3d.Anchor()
Anchor235.description = "ArtDeco12 view"
Anchor235.url = ["#View12"]
Shape236 = x3d.Shape()
Appearance237 = x3d.Appearance()
ProtoInstance238 = x3d.ProtoInstance()
ProtoInstance238.name = "ArtDeco12"

Appearance237.material = ProtoInstance238

Shape236.appearance = Appearance237
Sphere239 = x3d.Sphere()
Sphere239.USE = "Ball"

Shape236.geometry = Sphere239

Anchor235.children.append(Shape236)

Transform234.children.append(Anchor235)
Transform240 = x3d.Transform()
Transform240.translation = [0,0.3,0.5]
Anchor241 = x3d.Anchor()
Anchor241.description = "ArtDeco12 view source documentation"
Anchor241.parameter = ["target=_source"]
Anchor241.url = ["../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco12","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco12"]
Shape242 = x3d.Shape()
Appearance243 = x3d.Appearance()
Material244 = x3d.Material()
Material244.USE = "TextMat"

Appearance243.material = Material244

Shape242.appearance = Appearance243
Text245 = x3d.Text()
Text245.string = ["ArtDeco12"]
FontStyle246 = x3d.FontStyle()
FontStyle246.USE = "Style"

Text245.fontStyle = FontStyle246

Shape242.geometry = Text245

Anchor241.children.append(Shape242)

Transform240.children.append(Anchor241)

Transform234.children.append(Transform240)

Group50.children.append(Transform234)
Viewpoint247 = x3d.Viewpoint()
Viewpoint247.DEF = "View13"
Viewpoint247.description = "ArtDeco13"
Viewpoint247.position = [-2.25,0.75,3]

Group50.children.append(Viewpoint247)
Transform248 = x3d.Transform()
Transform248.translation = [-2.25,0.75,0]
Anchor249 = x3d.Anchor()
Anchor249.description = "ArtDeco13 view"
Anchor249.url = ["#View13"]
Shape250 = x3d.Shape()
Appearance251 = x3d.Appearance()
ProtoInstance252 = x3d.ProtoInstance()
ProtoInstance252.name = "ArtDeco13"

Appearance251.material = ProtoInstance252

Shape250.appearance = Appearance251
Sphere253 = x3d.Sphere()
Sphere253.USE = "Ball"

Shape250.geometry = Sphere253

Anchor249.children.append(Shape250)

Transform248.children.append(Anchor249)
Transform254 = x3d.Transform()
Transform254.translation = [0,0.3,0.5]
Anchor255 = x3d.Anchor()
Anchor255.description = "ArtDeco13 view source documentation"
Anchor255.parameter = ["target=_source"]
Anchor255.url = ["../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco3","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco13"]
Shape256 = x3d.Shape()
Appearance257 = x3d.Appearance()
Material258 = x3d.Material()
Material258.USE = "TextMat"

Appearance257.material = Material258

Shape256.appearance = Appearance257
Text259 = x3d.Text()
Text259.string = ["ArtDeco13"]
FontStyle260 = x3d.FontStyle()
FontStyle260.USE = "Style"

Text259.fontStyle = FontStyle260

Shape256.geometry = Text259

Anchor255.children.append(Shape256)

Transform254.children.append(Anchor255)

Transform248.children.append(Transform254)

Group50.children.append(Transform248)
Viewpoint261 = x3d.Viewpoint()
Viewpoint261.DEF = "View14"
Viewpoint261.description = "ArtDeco14"
Viewpoint261.position = [-0.75,0.75,3]

Group50.children.append(Viewpoint261)
Transform262 = x3d.Transform()
Transform262.translation = [-0.75,0.75,0]
Anchor263 = x3d.Anchor()
Anchor263.description = "ArtDeco14 view"
Anchor263.url = ["#View14"]
Shape264 = x3d.Shape()
Appearance265 = x3d.Appearance()
ProtoInstance266 = x3d.ProtoInstance()
ProtoInstance266.name = "ArtDeco14"

Appearance265.material = ProtoInstance266

Shape264.appearance = Appearance265
Sphere267 = x3d.Sphere()
Sphere267.USE = "Ball"

Shape264.geometry = Sphere267

Anchor263.children.append(Shape264)

Transform262.children.append(Anchor263)
Transform268 = x3d.Transform()
Transform268.translation = [0,0.3,0.5]
Anchor269 = x3d.Anchor()
Anchor269.description = "ArtDeco14 view source documentation"
Anchor269.parameter = ["target=_source"]
Anchor269.url = ["../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco4","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco14"]
Shape270 = x3d.Shape()
Appearance271 = x3d.Appearance()
Material272 = x3d.Material()
Material272.USE = "TextMat"

Appearance271.material = Material272

Shape270.appearance = Appearance271
Text273 = x3d.Text()
Text273.string = ["ArtDeco14"]
FontStyle274 = x3d.FontStyle()
FontStyle274.USE = "Style"

Text273.fontStyle = FontStyle274

Shape270.geometry = Text273

Anchor269.children.append(Shape270)

Transform268.children.append(Anchor269)

Transform262.children.append(Transform268)

Group50.children.append(Transform262)
Viewpoint275 = x3d.Viewpoint()
Viewpoint275.DEF = "View15"
Viewpoint275.description = "ArtDeco15"
Viewpoint275.position = [0.75,0.75,3]

Group50.children.append(Viewpoint275)
Transform276 = x3d.Transform()
Transform276.translation = [0.75,0.75,0]
Anchor277 = x3d.Anchor()
Anchor277.description = "ArtDeco15 view"
Anchor277.url = ["#View15"]
Shape278 = x3d.Shape()
Appearance279 = x3d.Appearance()
ProtoInstance280 = x3d.ProtoInstance()
ProtoInstance280.name = "ArtDeco15"

Appearance279.material = ProtoInstance280

Shape278.appearance = Appearance279
Sphere281 = x3d.Sphere()
Sphere281.USE = "Ball"

Shape278.geometry = Sphere281

Anchor277.children.append(Shape278)

Transform276.children.append(Anchor277)
Transform282 = x3d.Transform()
Transform282.translation = [0,0.3,0.5]
Anchor283 = x3d.Anchor()
Anchor283.description = "ArtDeco15 view source documentation"
Anchor283.parameter = ["target=_source"]
Anchor283.url = ["../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco5","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco15"]
Shape284 = x3d.Shape()
Appearance285 = x3d.Appearance()
Material286 = x3d.Material()
Material286.USE = "TextMat"

Appearance285.material = Material286

Shape284.appearance = Appearance285
Text287 = x3d.Text()
Text287.string = ["ArtDeco15"]
FontStyle288 = x3d.FontStyle()
FontStyle288.USE = "Style"

Text287.fontStyle = FontStyle288

Shape284.geometry = Text287

Anchor283.children.append(Shape284)

Transform282.children.append(Anchor283)

Transform276.children.append(Transform282)

Group50.children.append(Transform276)
Viewpoint289 = x3d.Viewpoint()
Viewpoint289.DEF = "View16"
Viewpoint289.description = "ArtDeco16"
Viewpoint289.position = [2.25,0.75,3]

Group50.children.append(Viewpoint289)
Transform290 = x3d.Transform()
Transform290.translation = [2.25,0.75,0]
Anchor291 = x3d.Anchor()
Anchor291.description = "ArtDeco16 view"
Anchor291.url = ["#View16"]
Shape292 = x3d.Shape()
Appearance293 = x3d.Appearance()
ProtoInstance294 = x3d.ProtoInstance()
ProtoInstance294.name = "ArtDeco16"

Appearance293.material = ProtoInstance294

Shape292.appearance = Appearance293
Sphere295 = x3d.Sphere()
Sphere295.USE = "Ball"

Shape292.geometry = Sphere295

Anchor291.children.append(Shape292)

Transform290.children.append(Anchor291)
Transform296 = x3d.Transform()
Transform296.translation = [0,0.3,0.5]
Anchor297 = x3d.Anchor()
Anchor297.description = "ArtDeco16 view source documentation"
Anchor297.parameter = ["target=_source"]
Anchor297.url = ["../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco16","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco16"]
Shape298 = x3d.Shape()
Appearance299 = x3d.Appearance()
Material300 = x3d.Material()
Material300.USE = "TextMat"

Appearance299.material = Material300

Shape298.appearance = Appearance299
Text301 = x3d.Text()
Text301.string = ["ArtDeco16"]
FontStyle302 = x3d.FontStyle()
FontStyle302.USE = "Style"

Text301.fontStyle = FontStyle302

Shape298.geometry = Text301

Anchor297.children.append(Shape298)

Transform296.children.append(Anchor297)

Transform290.children.append(Transform296)

Group50.children.append(Transform290)
Viewpoint303 = x3d.Viewpoint()
Viewpoint303.DEF = "View17"
Viewpoint303.description = "ArtDeco17"
Viewpoint303.position = [3.75,0.75,3]

Group50.children.append(Viewpoint303)
Transform304 = x3d.Transform()
Transform304.translation = [3.75,0.75,0]
Anchor305 = x3d.Anchor()
Anchor305.description = "ArtDeco17 view"
Anchor305.url = ["#View17"]
Shape306 = x3d.Shape()
Appearance307 = x3d.Appearance()
ProtoInstance308 = x3d.ProtoInstance()
ProtoInstance308.name = "ArtDeco17"

Appearance307.material = ProtoInstance308

Shape306.appearance = Appearance307
Sphere309 = x3d.Sphere()
Sphere309.USE = "Ball"

Shape306.geometry = Sphere309

Anchor305.children.append(Shape306)

Transform304.children.append(Anchor305)
Transform310 = x3d.Transform()
Transform310.translation = [0,0.3,0.5]
Anchor311 = x3d.Anchor()
Anchor311.description = "ArtDeco17 view source documentation"
Anchor311.parameter = ["target=_source"]
Anchor311.url = ["../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco7","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco17"]
Shape312 = x3d.Shape()
Appearance313 = x3d.Appearance()
Material314 = x3d.Material()
Material314.USE = "TextMat"

Appearance313.material = Material314

Shape312.appearance = Appearance313
Text315 = x3d.Text()
Text315.string = ["ArtDeco17"]
FontStyle316 = x3d.FontStyle()
FontStyle316.USE = "Style"

Text315.fontStyle = FontStyle316

Shape312.geometry = Text315

Anchor311.children.append(Shape312)

Transform310.children.append(Anchor311)

Transform304.children.append(Transform310)

Group50.children.append(Transform304)
Viewpoint317 = x3d.Viewpoint()
Viewpoint317.DEF = "View18"
Viewpoint317.description = "ArtDeco18"
Viewpoint317.position = [-3.75,-0.75,3]

Group50.children.append(Viewpoint317)
Transform318 = x3d.Transform()
Transform318.translation = [-3.75,-0.75,0]
Anchor319 = x3d.Anchor()
Anchor319.description = "ArtDeco18 view"
Anchor319.url = ["#View18"]
Shape320 = x3d.Shape()
Appearance321 = x3d.Appearance()
ProtoInstance322 = x3d.ProtoInstance()
ProtoInstance322.name = "ArtDeco18"

Appearance321.material = ProtoInstance322

Shape320.appearance = Appearance321
Sphere323 = x3d.Sphere()
Sphere323.USE = "Ball"

Shape320.geometry = Sphere323

Anchor319.children.append(Shape320)

Transform318.children.append(Anchor319)
Transform324 = x3d.Transform()
Transform324.translation = [0,0.3,0.5]
Anchor325 = x3d.Anchor()
Anchor325.description = "ArtDeco18 view source documentation"
Anchor325.parameter = ["target=_source"]
Anchor325.url = ["../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco18","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco18"]
Shape326 = x3d.Shape()
Appearance327 = x3d.Appearance()
Material328 = x3d.Material()
Material328.USE = "TextMat"

Appearance327.material = Material328

Shape326.appearance = Appearance327
Text329 = x3d.Text()
Text329.string = ["ArtDeco18"]
FontStyle330 = x3d.FontStyle()
FontStyle330.USE = "Style"

Text329.fontStyle = FontStyle330

Shape326.geometry = Text329

Anchor325.children.append(Shape326)

Transform324.children.append(Anchor325)

Transform318.children.append(Transform324)

Group50.children.append(Transform318)
Viewpoint331 = x3d.Viewpoint()
Viewpoint331.DEF = "View19"
Viewpoint331.description = "ArtDeco19"
Viewpoint331.position = [-2.25,-0.75,3]

Group50.children.append(Viewpoint331)
Transform332 = x3d.Transform()
Transform332.translation = [-2.25,-0.75,0]
Anchor333 = x3d.Anchor()
Anchor333.description = "ArtDeco19 view"
Anchor333.url = ["#View19"]
Shape334 = x3d.Shape()
Appearance335 = x3d.Appearance()
ProtoInstance336 = x3d.ProtoInstance()
ProtoInstance336.name = "ArtDeco19"

Appearance335.material = ProtoInstance336

Shape334.appearance = Appearance335
Sphere337 = x3d.Sphere()
Sphere337.USE = "Ball"

Shape334.geometry = Sphere337

Anchor333.children.append(Shape334)

Transform332.children.append(Anchor333)
Transform338 = x3d.Transform()
Transform338.translation = [0,0.3,0.5]
Anchor339 = x3d.Anchor()
Anchor339.description = "ArtDeco19 view source documentation"
Anchor339.parameter = ["target=_source"]
Anchor339.url = ["../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco9","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco19"]
Shape340 = x3d.Shape()
Appearance341 = x3d.Appearance()
Material342 = x3d.Material()
Material342.USE = "TextMat"

Appearance341.material = Material342

Shape340.appearance = Appearance341
Text343 = x3d.Text()
Text343.string = ["ArtDeco19"]
FontStyle344 = x3d.FontStyle()
FontStyle344.USE = "Style"

Text343.fontStyle = FontStyle344

Shape340.geometry = Text343

Anchor339.children.append(Shape340)

Transform338.children.append(Anchor339)

Transform332.children.append(Transform338)

Group50.children.append(Transform332)
Viewpoint345 = x3d.Viewpoint()
Viewpoint345.DEF = "View20"
Viewpoint345.description = "ArtDeco20"
Viewpoint345.position = [-0.75,-0.75,3]

Group50.children.append(Viewpoint345)
Transform346 = x3d.Transform()
Transform346.translation = [-0.75,-0.75,0]
Anchor347 = x3d.Anchor()
Anchor347.description = "ArtDeco20 view"
Anchor347.url = ["#View20"]
Shape348 = x3d.Shape()
Appearance349 = x3d.Appearance()
ProtoInstance350 = x3d.ProtoInstance()
ProtoInstance350.name = "ArtDeco20"

Appearance349.material = ProtoInstance350

Shape348.appearance = Appearance349
Sphere351 = x3d.Sphere()
Sphere351.USE = "Ball"

Shape348.geometry = Sphere351

Anchor347.children.append(Shape348)

Transform346.children.append(Anchor347)
Transform352 = x3d.Transform()
Transform352.translation = [0,0.3,0.5]
Anchor353 = x3d.Anchor()
Anchor353.description = "ArtDeco20 view source documentation"
Anchor353.parameter = ["target=_source"]
Anchor353.url = ["../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco20","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco20"]
Shape354 = x3d.Shape()
Appearance355 = x3d.Appearance()
Material356 = x3d.Material()
Material356.USE = "TextMat"

Appearance355.material = Material356

Shape354.appearance = Appearance355
Text357 = x3d.Text()
Text357.string = ["ArtDeco20"]
FontStyle358 = x3d.FontStyle()
FontStyle358.USE = "Style"

Text357.fontStyle = FontStyle358

Shape354.geometry = Text357

Anchor353.children.append(Shape354)

Transform352.children.append(Anchor353)

Transform346.children.append(Transform352)

Group50.children.append(Transform346)
Viewpoint359 = x3d.Viewpoint()
Viewpoint359.DEF = "View21"
Viewpoint359.description = "ArtDeco21"
Viewpoint359.position = [0.75,-0.75,3]

Group50.children.append(Viewpoint359)
Transform360 = x3d.Transform()
Transform360.translation = [0.75,-0.75,0]
Anchor361 = x3d.Anchor()
Anchor361.description = "ArtDeco21 view"
Anchor361.url = ["#View21"]
Shape362 = x3d.Shape()
Appearance363 = x3d.Appearance()
ProtoInstance364 = x3d.ProtoInstance()
ProtoInstance364.name = "ArtDeco21"

Appearance363.material = ProtoInstance364

Shape362.appearance = Appearance363
Sphere365 = x3d.Sphere()
Sphere365.USE = "Ball"

Shape362.geometry = Sphere365

Anchor361.children.append(Shape362)

Transform360.children.append(Anchor361)
Transform366 = x3d.Transform()
Transform366.translation = [0,0.3,0.5]
Anchor367 = x3d.Anchor()
Anchor367.description = "ArtDeco21 view source documentation"
Anchor367.parameter = ["target=_source"]
Anchor367.url = ["../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco21","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco21"]
Shape368 = x3d.Shape()
Appearance369 = x3d.Appearance()
Material370 = x3d.Material()
Material370.USE = "TextMat"

Appearance369.material = Material370

Shape368.appearance = Appearance369
Text371 = x3d.Text()
Text371.string = ["ArtDeco21"]
FontStyle372 = x3d.FontStyle()
FontStyle372.USE = "Style"

Text371.fontStyle = FontStyle372

Shape368.geometry = Text371

Anchor367.children.append(Shape368)

Transform366.children.append(Anchor367)

Transform360.children.append(Transform366)

Group50.children.append(Transform360)
Viewpoint373 = x3d.Viewpoint()
Viewpoint373.DEF = "View22"
Viewpoint373.description = "ArtDeco22"
Viewpoint373.position = [2.25,-0.75,3]

Group50.children.append(Viewpoint373)
Transform374 = x3d.Transform()
Transform374.translation = [2.25,-0.75,0]
Anchor375 = x3d.Anchor()
Anchor375.description = "ArtDeco22 view"
Anchor375.url = ["#View22"]
Shape376 = x3d.Shape()
Appearance377 = x3d.Appearance()
ProtoInstance378 = x3d.ProtoInstance()
ProtoInstance378.name = "ArtDeco22"

Appearance377.material = ProtoInstance378

Shape376.appearance = Appearance377
Sphere379 = x3d.Sphere()
Sphere379.USE = "Ball"

Shape376.geometry = Sphere379

Anchor375.children.append(Shape376)

Transform374.children.append(Anchor375)
Transform380 = x3d.Transform()
Transform380.translation = [0,0.3,0.5]
Anchor381 = x3d.Anchor()
Anchor381.description = "ArtDeco22 view source documentation"
Anchor381.parameter = ["target=_source"]
Anchor381.url = ["../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco22","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco22"]
Shape382 = x3d.Shape()
Appearance383 = x3d.Appearance()
Material384 = x3d.Material()
Material384.USE = "TextMat"

Appearance383.material = Material384

Shape382.appearance = Appearance383
Text385 = x3d.Text()
Text385.string = ["ArtDeco22"]
FontStyle386 = x3d.FontStyle()
FontStyle386.USE = "Style"

Text385.fontStyle = FontStyle386

Shape382.geometry = Text385

Anchor381.children.append(Shape382)

Transform380.children.append(Anchor381)

Transform374.children.append(Transform380)

Group50.children.append(Transform374)
Viewpoint387 = x3d.Viewpoint()
Viewpoint387.DEF = "View23"
Viewpoint387.description = "ArtDeco23"
Viewpoint387.position = [3.75,-0.75,3]

Group50.children.append(Viewpoint387)
Transform388 = x3d.Transform()
Transform388.translation = [3.75,-0.75,0]
Anchor389 = x3d.Anchor()
Anchor389.description = "ArtDeco23 view"
Anchor389.url = ["#View23"]
Shape390 = x3d.Shape()
Appearance391 = x3d.Appearance()
ProtoInstance392 = x3d.ProtoInstance()
ProtoInstance392.name = "ArtDeco23"

Appearance391.material = ProtoInstance392

Shape390.appearance = Appearance391
Sphere393 = x3d.Sphere()
Sphere393.USE = "Ball"

Shape390.geometry = Sphere393

Anchor389.children.append(Shape390)

Transform388.children.append(Anchor389)
Transform394 = x3d.Transform()
Transform394.translation = [0,0.3,0.5]
Anchor395 = x3d.Anchor()
Anchor395.description = "ArtDeco23 view source documentation"
Anchor395.parameter = ["target=_source"]
Anchor395.url = ["../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco23","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco23"]
Shape396 = x3d.Shape()
Appearance397 = x3d.Appearance()
Material398 = x3d.Material()
Material398.USE = "TextMat"

Appearance397.material = Material398

Shape396.appearance = Appearance397
Text399 = x3d.Text()
Text399.string = ["ArtDeco23"]
FontStyle400 = x3d.FontStyle()
FontStyle400.USE = "Style"

Text399.fontStyle = FontStyle400

Shape396.geometry = Text399

Anchor395.children.append(Shape396)

Transform394.children.append(Anchor395)

Transform388.children.append(Transform394)

Group50.children.append(Transform388)
Viewpoint401 = x3d.Viewpoint()
Viewpoint401.DEF = "View24"
Viewpoint401.description = "ArtDeco24"
Viewpoint401.position = [-3.75,-2.25,3]

Group50.children.append(Viewpoint401)
Transform402 = x3d.Transform()
Transform402.translation = [-3.75,-2.25,0]
Anchor403 = x3d.Anchor()
Anchor403.description = "ArtDeco24 view"
Anchor403.url = ["#View24"]
Shape404 = x3d.Shape()
Appearance405 = x3d.Appearance()
ProtoInstance406 = x3d.ProtoInstance()
ProtoInstance406.name = "ArtDeco24"

Appearance405.material = ProtoInstance406

Shape404.appearance = Appearance405
Sphere407 = x3d.Sphere()
Sphere407.USE = "Ball"

Shape404.geometry = Sphere407

Anchor403.children.append(Shape404)

Transform402.children.append(Anchor403)
Transform408 = x3d.Transform()
Transform408.translation = [0,0.3,0.5]
Anchor409 = x3d.Anchor()
Anchor409.description = "ArtDeco24 view source documentation"
Anchor409.parameter = ["target=_source"]
Anchor409.url = ["../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco24","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco24"]
Shape410 = x3d.Shape()
Appearance411 = x3d.Appearance()
Material412 = x3d.Material()
Material412.USE = "TextMat"

Appearance411.material = Material412

Shape410.appearance = Appearance411
Text413 = x3d.Text()
Text413.string = ["ArtDeco24"]
FontStyle414 = x3d.FontStyle()
FontStyle414.USE = "Style"

Text413.fontStyle = FontStyle414

Shape410.geometry = Text413

Anchor409.children.append(Shape410)

Transform408.children.append(Anchor409)

Transform402.children.append(Transform408)

Group50.children.append(Transform402)
Viewpoint415 = x3d.Viewpoint()
Viewpoint415.DEF = "View25"
Viewpoint415.description = "ArtDeco25"
Viewpoint415.position = [-2.25,-2.25,3]

Group50.children.append(Viewpoint415)
Transform416 = x3d.Transform()
Transform416.translation = [-2.25,-2.25,0]
Anchor417 = x3d.Anchor()
Anchor417.description = "ArtDeco25 view"
Anchor417.url = ["#View25"]
Shape418 = x3d.Shape()
Appearance419 = x3d.Appearance()
ProtoInstance420 = x3d.ProtoInstance()
ProtoInstance420.name = "ArtDeco25"

Appearance419.material = ProtoInstance420

Shape418.appearance = Appearance419
Sphere421 = x3d.Sphere()
Sphere421.USE = "Ball"

Shape418.geometry = Sphere421

Anchor417.children.append(Shape418)

Transform416.children.append(Anchor417)
Transform422 = x3d.Transform()
Transform422.translation = [0,0.3,0.5]
Anchor423 = x3d.Anchor()
Anchor423.description = "ArtDeco25 view source documentation"
Anchor423.parameter = ["target=_source"]
Anchor423.url = ["../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco25","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco25"]
Shape424 = x3d.Shape()
Appearance425 = x3d.Appearance()
Material426 = x3d.Material()
Material426.USE = "TextMat"

Appearance425.material = Material426

Shape424.appearance = Appearance425
Text427 = x3d.Text()
Text427.string = ["ArtDeco25"]
FontStyle428 = x3d.FontStyle()
FontStyle428.USE = "Style"

Text427.fontStyle = FontStyle428

Shape424.geometry = Text427

Anchor423.children.append(Shape424)

Transform422.children.append(Anchor423)

Transform416.children.append(Transform422)

Group50.children.append(Transform416)
Viewpoint429 = x3d.Viewpoint()
Viewpoint429.DEF = "View26"
Viewpoint429.description = "ArtDeco26"
Viewpoint429.position = [-0.75,-2.25,3]

Group50.children.append(Viewpoint429)
Transform430 = x3d.Transform()
Transform430.translation = [-0.75,-2.25,0]
Anchor431 = x3d.Anchor()
Anchor431.description = "ArtDeco26 view"
Anchor431.url = ["#View26"]
Shape432 = x3d.Shape()
Appearance433 = x3d.Appearance()
ProtoInstance434 = x3d.ProtoInstance()
ProtoInstance434.name = "ArtDeco26"

Appearance433.material = ProtoInstance434

Shape432.appearance = Appearance433
Sphere435 = x3d.Sphere()
Sphere435.USE = "Ball"

Shape432.geometry = Sphere435

Anchor431.children.append(Shape432)

Transform430.children.append(Anchor431)
Transform436 = x3d.Transform()
Transform436.translation = [0,0.3,0.5]
Anchor437 = x3d.Anchor()
Anchor437.description = "ArtDeco26 view source documentation"
Anchor437.parameter = ["target=_source"]
Anchor437.url = ["../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco26","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco26"]
Shape438 = x3d.Shape()
Appearance439 = x3d.Appearance()
Material440 = x3d.Material()
Material440.USE = "TextMat"

Appearance439.material = Material440

Shape438.appearance = Appearance439
Text441 = x3d.Text()
Text441.string = ["ArtDeco26"]
FontStyle442 = x3d.FontStyle()
FontStyle442.USE = "Style"

Text441.fontStyle = FontStyle442

Shape438.geometry = Text441

Anchor437.children.append(Shape438)

Transform436.children.append(Anchor437)

Transform430.children.append(Transform436)

Group50.children.append(Transform430)
Viewpoint443 = x3d.Viewpoint()
Viewpoint443.DEF = "View27"
Viewpoint443.description = "ArtDeco27"
Viewpoint443.position = [0.75,-2.25,3]

Group50.children.append(Viewpoint443)
Transform444 = x3d.Transform()
Transform444.translation = [0.75,-2.25,0]
Anchor445 = x3d.Anchor()
Anchor445.description = "ArtDeco27 view"
Anchor445.url = ["#View27"]
Shape446 = x3d.Shape()
Appearance447 = x3d.Appearance()
ProtoInstance448 = x3d.ProtoInstance()
ProtoInstance448.name = "ArtDeco27"

Appearance447.material = ProtoInstance448

Shape446.appearance = Appearance447
Sphere449 = x3d.Sphere()
Sphere449.USE = "Ball"

Shape446.geometry = Sphere449

Anchor445.children.append(Shape446)

Transform444.children.append(Anchor445)
Transform450 = x3d.Transform()
Transform450.translation = [0,0.3,0.5]
Anchor451 = x3d.Anchor()
Anchor451.description = "ArtDeco27 view source documentation"
Anchor451.parameter = ["target=_source"]
Anchor451.url = ["../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco27","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco27"]
Shape452 = x3d.Shape()
Appearance453 = x3d.Appearance()
Material454 = x3d.Material()
Material454.USE = "TextMat"

Appearance453.material = Material454

Shape452.appearance = Appearance453
Text455 = x3d.Text()
Text455.string = ["ArtDeco27"]
FontStyle456 = x3d.FontStyle()
FontStyle456.USE = "Style"

Text455.fontStyle = FontStyle456

Shape452.geometry = Text455

Anchor451.children.append(Shape452)

Transform450.children.append(Anchor451)

Transform444.children.append(Transform450)

Group50.children.append(Transform444)
Viewpoint457 = x3d.Viewpoint()
Viewpoint457.DEF = "View28"
Viewpoint457.description = "ArtDeco28"
Viewpoint457.position = [2.25,-2.25,3]

Group50.children.append(Viewpoint457)
Transform458 = x3d.Transform()
Transform458.translation = [2.25,-2.25,0]
Anchor459 = x3d.Anchor()
Anchor459.description = "ArtDeco28 view"
Anchor459.url = ["#View28"]
Shape460 = x3d.Shape()
Appearance461 = x3d.Appearance()
ProtoInstance462 = x3d.ProtoInstance()
ProtoInstance462.name = "ArtDeco28"

Appearance461.material = ProtoInstance462

Shape460.appearance = Appearance461
Sphere463 = x3d.Sphere()
Sphere463.USE = "Ball"

Shape460.geometry = Sphere463

Anchor459.children.append(Shape460)

Transform458.children.append(Anchor459)
Transform464 = x3d.Transform()
Transform464.translation = [0,0.3,0.5]
Anchor465 = x3d.Anchor()
Anchor465.description = "ArtDeco28 view source documentation"
Anchor465.parameter = ["target=_source"]
Anchor465.url = ["../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco28","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco28"]
Shape466 = x3d.Shape()
Appearance467 = x3d.Appearance()
Material468 = x3d.Material()
Material468.USE = "TextMat"

Appearance467.material = Material468

Shape466.appearance = Appearance467
Text469 = x3d.Text()
Text469.string = ["ArtDeco28"]
FontStyle470 = x3d.FontStyle()
FontStyle470.USE = "Style"

Text469.fontStyle = FontStyle470

Shape466.geometry = Text469

Anchor465.children.append(Shape466)

Transform464.children.append(Anchor465)

Transform458.children.append(Transform464)

Group50.children.append(Transform458)
Viewpoint471 = x3d.Viewpoint()
Viewpoint471.DEF = "View29"
Viewpoint471.description = "ArtDeco29"
Viewpoint471.position = [3.75,-2.25,3]

Group50.children.append(Viewpoint471)
Transform472 = x3d.Transform()
Transform472.translation = [3.75,-2.25,0]
Anchor473 = x3d.Anchor()
Anchor473.description = "ArtDeco29 view"
Anchor473.url = ["#View29"]
Shape474 = x3d.Shape()
Appearance475 = x3d.Appearance()
ProtoInstance476 = x3d.ProtoInstance()
ProtoInstance476.name = "ArtDeco29"

Appearance475.material = ProtoInstance476

Shape474.appearance = Appearance475
Sphere477 = x3d.Sphere()
Sphere477.USE = "Ball"

Shape474.geometry = Sphere477

Anchor473.children.append(Shape474)

Transform472.children.append(Anchor473)
Transform478 = x3d.Transform()
Transform478.translation = [0,0.3,0.5]
Anchor479 = x3d.Anchor()
Anchor479.description = "ArtDeco29 view source documentation"
Anchor479.parameter = ["target=_source"]
Anchor479.url = ["../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco29","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco29"]
Shape480 = x3d.Shape()
Appearance481 = x3d.Appearance()
Material482 = x3d.Material()
Material482.USE = "TextMat"

Appearance481.material = Material482

Shape480.appearance = Appearance481
Text483 = x3d.Text()
Text483.string = ["ArtDeco29"]
FontStyle484 = x3d.FontStyle()
FontStyle484.USE = "Style"

Text483.fontStyle = FontStyle484

Shape480.geometry = Text483

Anchor479.children.append(Shape480)

Transform478.children.append(Anchor479)

Transform472.children.append(Transform478)

Group50.children.append(Transform472)
Viewpoint485 = x3d.Viewpoint()
Viewpoint485.DEF = "View30"
Viewpoint485.description = "ArtDeco30"
Viewpoint485.position = [-3.75,-3.75,3]

Group50.children.append(Viewpoint485)
Transform486 = x3d.Transform()
Transform486.translation = [-3.75,-3.75,0]
Anchor487 = x3d.Anchor()
Anchor487.description = "ArtDeco30 view"
Anchor487.url = ["#View30"]
Shape488 = x3d.Shape()
Appearance489 = x3d.Appearance()
ProtoInstance490 = x3d.ProtoInstance()
ProtoInstance490.name = "ArtDeco30"

Appearance489.material = ProtoInstance490

Shape488.appearance = Appearance489
Sphere491 = x3d.Sphere()
Sphere491.USE = "Ball"

Shape488.geometry = Sphere491

Anchor487.children.append(Shape488)

Transform486.children.append(Anchor487)
Transform492 = x3d.Transform()
Transform492.translation = [0,0.3,0.5]
Anchor493 = x3d.Anchor()
Anchor493.description = "ArtDeco30 view source documentation"
Anchor493.parameter = ["target=_source"]
Anchor493.url = ["../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco30","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco30"]
Shape494 = x3d.Shape()
Appearance495 = x3d.Appearance()
Material496 = x3d.Material()
Material496.USE = "TextMat"

Appearance495.material = Material496

Shape494.appearance = Appearance495
Text497 = x3d.Text()
Text497.string = ["ArtDeco30"]
FontStyle498 = x3d.FontStyle()
FontStyle498.USE = "Style"

Text497.fontStyle = FontStyle498

Shape494.geometry = Text497

Anchor493.children.append(Shape494)

Transform492.children.append(Anchor493)

Transform486.children.append(Transform492)

Group50.children.append(Transform486)
Viewpoint499 = x3d.Viewpoint()
Viewpoint499.DEF = "View31"
Viewpoint499.description = "ArtDeco31"
Viewpoint499.position = [-2.25,-3.75,3]

Group50.children.append(Viewpoint499)
Transform500 = x3d.Transform()
Transform500.translation = [-2.25,-3.75,0]
Anchor501 = x3d.Anchor()
Anchor501.description = "ArtDeco31 view"
Anchor501.url = ["#View31"]
Shape502 = x3d.Shape()
Appearance503 = x3d.Appearance()
ProtoInstance504 = x3d.ProtoInstance()
ProtoInstance504.name = "ArtDeco31"

Appearance503.material = ProtoInstance504

Shape502.appearance = Appearance503
Sphere505 = x3d.Sphere()
Sphere505.USE = "Ball"

Shape502.geometry = Sphere505

Anchor501.children.append(Shape502)

Transform500.children.append(Anchor501)
Transform506 = x3d.Transform()
Transform506.translation = [0,0.3,0.5]
Anchor507 = x3d.Anchor()
Anchor507.description = "ArtDeco31 view source documentation"
Anchor507.parameter = ["target=_source"]
Anchor507.url = ["../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco31","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco31"]
Shape508 = x3d.Shape()
Appearance509 = x3d.Appearance()
Material510 = x3d.Material()
Material510.USE = "TextMat"

Appearance509.material = Material510

Shape508.appearance = Appearance509
Text511 = x3d.Text()
Text511.string = ["ArtDeco31"]
FontStyle512 = x3d.FontStyle()
FontStyle512.USE = "Style"

Text511.fontStyle = FontStyle512

Shape508.geometry = Text511

Anchor507.children.append(Shape508)

Transform506.children.append(Anchor507)

Transform500.children.append(Transform506)

Group50.children.append(Transform500)
Viewpoint513 = x3d.Viewpoint()
Viewpoint513.DEF = "View32"
Viewpoint513.description = "ArtDeco32"
Viewpoint513.position = [-0.75,-3.75,3]

Group50.children.append(Viewpoint513)
Transform514 = x3d.Transform()
Transform514.translation = [-0.75,-3.75,0]
Anchor515 = x3d.Anchor()
Anchor515.description = "ArtDeco32 view"
Anchor515.url = ["#View32"]
Shape516 = x3d.Shape()
Appearance517 = x3d.Appearance()
ProtoInstance518 = x3d.ProtoInstance()
ProtoInstance518.name = "ArtDeco32"

Appearance517.material = ProtoInstance518

Shape516.appearance = Appearance517
Sphere519 = x3d.Sphere()
Sphere519.USE = "Ball"

Shape516.geometry = Sphere519

Anchor515.children.append(Shape516)

Transform514.children.append(Anchor515)
Transform520 = x3d.Transform()
Transform520.translation = [0,0.3,0.5]
Anchor521 = x3d.Anchor()
Anchor521.description = "ArtDeco32 view source documentation"
Anchor521.parameter = ["target=_source"]
Anchor521.url = ["../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco32","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco32"]
Shape522 = x3d.Shape()
Appearance523 = x3d.Appearance()
Material524 = x3d.Material()
Material524.USE = "TextMat"

Appearance523.material = Material524

Shape522.appearance = Appearance523
Text525 = x3d.Text()
Text525.string = ["ArtDeco32"]
FontStyle526 = x3d.FontStyle()
FontStyle526.USE = "Style"

Text525.fontStyle = FontStyle526

Shape522.geometry = Text525

Anchor521.children.append(Shape522)

Transform520.children.append(Anchor521)

Transform514.children.append(Transform520)

Group50.children.append(Transform514)
Viewpoint527 = x3d.Viewpoint()
Viewpoint527.DEF = "View33"
Viewpoint527.description = "ArtDeco33"
Viewpoint527.position = [0.75,-3.75,3]

Group50.children.append(Viewpoint527)
Transform528 = x3d.Transform()
Transform528.translation = [0.75,-3.75,0]
Anchor529 = x3d.Anchor()
Anchor529.description = "ArtDeco33 view"
Anchor529.url = ["#View33"]
Shape530 = x3d.Shape()
Appearance531 = x3d.Appearance()
ProtoInstance532 = x3d.ProtoInstance()
ProtoInstance532.name = "ArtDeco33"

Appearance531.material = ProtoInstance532

Shape530.appearance = Appearance531
Sphere533 = x3d.Sphere()
Sphere533.USE = "Ball"

Shape530.geometry = Sphere533

Anchor529.children.append(Shape530)

Transform528.children.append(Anchor529)
Transform534 = x3d.Transform()
Transform534.translation = [0,0.3,0.5]
Anchor535 = x3d.Anchor()
Anchor535.description = "ArtDeco33 view source documentation"
Anchor535.parameter = ["target=_source"]
Anchor535.url = ["../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco33","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco33"]
Shape536 = x3d.Shape()
Appearance537 = x3d.Appearance()
Material538 = x3d.Material()
Material538.USE = "TextMat"

Appearance537.material = Material538

Shape536.appearance = Appearance537
Text539 = x3d.Text()
Text539.string = ["ArtDeco33"]
FontStyle540 = x3d.FontStyle()
FontStyle540.USE = "Style"

Text539.fontStyle = FontStyle540

Shape536.geometry = Text539

Anchor535.children.append(Shape536)

Transform534.children.append(Anchor535)

Transform528.children.append(Transform534)

Group50.children.append(Transform528)
Viewpoint541 = x3d.Viewpoint()
Viewpoint541.DEF = "View34"
Viewpoint541.description = "ArtDeco34"
Viewpoint541.position = [2.25,-3.75,3]

Group50.children.append(Viewpoint541)
Transform542 = x3d.Transform()
Transform542.translation = [2.25,-3.75,0]
Anchor543 = x3d.Anchor()
Anchor543.description = "ArtDeco34 view"
Anchor543.url = ["#View34"]
Shape544 = x3d.Shape()
Appearance545 = x3d.Appearance()
ProtoInstance546 = x3d.ProtoInstance()
ProtoInstance546.name = "ArtDeco34"

Appearance545.material = ProtoInstance546

Shape544.appearance = Appearance545
Sphere547 = x3d.Sphere()
Sphere547.USE = "Ball"

Shape544.geometry = Sphere547

Anchor543.children.append(Shape544)

Transform542.children.append(Anchor543)
Transform548 = x3d.Transform()
Transform548.translation = [0,0.3,0.5]
Anchor549 = x3d.Anchor()
Anchor549.description = "ArtDeco34 view source documentation"
Anchor549.parameter = ["target=_source"]
Anchor549.url = ["../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco34","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco34"]
Shape550 = x3d.Shape()
Appearance551 = x3d.Appearance()
Material552 = x3d.Material()
Material552.USE = "TextMat"

Appearance551.material = Material552

Shape550.appearance = Appearance551
Text553 = x3d.Text()
Text553.string = ["ArtDeco34"]
FontStyle554 = x3d.FontStyle()
FontStyle554.USE = "Style"

Text553.fontStyle = FontStyle554

Shape550.geometry = Text553

Anchor549.children.append(Shape550)

Transform548.children.append(Anchor549)

Transform542.children.append(Transform548)

Group50.children.append(Transform542)

Scene13.children.append(Group50)
ROUTE555 = x3d.ROUTE()
ROUTE555.fromField = "fraction_changed"
ROUTE555.fromNode = "Close_Time"
ROUTE555.toField = "set_fraction"
ROUTE555.toNode = "Close_Mover"

Scene13.children.append(ROUTE555)
ROUTE556 = x3d.ROUTE()
ROUTE556.fromField = "value_changed"
ROUTE556.fromNode = "Close_Mover"
ROUTE556.toField = "set_translation"
ROUTE556.toNode = "Close_travel"

Scene13.children.append(ROUTE556)

X3D0.Scene = Scene13
f = open("../data/ArtDecoExamples.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/ArtDecoExamples.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/ArtDecoExamples.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
