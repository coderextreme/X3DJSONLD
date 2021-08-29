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
    meta(content='BlueAngelEnginesMediumLOD.x3d',name='title'),
    meta(content='The medium Level-of-Detail (LOD) of the engines and tails is shown from the point of view of 600 meter distance. They do not include US Navy insignia.',name='description'),
    meta(content='Etsuko Lippi',name='creator'),
    meta(content='26 August 2001',name='created'),
    meta(content='22 October 2018',name='modified'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='engines, tails',name='subject'),
    meta(content='https://savage.nps.edu/Savage/AircraftFixedWing/F18BlueAngelUnitedStates/BlueAngelEnginesMediumLOD.x3d',name='identifier'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Background(groundAngle=[1.309,1.5702],groundColor=[(0.5,0.3,0.3),(0.5,0.3,0.3),(0.5,0.4,0.4)],skyAngle=[1.309,1.572],skyColor=[(0,0.2,0.7),(0,0.5,1),(1,1,1)]),
    Transform(rotation=(0,1,0,3.14),scale=(1,1.2,1.2),translation=(0,0,-5.0),
      children=[
      Shape(
        appearance=Appearance(DEF='Tail',
          material=Material(diffuseColor=(0.1,0.25,0.5),specularColor=(0,0.2,0.3))),
        geometry=Extrusion(DEF='TailLeft',creaseAngle=2.5,crossSection=[(.494,1.196),(.923,.923),(1.196,.494),(1.196,-.494),(.923,-.923),(.494,-1.196),(-.494,-1.196),(-.923,-.923),(-1.196,-.494),(-1.196,.494),(-.923,.923),(-.494,1.196),(.494,1.196)],scale=[(0.28,0.28),(0.40,0.34),(0.45,0.40),(0.45,0.40),(0.34,0.34),(0.31,0.31)],spine=[(-7.5,0,0.1),(-6,0,0.05),(-5,0,0.05),(-4,0,0.1),(-3,0,0.15),(-2,0,0.2)]))]),
    Transform(rotation=(0,1,0,3.14),scale=(1,1.2,1.2),translation=(0,0,-4.1),
      children=[
      Shape(
        appearance=Appearance(USE='Tail'),
        geometry=Extrusion(DEF='TailRight',creaseAngle=2.5,crossSection=[(.494,1.196),(.923,.923),(1.196,.494),(1.196,-.494),(.923,-.923),(.494,-1.196),(-.494,-1.196),(-.923,-.923),(-1.196,-.494),(-1.196,.494),(-.923,.923),(-.494,1.196),(.494,1.196)],scale=[(0.28,0.28),(0.40,0.34),(0.45,0.40),(0.45,0.40),(0.34,0.34),(0.31,0.31)],spine=[(-7.5,0,-0.1),(-6,0,-0.05),(-5,0,-0.05),(-4,0,-0.1),(-3,0,-0.15),(-2,0,-0.2)]))]),
    Transform(rotation=(0,1,0,3.14),scale=(0.43,0.43,0.43),translation=(4.4,0,-5.1),
      children=[
      Shape(
        appearance=Appearance(DEF='TailEnd',
          material=Material(ambientIntensity=0.3,shininess=0.1,specularColor=(0.7,0.7,0.8))),
        geometry=Extrusion(DEF='TailLeftEnd',creaseAngle=2.5,crossSection=[(1.00,0.00),(0.92,0.38),(0.71,0.71),(0.38,0.92),(0.00,1.00),(-0.38,0.92),(-0.71,0.71),(-0.92,0.38),(-1.00,0.00),(-0.92,-0.38),(-0.71,-0.71),(-0.38,-0.92),(0.00,-1.00),(0.38,-0.92),(0.71,-0.71),(0.92,-0.38),(1.00,0.00),(0.80,0.00),(0.74,-0.31),(0.57,-0.57),(0.31,-0.74),(0.00,-0.80),(-0.31,-0.74),(-0.57,-0.57),(-0.74,-0.31),(-0.80,0.00),(-0.74,0.31),(-0.57,0.57),(-0.31,0.74),(0.00,0.80),(0.31,0.74),(0.57,0.57),(0.74,0.31),(0.80,0.00)],scale=[(1.1,1.1),(1.1,1.1)],spine=[(-7.5,-0.05,0),(-7.0,-0.07,0)]))]),
    Transform(rotation=(0,1,0,3.14),scale=(0.43,0.43,0.43),translation=(4.4,0,-4.0),
      children=[
      Shape(
        appearance=Appearance(USE='TailEnd'),
        geometry=Extrusion(DEF='TailRightEnd',creaseAngle=2.5,crossSection=[(1.00,0.00),(0.92,0.38),(0.71,0.71),(0.38,0.92),(0.00,1.00),(-0.38,0.92),(-0.71,0.71),(-0.92,0.38),(-1.00,0.00),(-0.92,-0.38),(-0.71,-0.71),(-0.38,-0.92),(0.00,-1.00),(0.38,-0.92),(0.71,-0.71),(0.92,-0.38),(1.00,0.00),(0.80,0.00),(0.74,-0.31),(0.57,-0.57),(0.31,-0.74),(0.00,-0.80),(-0.31,-0.74),(-0.57,-0.57),(-0.74,-0.31),(-0.80,0.00),(-0.74,0.31),(-0.57,0.57),(-0.31,0.74),(0.00,0.80),(0.31,0.74),(0.57,0.57),(0.74,0.31),(0.80,0.00)],scale=[(1.1,1.1),(1.1,1.1)],spine=[(-7.5,-0.05,0),(-7.0,-0.07,0)]))]),
    Transform(scale=(0.43,0.43,0.43),translation=(11.5,0,-5.1),
      children=[
      Shape(
        appearance=Appearance(DEF='TailEndJet',
          material=Material(ambientIntensity=0.3,diffuseColor=(0,0,0),specularColor=(0.7,0.7,0.8))),
        geometry=Extrusion(DEF='ExtrusionEndJet',creaseAngle=2.5,crossSection=[(1.00,0.00),(0.92,0.38),(0.71,0.71),(0.38,0.92),(0.00,1.00),(-0.38,0.92),(-0.71,0.71),(-0.92,0.38),(-1.00,0.00),(-0.92,-0.38),(-0.71,-0.71),(-0.38,-0.92),(0.00,-1.00),(0.38,-0.92),(0.71,-0.71),(0.92,-0.38),(1.00,0.00),(0.80,0.00),(0.74,-0.31),(0.57,-0.57),(0.31,-0.74),(0.00,-0.80),(-0.31,-0.74),(-0.57,-0.57),(-0.74,-0.31),(-0.80,0.00),(-0.74,0.31),(-0.57,0.57),(-0.31,0.74),(0.00,0.80),(0.31,0.74),(0.57,0.57),(0.74,0.31),(0.80,0.00)],scale=[(1.2,1.2),(0.78,0.78)],spine=[(-9,0,0),(-7.5,-0.05,0)]))]),
    Transform(scale=(0.43,0.43,0.43),translation=(11.5,0,-4.0),
      children=[
      Shape(
        appearance=Appearance(USE='TailEndJet'),
        geometry=Extrusion(USE='ExtrusionEndJet'))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for BlueAngelEnginesMediumLOD.py")
