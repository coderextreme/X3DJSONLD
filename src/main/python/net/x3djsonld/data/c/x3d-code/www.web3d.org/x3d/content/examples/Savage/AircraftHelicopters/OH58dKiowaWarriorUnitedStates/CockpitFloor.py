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
    meta(content='CockpitFloor.x3d',name='title'),
    meta(content='This file defines the cockpit floor of an OH58D helicopter.',name='description'),
    meta(content='Del Beilstein',name='creator'),
    meta(content='21 September 2001',name='created'),
    meta(content='26 November 2004',name='modified'),
    meta(content='https://savage.nps.edu/Savage/AircraftHelicopters/OH58dKiowaWarriorUnitedStates/CockpitFloor.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Transform(rotation=(1,0,0,-1.57),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0,.2,.05))),
        geometry=Extrusion(convex=False,creaseAngle=1.3,crossSection=[(0.625,1.3),(0.700,1.2),(0.775,1.0),(-0.775,1.0),(-0.700,1.2),(-0.625,1.3),(0.625,1.3)],scale=[(.77,1),(.8,1),(.8,1),(.9,1),(1,1)],solid=False,spine=[(0,0,0),(0,0.15,0),(0,0.5,0),(0,0.75,0),(0,1,0)])),
      Transform(rotation=(0,0,1,3.1415),translation=(0,0.8,0),
        children=[
        Transform(rotation=(1,0,0,-1.57),scale=(.25,.25,.25),translation=(0.4,-0.15,0.95),
          children=[
          Inline(DEF='CockpitSeats',url=["CockpitSeats.wrl","https://savage.nps.edu/Savage/AircraftHelicopters/OH58dKiowaWarriorUnitedStates/CockpitSeats.wrl","CockpitSeats.x3d","https://savage.nps.edu/Savage/AircraftHelicopters/OH58dKiowaWarriorUnitedStates/CockpitSeats.x3d"])]),
        Transform(rotation=(1,0,0,-1.57),scale=(.25,.25,.25),translation=(-0.4,-0.15,0.95),
          children=[
          Inline(USE='CockpitSeats')])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for CockpitFloor.py")
