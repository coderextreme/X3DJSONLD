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

newModel=X3D(profile='Immersive',version='3.0',
  head=head(
    children=[
    meta(content='ProxyShapeExample.x3d',name='title'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='14 January 2000',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Collision node, child test case: can reorder children nodes as Shape Proxy Shape or other variations without problems in XML encoding, but reordering difficulties can occur in other programming language bindings.',name='description'),
    meta(content='https://www.web3d.org/technicalinfo/specifications/vrml97/part1/nodesRef.html#Collision',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/development/ProxyShapeExample.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='ProxyShapeExample.x3d'),
    Collision(DEF='MyCollision',
      #  can experiment with order of proxy and children nodes without error in XML encoding, but reordering difficulties can occur in other programming language bindings. 
      proxy=Shape(
        geometry=Box(size=(16,16,16))),
      children=[
      Shape(
        geometry=Sphere(),
        appearance=Appearance(DEF='RedAppearance',
          material=Material(diffuseColor=(1,0,0)))),
      Shape(
        geometry=Cone(),
        appearance=Appearance(USE='RedAppearance'))]),
    Script(DEF='MyNodeProducer',directOutput=True,
      field=[
      field(accessType='outputOnly',name='outputNode',type='MFNode')]),
    ROUTE(fromField='outputNode',fromNode='MyNodeProducer',toField='children',toNode='MyCollision')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for ProxyShapeExample.py")
