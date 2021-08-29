###############################################
#
# Now available: developmental python x3d.py package on PyPi for import.
#   This approach greatly simplifies Python X3D deployment and use.
#   https://pypi.org/project/x3d
#
# Installation:
#       pip install x3d
# or
#       python -m pip install x3d
#
# Developer options for loading x3d package:
#
#    from x3d import *  # preferred approach, terser source that avoids x3d.* class prefixes
#
# or
#    import x3d         # traditional way to subclass x3d package, all classes require x3d.* prefix
#                       # but python source is very verbose, for example x3d.Material x3d.Shape etc.
#                       # X3dToPython.xslt stylesheet insertPackagePrefix=true supports this option.

from x3d import *

###############################################

newModel=X3D(profile='Immersive',version='4.0',
  head=head(
    children=[
    meta(content='HelloWorldX3D4.x3d',name='title'),
    meta(content='Test X3D version 4 with simple X3D model example: Hello World!',name='description'),
    meta(content='10 June 2021',name='created'),
    meta(content='22 July 2021',name='modified'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='HelloWorld.tall.png',name='Image'),
    meta(content='https://en.wikipedia.org/wiki/Hello_world',name='reference'),
    meta(content='https://en.wikipedia.org/wiki/Hello#.22Hello.2C_World.22_computer_program',name='reference'),
    meta(content='https://en.wikipedia.org/wiki/"Hello,_World!"_program',name='reference'),
    meta(content='https://en.wikibooks.org/w/index.php?title=Computer_Programming/Hello_world',name='reference'),
    meta(content='https://www.HelloWorldExample.net',name='reference'),
    meta(content='https://www.web3d.org',name='reference'),
    meta(content='https://www.web3d.org/realtime-3d/news/internationalization-x3d',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/HelloWorld.x3d',name='reference'),
    meta(content='https://X3dGraphics.com/examples/X3dForAdvancedModeling/HelloWorldScenes/HelloWorld.x3d',name='reference'),
    meta(content='https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter01TechnicalOverview/HelloWorldX3D4.x3d',name='identifier'),
    meta(content='https://www.web3d.org/x3d/content/examples/license.html',name='license'),
    meta(content='X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='HelloWorld.wrl',name='reference'),
    meta(content='HelloWorldX3D4.x3dv',name='reference'),
    meta(content='HelloWorldX3D4.x3db',name='reference'),
    meta(content='HelloWorldX3D4.xhtml',name='reference'),
    meta(content='HelloWorldX3D4.json',name='reference')]),
  Scene=Scene(
    #  Example scene to illustrate X3D nodes and fields (XML elements and attributes) 
    children=[
    WorldInfo(DEF='WorldInfoPrimary',info=["Example scene to illustrate a simple X3D4 model"],title='Hello World!'),
    WorldInfo(DEF='WorldInfoSecondary',class_='TestClass',id='TestID',style_='TestStyle',title='test HTML CSS fields'),
    Group(
      children=[
      Viewpoint(DEF='ViewUpClose',centerOfRotation=(0,-1,0),description='Hello world!',position=(0,-1,7)),
      Transform(rotation=(0,1,0,3),
        children=[
        Shape(
          geometry=Sphere(),
          appearance=Appearance(
            #  https://htmlcolorcodes.com/colors/off-white 
            material=Material(DEF='MaterialOffWhite',diffuseColor=(0.980392,0.976471,0.964706)),
            texture=ImageTexture(DEF='ImageCloudlessEarth',url=["earth-topo.png","earth-topo.jpg","earth-topo-small.gif","https://www.web3d.org/x3d/content/examples/Basic/earth-topo.png","https://www.web3d.org/x3d/content/examples/Basic/earth-topo.jpg","https://www.web3d.org/x3d/content/examples/Basic/earth-topo-small.gif"])))]),
      Transform(translation=(0,-2,0),
        children=[
        Shape(
          geometry=Text(DEF='TextMessage',string=["Hello","X3D 4!"],
            fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"])),
          appearance=Appearance(
            material=Material(USE='MaterialOffWhite')))])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for HelloWorldX3D4.py")
