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
    meta(content='AircraftFuselage.x3d',name='title'),
    meta(content='The main fuselage of a Blue Angel, created with an Extrusion node and the image of a F18 cockpit attached to it.',name='description'),
    meta(content='Etsuko Lippi',name='creator'),
    meta(content='11 July 2001',name='created'),
    meta(content='22 October 2018',name='modified'),
    meta(content='http://spower.free.fr/thisky/f18review/f18rev.htm',name='reference'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='aircraft fuselage',name='subject'),
    meta(content='https://savage.nps.edu/Savage/AircraftFixedWing/F18BlueAngelUnitedStates/AircraftFuselage.x3d',name='identifier'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Background(groundAngle=[1.309,1.5702],groundColor=[(0.5,0.3,0.3),(0.5,0.3,0.3),(0.5,0.4,0.4)],skyAngle=[1.309,1.572],skyColor=[(0,0.2,0.7),(0,0.5,1),(1,1,1)]),
    Transform(rotation=(0.58,-0.58,0.58,2.09),scale=(0.4,0.4,0.4),translation=(0.5,-0.41,-5),
      #  A Yellow arrow on top the fuselage. 
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(1,0.8,0),specularColor=(1,0.8,0))),
        geometry=IndexedFaceSet(coordIndex=[0,1,2,0,-1,3,4,5,3,-1],creaseAngle=1.75,solid=False,
          coord=Coordinate(point=[(0,7.5,-0.15),(-0.35,5,0),(0.35,5,0),(-0.2,5,0),(0.2,5,0),(0,-5,0)])))]),
    Transform(rotation=(1,0.05,0,3.14),scale=(0.3,0.3,0.3),translation=(-3.0,0.11,-5.0),
      children=[
      Shape(
        appearance=Appearance(DEF='FuselageAppearance',
          material=Material(diffuseColor=(0.1,0.25,0.5),specularColor=(0,0.2,0.3))),
        geometry=Extrusion(DEF='topFuseLage',creaseAngle=2.5,crossSection=[(0.00,1.30),(.494,1.196),(.923,.923),(1.196,.494),(1.30,0.00),(1.196,-.494),(.923,-.923),(.494,-1.196),(0.00,-1.30)],scale=[(0.1,0.05),(0.4,0.45),(0.8,0.8)],spine=[(2,-0.4,0),(3,-0.4,0),(5,-0.3,0)]))]),
    Transform(rotation=(0,1,0,3.14),scale=(1,1,1.3),translation=(0,0,-5.0),
      #  Fuselage head part 
      children=[
      Shape(
        appearance=Appearance(USE='FuselageAppearance'),
        geometry=Extrusion(DEF='fuselageHead',creaseAngle=2.5,crossSection=[(0.00,1.30),(.494,1.196),(.923,.923),(1.196,.494),(1.30,0.00),(1.196,-.494),(.923,-.923),(.494,-1.196),(0.00,-1.30),(-.494,-1.196),(-.923,-.923),(-1.196,-.494),(-1.30,-0.00),(-1.196,.494),(-.923,.923),(-.494,1.196),(0.00,1.30)],scale=[(0.47,0.37),(0.37,0.27),(0.18,0.15),(0.10,0.08),(0.06,0.04),(0.03,0.015),(0.009,0.009)],spine=[(1.71,0.08,0),(3,0,0),(4,-0.1,0),(4.15,-0.1,0),(4.2,-0.1,0),(4.22,-0.1,0),(4.23,-0.1,0)]))]),
    Transform(rotation=(0,1,0,3.14),scale=(1,1,1.3),translation=(0,0,-5.0),
      children=[
      Shape(
        appearance=Appearance(USE='FuselageAppearance'),
        geometry=Extrusion(DEF='fuselage',creaseAngle=2.5,crossSection=[(0.00,1.30),(.494,1.196),(.923,.923),(1.196,.494),(1.30,0.00),(1.196,-.494),(.923,-.923),(.494,-1.196),(0.00,-1.30),(-.494,-1.196),(-.923,-.923),(0.00,-0.5),(0.00,0.5),(-.923,.923),(-.494,1.196),(0.00,1.30)],scale=[(0.4,0.3),(0.46,0.36),(0.46,0.36),(0.46,0.36),(0.58,0.36),(0.46,0.36),(0.47,0.37)],spine=[(-4,-0.055,0),(-3,-0,0),(-2,0.075,0),(-1,0.1,0),(0,0.22,0),(1,0.08,0),(1.73,0.08,0)]))]),
    Transform(DEF='controlPanel',rotation=(0.58,0.58,0.58,2.09),scale=(0.2,0.2,0.2),translation=(-1.5,0.32,-5),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(),
          texture=ImageTexture(url=["F18Cockpit.gif","https://savage.nps.edu/Savage/AircraftFixedWing/F18BlueAngelUnitedStates/F18Cockpit.gif"]),
          #  note: It is imaginary and unclassified. 
          ),
        geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,5,6,7,8,9,0],creaseAngle=1.75,solid=False,
          coord=Coordinate(point=[(0.00,1.30,0),(.494,1.196,0),(.923,.923,0),(1.196,.494,0),(2.3,.494,0),(2.3,-.494,0),(1.196,-.494,0),(.923,-.923,0),(.494,-1.196,0),(0.00,-1.30,0)])))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for AircraftFuselage.py")
