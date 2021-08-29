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
    meta(content='Cockpit.x3d',name='title'),
    meta(content='This file defines a cockpit that is inlined to create the fuselage for a helicopter. LOD for cockpit console set at 2 meters.',name='description'),
    meta(content='Jane Wu (adapted from the original cockpitbottom.wrl created for vrtp demo helicopter)',name='creator'),
    meta(content='8 January 2001',name='created'),
    meta(content='12 January 2014',name='modified'),
    meta(content='https://savage.nps.edu/Savage/AircraftHelicopters/HelicopterUnitedStates/Cockpit.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Group(DEF='COCKPIT',
      children=[
      Transform(rotation=(0.0,1.0,0.0,3.142),translation=(0.0,2.0,0.0),
        children=[
        Shape(
          appearance=Appearance(DEF='DARK_GREEN',
            material=Material(diffuseColor=(0.0,0.4,0.2))),
          geometry=Extrusion(beginCap=False,convex=False,creaseAngle=1.5,crossSection=[(-0.775,1.0),(-0.700,1.2),(-0.625,1.3),(0.625,1.3),(0.700,1.2),(0.775,1.0)],endCap=False,solid=False,spine=[(0.0,0.0,0.0),(0.0,1.1,0.0)]))]),
      Transform(translation=(0.0,2.5,-1.0),
        children=[
        Shape(
          appearance=Appearance(DEF='OLIVE',
            material=Material(diffuseColor=(0.5,0.5,0.0))),
          geometry=Box(size=(1.25,0.61,0.45)))]),
      Transform(translation=(0.0,2.15,-0.7),
        children=[
        Shape(
          appearance=Appearance(USE='OLIVE'),
          geometry=Box(size=(1.25,0.1,1.1)))]),
      Transform(translation=(0.0,2.9,-1.0),
        children=[
        Shape(
          appearance=Appearance(USE='OLIVE'),
          geometry=Box(size=(0.25,0.5,0.5)))]),
      Transform(rotation=(1.0,0.0,0.0,1.57),translation=(0.0,3.0,-0.85),
        children=[
        LOD(range=[2.0],
          children=[
          Inline(url=["CockpitConsole.x3d","https://savage.nps.edu/Savage/AircraftHelicopters/HelicopterUnitedStates/CockpitConsole.x3d","CockpitConsole.wrl","https://savage.nps.edu/Savage/AircraftHelicopters/HelicopterUnitedStates/CockpitConsole.wrl"]),
          Group(
            children=[
            Inline(url=["ConsoleBoard.x3d","https://savage.nps.edu/Savage/AircraftHelicopters/HelicopterUnitedStates/ConsoleBoard.x3d","ConsoleBoard.wrl","https://savage.nps.edu/Savage/AircraftHelicopters/HelicopterUnitedStates/ConsoleBoard.wrl"])])])]),
      Transform(translation=(0.0,3.00,-0.80),
        children=[
        Inline(url=["Nose.x3d","https://savage.nps.edu/Savage/AircraftHelicopters/HelicopterUnitedStates/Nose.x3d","Nose.wrl","https://savage.nps.edu/Savage/AircraftHelicopters/HelicopterUnitedStates/Nose.wrl"])]),
      Transform(rotation=(1.0,0.0,0.0,1.57),translation=(0.0,3.0,-1.3),
        children=[
        Transform(rotation=(0.0,1.0,0.0,1.57),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(diffuseColor=(0.0,0.4,0.3))),
            geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,-1,9,8,7,6,5,-1],
              coord=Coordinate(point=[(0.0,0.0,0.0),(0.0,-0.06,0.0),(0.35,-0.25,0.0),(0.1,-0.05,0.0),(0.1,0.0,0.0),(0.0,0.0,-0.03),(0.0,-0.06,-0.03),(0.35,-0.25,-0.03),(0.1,-0.05,-0.03),(0.1,0.0,-0.03)])))])]),
      Transform(scale=(0.95,1.0,1.0),translation=(-0.02,2.10,-1.30),
        children=[
        Inline(url=["CockpitTop.x3d","https://savage.nps.edu/Savage/AircraftHelicopters/HelicopterUnitedStates/CockpitTop.x3d","CockpitTop.wrl","https://savage.nps.edu/Savage/AircraftHelicopters/HelicopterUnitedStates/CockpitTop.wrl"])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Cockpit.py")
