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
    meta(content='LEX.x3d',name='title'),
    meta(content='The sharp-edged, cambered leading-edge extensions(LEX), slots at fuselage junction and outward-canted twin fins designed to produce high agility and docile performance.',name='description'),
    meta(content='Etsuko Lippi',name='creator'),
    meta(content='31 August 2001',name='created'),
    meta(content='22 October 2018',name='modified'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='https://savage.nps.edu/Savage/AircraftFixedWing/F18BlueAngelUnitedStates/LEX.x3d',name='identifier'),
    meta(content='leading-edge extension, LEX',name='subject'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Background(skyColor=[(0.5,0.5,0.5)]),
    Transform(rotation=(-0,0.71,0.71,3.14),scale=(0.6,0.6,0.6),
      children=[
      Transform(
        children=[
        Shape(
          appearance=Appearance(DEF='LEXColor',
            material=Material(diffuseColor=(0.1,0.25,0.5),specularColor=(0,0.2,0.3))),
          geometry=Extrusion(ccw=False,creaseAngle=3.14,crossSection=[(-2,0.8),(-3,0.7),(-5.2,0.00),(-3,-0.7),(-2,-0.8),(-2,0.8)],scale=[(0.3,0.3),(0.35,0.35),(0.35,0.35),(0.3,0.3),(0.28,0.28),(0.25,0.25),(0.1,0.1)],spine=[(-12,0,0),(-10,0,0),(-8.5,0,0),(-6,0,0),(-4,0,0),(-3.5,0,0),(-1,0,0)]))]),
      Transform(
        children=[
        Shape(
          appearance=Appearance(USE='LEXColor'),
          geometry=Extrusion(ccw=False,creaseAngle=3.14,crossSection=[(2,-0.8),(3,-0.7),(5.2,0.00),(3,0.7),(2,0.8),(2,-0.8)],scale=[(0.3,0.3),(0.35,0.35),(0.35,0.35),(0.3,0.3),(0.28,0.28),(0.25,0.25),(0.1,0.1)],spine=[(-12,0,0),(-10,0,0),(-8.5,0,0),(-6,0,0),(-4,0,0),(-3.5,0,0),(-1,0,0)]))])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for LEX.py")
