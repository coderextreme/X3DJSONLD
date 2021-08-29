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
    meta(content='RadarScreen.x3d',name='title'),
    meta(content='A radar screen in the bridge.',name='description'),
    meta(content='Foo, Khee Loon',name='creator'),
    meta(content='10 February 2001',name='created'),
    meta(content='16 January 2014',name='modified'),
    meta(content='https://savage.nps.edu/Savage/ShipsMilitary/CarrierSaratogaUnitedStates/RadarScreen.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Transform(rotation=(1,0,0,1.571),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.7,0.7,0.7))),
        geometry=Extrusion(ccw=False,convex=False,creaseAngle=1.75,crossSection=[(0,0),(0,-2.45),(0.05,-2.47),(0.1,-2.5),(0.35,-2.4),(0.4,-2.375),(0.45,-2.3),(0.675,-1.65),(0.7,-1.6),(0.8,-1.55),(1.25,-1.45),(1.3,-1.4),(1.3,-1.2),(0.9,-1.2),(0.7,0),(0,0)],spine=[(0,0,0),(0,5,0)]))]),
    #  "Power switch" 
    Transform(rotation=(0,1,0,1.571),translation=(0.65,1.8,4.8),
      children=[
      Transform(rotation=(1,0,0,-1.915447),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.45,0.5,0.3))),
          geometry=Extrusion(creaseAngle=3.43,crossSection=[(0,0),(0,0.45),(0.2,0.45),(0.2,0),(0,0)],spine=[(0,0,0),(0,0.036,0)]))]),
      Transform(rotation=(1,0,0,-1.915447),translation=(0.1,0.35,-0.13),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.9,0.3,0.3))),
          geometry=Box(size=(0.036,0.04,0.05)))]),
      Transform(rotation=(1,0,0,-1.915447),translation=(0.1,0.2,-0.078),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.2,0.9,0.3))),
          geometry=Box(size=(0.036,0.04,0.05)))]),
      Transform(rotation=(1,0,0,-1.915447),translation=(0.1,0.1,-0.04),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(shininess=1)),
          geometry=Sphere(radius=0.04))])]),
    #  "No. 1 screen" 
    Transform(rotation=(0,1,0,1.571),translation=(0.55,2.0,4.1),
      children=[
      Transform(rotation=(1,0,0,-1.915447),
        children=[
        Shape(DEF='Screenborder',
          appearance=Appearance(
            material=Material(diffuseColor=(0.45,0.5,0.3))),
          geometry=Extrusion(creaseAngle=2.3,crossSection=[(0,0.04),(0.01,0.038),(0.02,0.035),(0.03,0.029),(0.037,0.015),(0.04,0),(0.037,-0.015),(0.03,-0.029),(0.02,-0.035),(0.01,-0.038),(0,-0.04),(-0.01,-0.038),(-0.02,-0.035),(-0.03,-0.029),(-0.037,-0.015),(-0.04,0),(-0.037,0.015),(-0.03,0.029),(-0.02,0.035),(-0.01,0.038),(0,0.04)],spine=[(0,0,0.4),(0.1,0,0.38),(0.2,0,0.35),(0.3,0,0.29),(0.37,0,0.15),(0.4,0,0),(0.37,0,-0.15),(0.3,0,-0.29),(0.2,0,-0.35),(0.1,0,-0.38),(0,0,-0.4),(-0.1,0,-0.38),(-0.2,0,-0.35),(-0.3,0,-0.29),(-0.37,0,-0.15),(-0.4,0,0),(-0.37,0,0.15),(-0.3,0,0.29),(-0.2,0,0.35),(-0.1,0,0.38),(0,0,0.4)]))]),
      Transform(rotation=(1,0,0,-1.915447),
        children=[
        Shape(DEF='Screen',
          appearance=Appearance(
            material=Material(diffuseColor=(0.25,0.3,0.3),shininess=0.4)),
          geometry=Cylinder(height=0.05,radius=0.4))])]),
    #  "No. 2 screen" 
    Transform(rotation=(0,1,0,1.571),translation=(0.55,2,2),
      children=[
      Transform(rotation=(1,0,0,-1.915447),
        children=[
        Shape(USE='Screen')]),
      Transform(rotation=(1,0,0,-1.915447),
        children=[
        Shape(USE='Screenborder')])]),
    #  "No. 1 keyboard" 
    Transform(rotation=(0,0,1,-0.260),translation=(0.75,1.58,3.62),
      children=[
      Inline(url=["ComputerKeyboard.x3d","https://savage.nps.edu/Savage/ShipsMilitary/CarrierSaratogaUnitedStates/ComputerKeyboard.x3d","ComputerKeyboard.wrl","https://savage.nps.edu/Savage/ShipsMilitary/CarrierSaratogaUnitedStates/ComputerKeyboard.wrl"])]),
    #  "No. 2 keyboard" 
    Transform(rotation=(0,0,1,-0.26),translation=(0.75,1.58,1.5),
      children=[
      Inline(url=["ComputerKeyboard.x3d","https://savage.nps.edu/Savage/ShipsMilitary/CarrierSaratogaUnitedStates/ComputerKeyboard.x3d","ComputerKeyboard.wrl","https://savage.nps.edu/Savage/ShipsMilitary/CarrierSaratogaUnitedStates/ComputerKeyboard.wrl"])]),
    Transform(rotation=(0,0,1,0.3437),translation=(0.5,2.2,3),
      children=[
      Transform(
        children=[
        Inline(url=["encryptor.x3d","https://savage.nps.edu/Savage/ShipsMilitary/CarrierSaratogaUnitedStates/encryptor.x3d","encryptor.wrl","https://savage.nps.edu/Savage/ShipsMilitary/CarrierSaratogaUnitedStates/encryptor.wrl"])])]),
    Transform(rotation=(0,0,1,0.3437),translation=(0.6,1.9,3),
      children=[
      Transform(
        children=[
        Inline(url=["encryptor.x3d","https://savage.nps.edu/Savage/ShipsMilitary/CarrierSaratogaUnitedStates/encryptor.x3d","encryptor.wrl","https://savage.nps.edu/Savage/ShipsMilitary/CarrierSaratogaUnitedStates/encryptor.wrl"])])]),
    Transform(rotation=(0,0,1,0.3437),translation=(0.5,2.2,1),
      children=[
      Transform(
        children=[
        Inline(url=["encryptor.x3d","https://savage.nps.edu/Savage/ShipsMilitary/CarrierSaratogaUnitedStates/encryptor.x3d","encryptor.wrl","https://savage.nps.edu/Savage/ShipsMilitary/CarrierSaratogaUnitedStates/encryptor.wrl"])])]),
    Transform(rotation=(0,0,1,0.3437),translation=(0.6,1.9,1),
      children=[
      Transform(
        children=[
        Inline(url=["encryptor.x3d","https://savage.nps.edu/Savage/ShipsMilitary/CarrierSaratogaUnitedStates/encryptor.x3d","encryptor.wrl","https://savage.nps.edu/Savage/ShipsMilitary/CarrierSaratogaUnitedStates/encryptor.wrl"])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for RadarScreen.py")
