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
    meta(content='VentralPanelHatch.x3d',name='title'),
    meta(content="JetFire Transformer - Ventral Panel's Hatch.",name='description'),
    meta(content='Kreg L. Kelly',name='creator'),
    meta(content='22 September 2002',name='created'),
    meta(content='27 March 2016',name='modified'),
    meta(content='https://savage.nps.edu/Savage/Robots/JetFireTransformerToy/VentralPanelHatch.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Background(groundAngle=[1.309,1.5702],groundColor=[(0.5,0.3,0.3),(0.5,0.3,0.3),(0.5,0.4,0.4)],skyAngle=[1.309,1.572],skyColor=[(0,0.2,0.7),(0,0.5,1),(1,1,1)]),
    Transform(
      children=[
      Shape(DEF='VentralPanelHatch',
        appearance=Appearance(DEF='MyBlueGrey',
          material=Material(diffuseColor=(.7,.8,.8))),
        geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,5,6,7,-1,8,9,10,11,12,13,-1,8,9,1,0,-1,9,10,2,1,-1,10,11,3,2,-1,11,12,6,3,-1,12,13,7,6,-1,13,8,0,7,-1],solid=False,
          coord=Coordinate(point=[(0.5775,0.65,-1.265),(-0.5775,0.65,-1.265),(-1.045,0.605,-2.475),(-0.9625,0.6325,-2.75),(-0.4125,0.66,-2.75),(0.4125,0.66,-2.75),(0.9625,0.6325,-2.75),(1.045,0.605,-2.475),(0.5775,0.1375,-1.265),(-0.5775,0.1375,-1.265),(-1.045,0.1375,-2.475),(-0.9625,0.1375,-2.75),(0.9625,0.1375,-2.75),(1.045,0.1375,-2.475)]))),
      Transform(rotation=(1,0,0,-2),translation=(0,-0.38,-3.7),
        children=[
        Shape(
          appearance=Appearance(USE='MyBlueGrey'),
          geometry=Extrusion(crossSection=[(0.4675,0.5225),(0.4319,0.7014),(0.3305,0.8530),(0.1789,0.9544),(0,0.99),(-0.1789,0.9544),(-0.3305,0.8530),(-0.4319,0.7014),(-0.4675,0.5225),(0.4675,0.5225)],scale=[(0.3,0.1),(1,1)],solid=False,spine=[(0,-2.5,0),(0,-1.315,0)]))])]),
    Transform(DEF='FwdAntenna',rotation=(1,0,0,-1.57),scale=(0.01,0.005,0.005),translation=(-0.03,1,-2.8),
      children=[
      Transform(rotation=(0,0,1,2),
        children=[
        Shape(DEF='Antenna',
          appearance=Appearance(USE='MyBlueGrey'),
          geometry=Extrusion(DEF='Wing',ccw=False,creaseAngle=3.14,crossSection=[(0.00,1.00),(-5.2,0.00),(4,-.5),(4.6,-.4),(4.8,-.2),(4.9,.1),(4.9,.3),(4.5,.6),(4,.8),(3,1),(1,1.1),(0.00,1.00)],orientation=[(0,0,1,.6),(0,0,1,0)],scale=[(.6,.6),(2.2,2.2)],spine=[(-19.5,.1,23.4),(-6.5,.6,0)]))])]),
    Transform(DEF='AftAntenna',rotation=(1,0,0,-1.57),scale=(0.01,0.005,0.005),translation=(-0.03,0.9,-2.4),
      children=[
      Transform(rotation=(0,0,1,2),
        children=[
        Shape(USE='Antenna')])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for VentralPanelHatch.py")
