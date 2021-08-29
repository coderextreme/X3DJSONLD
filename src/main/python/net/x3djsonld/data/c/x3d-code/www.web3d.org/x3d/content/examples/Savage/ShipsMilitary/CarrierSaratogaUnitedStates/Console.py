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
    meta(content='Console.x3d',name='title'),
    meta(content='Foo, Khee Loon',name='creator'),
    meta(content='16 January 2014',name='modified'),
    meta(content='Console details in the Bridge.',name='description'),
    meta(content='https://savage.nps.edu/Savage/ShipsMilitary/CarrierSaratogaUnitedStates/Console.x3d',name='identifier'),
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
    #  "No. 1 monitor" 
    Transform(rotation=(0,1,0,1.571),translation=(0.75,1.64,4.5),
      children=[
      Transform(rotation=(1,0,0,-1.915447),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.45,0.5,0.3))),
          geometry=Extrusion(convex=False,creaseAngle=2.3,crossSection=[(0,0),(0,0.7),(0.8,0.7),(0.8,0),(0,0),(0.05,0.05),(0.75,0.05),(0.75,0.65),(0.05,0.65),(0.05,0.05),(0,0)],spine=[(0,0,0),(0,0.06,0)]))]),
      Transform(rotation=(1,0,0,-1.915447),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.25,0.3,0.3),shininess=0.4)),
          geometry=Extrusion(ccw=False,creaseAngle=3.43,crossSection=[(0.05,0.05),(0.75,0.05),(0.75,0.65),(0.05,0.65),(0.05,0.05)],spine=[(0,0,0),(0,0.056,0)]))])]),
    #  "No. 2 Monitor" 
    Transform(rotation=(0,1,0,1.571),translation=(0.75,1.64,3.03),
      children=[
      Transform(rotation=(1,0,0,-1.915447),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.45,0.5,0.3),shininess=0.5)),
          geometry=Extrusion(convex=False,creaseAngle=2.3,crossSection=[(0,0),(0,0.7),(0.8,0.7),(0.8,0),(0,0),(0.05,0.05),(0.75,0.05),(0.75,0.65),(0.05,0.65),(0.05,0.05),(0,0)],spine=[(0,0,0),(0,0.06,0)]))]),
      Transform(rotation=(1,0,0,-1.915447),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.25,0.3,0.3))),
          geometry=Extrusion(ccw=False,creaseAngle=3.43,crossSection=[(0.05,0.05),(0.75,0.05),(0.75,0.65),(0.05,0.65),(0.05,0.05)],spine=[(0,0,0),(0,0.056,0)]))])]),
    #  "No. 3 monitor" 
    Transform(rotation=(0,1,0,1.571),translation=(0.75,1.64,1.58),
      children=[
      Transform(rotation=(1,0,0,-1.915447),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.45,0.5,0.3),shininess=0.5)),
          geometry=Extrusion(convex=False,creaseAngle=2.3,crossSection=[(0,0),(0,0.7),(0.8,0.7),(0.8,0),(0,0),(0.05,0.05),(0.75,0.05),(0.75,0.65),(0.05,0.65),(0.05,0.05),(0,0)],spine=[(0,0,0),(0,0.06,0)]))]),
      Transform(rotation=(1,0,0,-1.915447),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.25,0.3,0.3))),
          geometry=Extrusion(ccw=False,creaseAngle=3.43,crossSection=[(0.05,0.05),(0.75,0.05),(0.75,0.65),(0.05,0.65),(0.05,0.05)],spine=[(0,0,0),(0,0.056,0)]))])]),
    #  "No. 1 keyboard" 
    Transform(rotation=(0,0,1,-0.260),translation=(0.75,1.58,3.62),
      children=[
      Inline(url=["ComputerKeyboard.x3d","https://savage.nps.edu/Savage/ShipsMilitary/CarrierSaratogaUnitedStates/ComputerKeyboard.x3d","ComputerKeyboard.wrl","https://savage.nps.edu/Savage/ShipsMilitary/CarrierSaratogaUnitedStates/ComputerKeyboard.wrl"])]),
    #  "No. 2 keyboard" 
    Transform(rotation=(0,0,1,-0.26),translation=(0.75,1.58,2.15),
      children=[
      Inline(url=["ComputerKeyboard.x3d","https://savage.nps.edu/Savage/ShipsMilitary/CarrierSaratogaUnitedStates/ComputerKeyboard.x3d","ComputerKeyboard.wrl","https://savage.nps.edu/Savage/ShipsMilitary/CarrierSaratogaUnitedStates/ComputerKeyboard.wrl"])]),
    #  "No. 3 keyboard" 
    Transform(rotation=(0,0,1,-0.26),translation=(0.75,1.58,0.7),
      children=[
      Inline(url=["ComputerKeyboard.x3d","https://savage.nps.edu/Savage/ShipsMilitary/CarrierSaratogaUnitedStates/ComputerKeyboard.x3d","ComputerKeyboard.wrl","https://savage.nps.edu/Savage/ShipsMilitary/CarrierSaratogaUnitedStates/ComputerKeyboard.wrl"])]),
    Transform(),])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Console.py")
