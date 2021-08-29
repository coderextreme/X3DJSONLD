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
    meta(content='ExtrusionEdgeCases.x3d',name='title'),
    meta(content='Scene incorporating extrusion edge cases',name='description'),
    meta(content='Roy Walmsley',name='creator'),
    meta(content='29 January 2016',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='https://www.web3d.org/wiki/index.php/Extrusion_Edge_Cases',name='reference'),
    meta(content='https://x3dgraphics.com/examples/X3dForAdvancedModeling/GeometricShapes/ExtrusionEdgeCases.x3d',name='identifier'),
    meta(content='XML Spy, http://www.altova.com',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='ExtrusionEdgeCases.x3d'),
    Viewpoint(description='Extrusion Edge Cases',position=(10,5,50)),
    Transform(translation=(2,10,0),
      children=[
      Viewpoint(description='Extrusion Edge Case 1',position=(2,0,20)),
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.8,0.1,0.05))),
        geometry=Extrusion(crossSection=[(-1,0),(0,1),(1,0),(-1,0)],scale=[(1,1),(1,1),(1,1),(2,2),(3,3),(3,3)],spine=[(-5,0,0),(0,0,0),(4,4,0),(4,4,0),(4,4,0),(8,0,0)]))]),
    Transform(scale=(2,2,2),translation=(-2,-2,0),
      children=[
      Viewpoint(description='Extrusion Edge Case 2a',position=(0,0,6)),
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0,0.8,0.1))),
        geometry=Extrusion(crossSection=[(-1,0),(0,2),(1,0),(-1,0)],solid=False))]),
    Transform(scale=(2,2,2),translation=(4,-2,0),
      children=[
      Viewpoint(description='Extrusion Edge Case 2b',position=(0,0,4)),
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0,0.8,0.1))),
        geometry=Extrusion(crossSection=[(-1,0),(0,2),(1,0),(-1,0)],solid=False,spine=[(0,1,0),(0,0,0)]))]),
    Transform(scale=(1.5,1.5,1.5),translation=(20,0,0),
      children=[
      Viewpoint(description='Extrusion Edge Case 3',position=(0,0,6)),
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.1,0,0.8))),
        geometry=Extrusion(beginCap=False,endCap=False,scale=[(1,1),(1.2,1.2),(1.4,1.4)],solid=False,spine=[(0,0,0),(0,1,0),(0,0,0)]))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for ExtrusionEdgeCases.py")
