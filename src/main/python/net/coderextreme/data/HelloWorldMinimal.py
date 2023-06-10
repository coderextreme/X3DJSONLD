# x3d.py package 4.0.64.4 loaded, have fun with X3D Graphics!
print("<!--")
from x3d import *
print("-->")
print(
X3D(profile="Immersive", version="3.3", 
head=head(children=[meta(name="title", content="HelloWorldMinimal.x3d"),
meta(name="description", content="Hello World minimal example scene."),
meta(name="creator", content="Don Brutzman"),
meta(name="created", content="19 January 2020"),
meta(name="modified", content="24 January 2020"),
meta(name="reference", content="https://helloworldcollection.de"),
meta(name="reference", content="https://en.wiktionary.org/wiki/Hello_World"),
meta(name="reference", content="https://en.wikipedia.org/wiki/%22Hello,%20World!%22_program"),
meta(name="reference", content="https://en.wikibooks.org/w/index.php?title=Computer_Programming/Hello_world"),
meta(name="reference", content="https://en.wikibooks.org/w/index.php?title=Computer_Programming/Hello_world#X3D_(Extensible_3D)"),
meta(name="reference", content="https://x3dgraphics.com/examples/X3dForAdvancedModeling/HelloWorldScenes"),
meta(name="reference", content="https://x3dgraphics.com/examples/X3dForAdvancedModeling/HelloWorldScenes/HelloWorldMinimalIndex.html"),
meta(name="identifier", content="https://x3dgraphics.com/examples/X3dForAdvancedModeling/HelloWorldScenes/HelloWorldMinimal.x3d"),
meta(name="generator", content="X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"),
meta(name="license", content="../license.html"),
meta(name="translated", content="09 June 2023"),
meta(name="generator", content="X3dToJson.xslt, https://www.web3d.org/x3d/stylesheets/X3dToJson.html"),
meta(name="reference", content="X3D JSON encoding: https://www.web3d.org/wiki/index.php/X3D_JSON_Encoding")
]), 
Scene=Scene(children=[
WorldInfo(title="HelloWorldMinimal.x3d"),
Shape(
geometry=
Text(string=["hello, world"]))]))
.XML())
