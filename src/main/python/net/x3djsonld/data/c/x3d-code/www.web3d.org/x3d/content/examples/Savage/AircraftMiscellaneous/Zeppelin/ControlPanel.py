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
    meta(content='ControlPanel.x3d',name='title'),
    meta(content='Control Panel of the Zeppelin.',name='description'),
    meta(content='Selcuk OZTURK',name='creator'),
    meta(content='16 September 2002',name='created'),
    meta(content='27 November 2015',name='modified'),
    meta(content='https://savage.nps.edu/Savage/AircraftMiscellaneous/Zeppelin/ControlPanel.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Viewpoint(description='Control Panel',orientation=(0,1,0,1.57),position=(7,2,-0.5)),
    Shape(
      appearance=Appearance(
        material=Material(diffuseColor=(1,1,0))),
      geometry=Extrusion(convex=False,creaseAngle=5,crossSection=[(0,0),(2,0),(2,1),(0,2),(0,0)],solid=False,spine=[(0,0,2),(0,0,-2)])),
    Transform(
      children=[
      Group(
        children=[
        Transform(rotation=(0,0,1,1.1),translation=(1,1.5,0),
          children=[
          Transform(rotation=(0,1,0,1.57),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(0,0,1))),
              geometry=Box(size=(4,2,0.1))),
            #  PortPalOdometer, PortStick, PortJetOdometer, PortStick, StarboardJetodometer, StarboardStick, StartPalOdometer, StarboardStick 
            Transform(scale=(0.3,0.3,0.3),translation=(-1.5,0.5,0.1),
              children=[
              Inline(url=["PortPalOdometer.x3d","https://savage.nps.edu/Savage/AircraftMiscellaneous/Zeppelin/PortPalOdometer.x3d","PortPalOdometer.wrl","https://savage.nps.edu/Savage/AircraftMiscellaneous/Zeppelin/PortPalOdometer.wrl"])]),
            Transform(scale=(0.4,0.4,0.4),translation=(-1.5,-0.5,0.1),
              children=[
              Inline(DEF='PortStick',url=["PortStick.x3d","https://savage.nps.edu/Savage/AircraftMiscellaneous/Zeppelin/PortStick.x3d","PortStick.wrl","https://savage.nps.edu/Savage/AircraftMiscellaneous/Zeppelin/PortStick.wrl"])]),
            Transform(scale=(0.3,0.3,0.3),translation=(-0.5,0.5,0.1),
              children=[
              Inline(url=["PortJetOdometer.x3d","https://savage.nps.edu/Savage/AircraftMiscellaneous/Zeppelin/PortJetOdometer.x3d","PortJetOdometer.wrl","https://savage.nps.edu/Savage/AircraftMiscellaneous/Zeppelin/PortJetOdometer.wrl"])]),
            Transform(scale=(0.4,0.4,0.4),translation=(-0.5,-0.5,0.1),
              children=[
              Inline(USE='PortStick')]),
            Transform(scale=(0.3,0.3,0.3),translation=(0.5,0.5,0.1),
              children=[
              Inline(url=["StarboardJetOdometer.x3d","https://savage.nps.edu/Savage/AircraftMiscellaneous/Zeppelin/StarboardJetOdometer.x3d","StarboardJetOdometer.wrl","https://savage.nps.edu/Savage/AircraftMiscellaneous/Zeppelin/StarboardJetOdometer.wrl"])]),
            Transform(scale=(0.4,0.4,0.4),translation=(0.5,-0.5,0.1),
              children=[
              Inline(DEF='StarboardStick',url=["StarboardStick.x3d","https://savage.nps.edu/Savage/AircraftMiscellaneous/Zeppelin/StarboardStick.x3d","StarboardStick.wrl","https://savage.nps.edu/Savage/AircraftMiscellaneous/Zeppelin/StarboardStick.wrl"])]),
            Transform(scale=(0.3,0.3,0.3),translation=(1.5,0.5,0.1),
              children=[
              Inline(url=["StarboardPalOdometer.x3d","https://savage.nps.edu/Savage/AircraftMiscellaneous/Zeppelin/StarboardPalOdometer.x3d","StarboardPalOdometer.wrl","https://savage.nps.edu/Savage/AircraftMiscellaneous/Zeppelin/StarboardPalOdometer.wrl"])]),
            Transform(scale=(0.4,0.4,0.4),translation=(1.5,-0.5,0.1),
              children=[
              Inline(USE='StarboardStick')])])])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for ControlPanel.py")
