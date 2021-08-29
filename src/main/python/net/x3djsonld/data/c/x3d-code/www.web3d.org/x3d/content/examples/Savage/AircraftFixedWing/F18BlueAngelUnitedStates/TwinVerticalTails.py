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
    meta(content='TwinVerticalTails.x3d',name='title'),
    meta(content='The Vertical Stabilizer of a Blue Angel. The twin vertical tails of the F18 are necessary to offset the vortex flows coming off leading-edge extensions(LEX) of the wings.',name='description'),
    meta(content='Etsuko Lippi',name='creator'),
    meta(content='30 August 2001',name='created'),
    meta(content='22 October 2018',name='modified'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='https://savage.nps.edu/Savage/AircraftFixedWing/F18BlueAngelUnitedStates/TwinVerticalTails.x3d',name='identifier'),
    meta(content='twin vertical tails',name='subject'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Background(skyColor=[(0.5,0.5,0.5)]),
    Transform(scale=(0.08,0.08,0.08),
      children=[
      Transform(DEF='MainWings',
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.1,0.25,0.5),specularColor=(0,0.2,0.3))),
          geometry=Extrusion(DEF='Wing',ccw=False,creaseAngle=3.14,crossSection=[(0.00,1.00),(-2,0.8),(-3,0.7),(-5.2,0.00),(-3,-0.7),(-2,-0.8),(0.00,-1),(2,-0.8),(3,-0.7),(5.2,0.00),(3,0.7),(2,0.8),(0.00,1.00)],scale=[(.75,.75),(1.2,1.2),(1.45,1.45)],spine=[(-17.5,0,0),(-8.5,0,0),(-3.5,0,0)]))]),
      Transform(DEF='WingEdges',
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(1,0.8,0),specularColor=(1,0.8,0))),
          geometry=Extrusion(DEF='WingEdge',ccw=False,creaseAngle=3.14,crossSection=[(0.00,1.00),(-2,0.8),(-3,0.7),(-5.2,0.00),(-3,-0.7),(-2,-0.8),(0.00,-1),(2,-0.8),(3,-0.7),(5.2,0.00),(3,0.7),(2,0.8),(0.00,1.00)],scale=[(.7,.7),(.75,.75)],spine=[(-19.5,0,0),(-17.5,0,0)]))])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for TwinVerticalTails.py")
