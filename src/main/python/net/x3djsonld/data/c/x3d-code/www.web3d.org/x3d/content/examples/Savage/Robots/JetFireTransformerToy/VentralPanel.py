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
    meta(content='VentralPanel.x3d',name='title'),
    meta(content='Ventral Panel',name='description'),
    meta(content='Kreg L. Kelly',name='creator'),
    meta(content='22 September 2002',name='created'),
    meta(content='27 March 2016',name='modified'),
    meta(content='https://savage.nps.edu/Savage/Robots/JetFireTransformerToy/VentralPanel.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Background(groundAngle=[1.309,1.5702],groundColor=[(0.5,0.3,0.3),(0.5,0.3,0.3),(0.5,0.4,0.4)],skyAngle=[1.309,1.572],skyColor=[(0,0.2,0.7),(0,0.5,1),(1,1,1)]),
    Transform(DEF='VentralPannel',
      children=[
      Shape(DEF='RightSide',
        appearance=Appearance(
          material=Material(diffuseColor=(.7,.8,.8))),
        geometry=IndexedFaceSet(coordIndex=[0,1,2,3,-1,1,4,5,2,-1,2,5,6,7,-1,9,2,7,8,-1,13,14,6,5,4,10,11,12,-1,15,16,14,13,-1,16,17,6,14,-1,17,8,7,6,-1,4,1,0,18,19,-1,10,4,19,20,-1,11,10,20,21,-1,12,11,21,22,-1,23,24,25,26,27,-1,23,24,28,29,30,-1,24,28,25,-1,25,28,29,26,-1,26,27,30,29,-1,23,27,30,-1,0,18,3,-1,18,19,9,3,-1,8,9,19,20,21,22,15,16,17,-1],solid=False,
          coord=Coordinate(point=[(-2.365,0,-2.53),(-2.36,0.22,-2.53),(-2.145,0.22,-0.88),(-2.145,0,-0.88),(-2.09,0.4125,-2.53),(-1.98,0.3575,-1.21),(-0.66,0.44,-0.44),(-0.77,0.2475,0),(-0.77,0.165,0),(-2.145,0.1375,-0.88),(-1.045,0.605,-2.53),(-0.9625,0.6325,-2.255),(-0.4125,0.66,-2.255),(-0.4675,0.5225,-0.825),(-0.55,0.495,-0.825),(-0.44,0.44,-0.825),(-0.55,0.44,-0.825),(-0.66,0.33,-0.44),(-1.9525,0,-2.53),(-1.925,0.33,-2.53),(-1.045,0.5225,-2.53),(-0.9625,0.5225,-2.255),(-0.385,0.55,-2.255),(-1.1275,0.5,-2.255),(-1.54,0.37,-2.255),(-1.54,0.42,-2.53),(-1.43,0.42,-2.75),(-1.1275,0.5225,-2.75),(-1.54,0.33,-2.53),(-1.43,0.33,-2.75),(-1.1275,0.4125,-2.75)]))),
      Transform(rotation=(1,0,0,-1.57),
        children=[
        Shape(DEF='Center',
          appearance=Appearance(
            material=Material(diffuseColor=(.7,.8,.8))),
          geometry=Extrusion(creaseAngle=0.785,crossSection=[(0.4675,0.5225),(0.4319,0.7014),(0.3305,0.8530),(0.1789,0.9544),(0,0.99),(-0.1789,0.9544),(-0.3305,0.8530),(-0.4319,0.7014),(-0.4675,0.5225),(-0.44,0.44),(-0.4065,0.6084),(-0.3111,0.7511),(-0.1684,0.8465),(0,0.88),(0.1684,0.8465),(0.3111,0.7511),(0.4065,0.6084),(0.44,0.44),(0.4675,0.5225)],solid=False,spine=[(0,2.255,0),(0,0.825,0)]))]),
      Shape(DEF='LeftSide',
        appearance=Appearance(
          material=Material(diffuseColor=(.7,.8,.8))),
        geometry=IndexedFaceSet(coordIndex=[0,1,2,3,-1,1,4,5,2,-1,2,5,6,7,-1,9,2,7,8,-1,13,14,6,5,4,10,11,12,-1,15,16,14,13,-1,16,17,6,14,-1,17,8,7,6,-1,4,1,0,18,19,-1,10,4,19,20,-1,11,10,20,21,-1,12,11,21,22,-1,23,24,25,26,27,-1,23,24,28,29,30,-1,24,28,25,-1,25,28,29,26,-1,26,27,30,29,-1,23,27,30,-1,0,18,3,-1,18,19,9,3,-1,8,9,19,20,21,22,15,16,17,-1],solid=False,
          coord=Coordinate(point=[(2.365,0,-2.53),(2.36,0.22,-2.53),(2.145,0.22,-0.88),(2.145,0,-0.88),(2.09,0.4125,-2.53),(1.98,0.3575,-1.21),(0.66,0.44,-0.44),(0.77,0.2475,0),(0.77,0.165,0),(2.145,0.1375,-0.88),(1.045,0.605,-2.53),(0.9625,0.6325,-2.255),(0.4125,0.66,-2.255),(0.4675,0.5225,-0.825),(0.55,0.495,-0.825),(0.44,0.44,-0.825),(0.55,0.44,-0.825),(0.66,0.33,-0.44),(1.9525,0,-2.53),(1.925,0.33,-2.53),(1.045,0.5225,-2.53),(0.9625,0.5225,-2.255),(0.385,0.55,-2.255),(1.1275,0.5,-2.255),(1.54,0.37,-2.255),(1.54,0.42,-2.53),(1.43,0.42,-2.75),(1.1275,0.5225,-2.75),(1.54,0.33,-2.53),(1.43,0.33,-2.75),(1.1275,0.4125,-2.75)])))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for VentralPanel.py")
