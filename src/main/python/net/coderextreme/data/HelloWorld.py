from x3d import *
print(
X3D(
  profile="Immersive", version="3.3", head=head(  children=[
      children=[#Alternate encodings: VRML97, X3D ClassicVRML Encoding, X3D Compressed Binary Encoding (CBE), X3DOM, JSON
], 
          meta(name="title", content="HelloWorld.x3d"),
          meta(name="description", content="Simple X3D model example: Hello World!"),
          meta(name="created", content="30 October 2000"),
          meta(name="modified", content="20 October 2019"),
          meta(name="creator", content="Don Brutzman"),
          meta(name="Image", content="HelloWorld.tall.png"),
          meta(name="reference", content="http://en.wikipedia.org/wiki/Hello_world"),
          meta(name="reference", content="https://en.wikipedia.org/wiki/Hello#.22Hello.2C_World.22_computer_program"),
          meta(name="reference", content="https://en.wikipedia.org/wiki/\"Hello,_World!\"_program"),
          meta(name="reference", content="http://en.wikibooks.org/w/index.php?title=Computer_Programming/Hello_world"),
          meta(name="reference", content="http://www.HelloWorldExample.net"),
          meta(name="reference", content="https://www.web3d.org"),
          meta(name="reference", content="https://www.web3d.org/realtime-3d/news/internationalization-x3d"),
          meta(name="reference", content="https://www.web3d.org/x3d/content/examples/HelloWorld.x3d"),
          meta(name="reference", content="http://X3dGraphics.com/examples/X3dForAdvancedModeling/HelloWorldScenes/HelloWorld.x3d"),
          meta(name="identifier", content="http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter01TechnicalOverview/HelloWorld.x3d"),
          meta(name="license", content="https://www.web3d.org/x3d/content/examples/license.html"),
          meta(name="generator", content="X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"),
          meta(name="reference", content="HelloWorld.wrl"),
          meta(name="reference", content="HelloWorld.x3dv"),
          meta(name="reference", content="HelloWorld.x3db"),
          meta(name="reference", content="HelloWorld.xhtml"),
          meta(name="reference", content="HelloWorld.json"),
          meta(name="translated", content="18 January 2022"),
          meta(name="generator", content="X3dToJson.xslt, https://www.web3d.org/x3d/stylesheets/X3dToJson.html"),
          meta(name="reference", content="X3D JSON encoding: https://www.web3d.org/wiki/index.php/X3D_JSON_Encoding")]), Scene=Scene(
    children=[#Example scene to illustrate X3D nodes and fields (XML elements and attributes)

        WorldInfo(
          info=("Example scene to illustrate a simple X3D model"), title="Hello World!"),
        Group(
          children=[
              Viewpoint(
                DEF="ViewUpClose", centerOfRotation=(0,-1,0), description="Hello world!", position=(0,-1,7)),
              Transform(
                rotation=(0,1,0,3), children=[
                    Shape(
                      geometry=Sphere(
                          ), appearance=Appearance(
                          material=Material(
                              DEF="MaterialLightBlue", diffuseColor=(0.1,0.5,1)), texture=ImageTexture(
                              DEF="ImageCloudlessEarth", url=["earth-topo.png","earth-topo.jpg","earth-topo-small.gif","https://www.web3d.org/x3d/content/examples/Basic/earth-topo.png","https://www.web3d.org/x3d/content/examples/Basic/earth-topo.jpg","https://www.web3d.org/x3d/content/examples/Basic/earth-topo-small.gif"])))]),
              Transform(
                translation=(0,-2,0), children=[
                    Shape(
                      geometry=Text(
                          DEF="TextMessage", string=["Hello","world!"], fontStyle=FontStyle(
                              justify=["MIDDLE","MIDDLE"])), appearance=Appearance(
                          material=Material(
                              USE="MaterialLightBlue")))])])]))
.XML())
