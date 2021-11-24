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

newModel=X3D(profile='Immersive',version='3.3',
  head=head(
    children=[
    component(level=1,name='CADGeometry'),
    component(level=1,name='H-Anim'),
    unit(category='length',conversionFactor=0.9144,name='Yards'),
    unit(category='angle',conversionFactor=0.0174532925167,name='Degrees'),
    meta(content='TestJsonEncoding.x3d',name='title'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='29 March 2015',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Test scene to ensure that X3dToJson xslt stylesheet translator properly converts X3D source into JavaScript Object Notation (JSON).',name='description'),
    meta(content='TestJsonEncoding.json',name='reference'),
    meta(content='https://www.web3d.org/wiki/index.php/X3D_JSON_Encoding',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/development/TestJsonEncoding.x3d',name='identifier'),
    meta(content='https://www.web3d.org/x3d/stylesheets/X3dToJson.xslt',name='reference'),
    meta(content='https://www.web3d.org/x3d/stylesheets/X3dToJson.html',name='reference'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    #  excerpted from HelloWorld.x3d 
    children=[
    WorldInfo(title='TestJsonEncoding.x3d'),
    Group(
      children=[
      Viewpoint(DEF='ViewUpClose',centerOfRotation=(0,-1,0),description='Hello world!',position=(0,-1,7)),
      Transform(rotation=(0,1,0,3),
        children=[
        Shape(
          geometry=Sphere(),
          appearance=Appearance(
            #  Test leading zeroes inserted before (and trailing zeroes inserted after) decimal points: diffuseColor='.1 0.5 1.' 
            material=Material(DEF='MaterialLightBlue',diffuseColor=(.1,0.5,1.)),
            texture=ImageTexture(DEF='ImageCloudlessEarth',url=["earth-topo.png","earth-topo.jpg","earth-topo-small.gif","https://www.web3d.org/x3d/content/examples/Basic/earth-topo.png","https://www.web3d.org/x3d/content/examples/Basic/earth-topo.jpg","https://www.web3d.org/x3d/content/examples/Basic/earth-topo-small.gif"])))]),
      Transform(translation=(-.1,-2,-.2),
        #  Test leading zeroes inserted between -. values: translation='-.1 -2 -.2' 
        children=[
        Shape(
          geometry=Text(DEF='TextMessage',string=["Hello","JSON!"],
            fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"])),
          appearance=Appearance(
            material=Material(USE='MaterialLightBlue')))])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for TestJsonEncoding.py")
