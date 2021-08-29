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
    meta(content='Fuselage.x3d',name='title'),
    meta(content='The upper part of the fuselage of a Blue Angel. The model is created with an Extrusion node. Yellow BlueAngel pattern is created with an IndexFaceset attached to top of fuselage.',name='description'),
    meta(content='Etsuko Lippi',name='creator'),
    meta(content='5 September 2001',name='created'),
    meta(content='22 October 2018',name='modified'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='https://savage.nps.edu/Savage/AircraftFixedWing/F18BlueAngelUnitedStates/Fuselage.x3d',name='identifier'),
    meta(content='aircraft fuselage',name='subject'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Background(groundAngle=[1.309,1.5702],groundColor=[(0.5,0.3,0.3),(0.5,0.3,0.3),(0.5,0.4,0.4)],skyAngle=[1.309,1.572],skyColor=[(0,0.2,0.7),(0,0.5,1),(1,1,1)]),
    Transform(rotation=(0,1,0,3.14),scale=(1,1,1.3),translation=(0,0,-5.0),
      children=[
      Shape(
        appearance=Appearance(DEF='FuseLage',
          material=Material(diffuseColor=(0.1,0.25,0.5),specularColor=(0,0.2,0.3))),
        geometry=Extrusion(creaseAngle=2.5,crossSection=[(0.00,1.30),(.494,1.196),(.923,.923),(1.196,.494),(1.196,-.494),(.923,-.923),(.494,-1.196),(0.00,-1.30)],scale=[(0.65,0.6),(0.65,0.6),(0.7,0.65),(0.75,0.7),(0.7,0.7),(0.6,0.6),(0.4,0.4),(0.3,0.3),(0.1,0.1)],spine=[(0.85,-0.4,0),(1.3,-0.4,0),(1.4,-0.4,0),(1.55,-0.4,0),(5,-0.3,0),(7,-0.2,0),(9,-0.1,0),(11,0,0),(11.7,0.15,0)]))]),
    Transform(rotation=(-0.58,-0.58,0.58,4.19),scale=(1.5,1.5,1.5),translation=(-2.1,-1.3,-5),
      #  A Yellow pattern on top the fuselage. 
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(1,0.8,0),specularColor=(1,0.8,0))),
        geometry=IndexedFaceSet(coordIndex=[1,18,19,3,1,-1,15,20,21,17,15,-1,1,3,4,5,0,1,-1,15,17,0,13,14,15,-1,0,5,13,0,-1,5,6,12,13,5,-1,6,7,11,12,6,-1,7,8,10,11,7,-1,8,9,10,8,-1,18,22,23,19,18,-1,20,24,25,21,20,-1,22,2,23,22,-1,24,16,25,24,-1],creaseAngle=1.75,solid=False,
          coord=Coordinate(point=[(0,-0.3,0.01),(0.6,0.5,-0.04),(0.58,2.5,-0.35),(0.7,0.5,-0.04),(0.65,0,-0.06),(0.4,-1.0,-0.05),(0.3,-2.0,-0.1),(0.2,-3.0,-0.2),(0.1,-4.0,-0.36),(0,-5.5,-0.58),(-0.1,-4.0,-0.36),(-0.2,-3.0,-0.2),(-0.3,-2.0,-0.1),(-0.4,-1.0,-0.05),(-0.65,0,-0.06),(-0.7,0.5,-0.04),(-0.58,2.5,-0.35),(-0.6,0.5,-0.04),(0.6,1.5,-0.35),(0.7,1.5,-0.35),(-0.7,1.5,-0.35),(-0.6,1.5,-0.35),(0.6,2.0,-0.3),(0.65,2.0,-0.3),(-0.65,2.0,-0.3),(-0.6,2.0,-0.3)])))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Fuselage.py")
