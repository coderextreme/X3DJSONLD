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

newModel=X3D(profile='Interactive',version='3.0',
  head=head(
    children=[
    meta(content='SurfaceTransponderBuoy.x3d',name='title'),
    meta(content='Surface Transponder Buoy for the WHOI REMUS AUV',name='description'),
    meta(content='Jeffrey Weekley',name='creator'),
    meta(content='31 October 2001',name='created'),
    meta(content='31 January 2010',name='modified'),
    meta(content='Surfface Transponder Buoy for the WHOI REMUS AUV',name='subject'),
    meta(content='https://savage.nps.edu/Savage/Robots/UnmannedUnderwaterVehicles/SurfaceTransponderBuoy.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Background(skyColor=[(0.85,0.8,0.9)]),
    Group(
      children=[
      Transform(
        children=[
        Transform(DEF='Float',
          children=[
          Shape(
            geometry=Cylinder(height=0.25,radius=0.45),
            appearance=Appearance(
              material=Material(diffuseColor=(1,1,0))))]),
        Transform(translation=(0,-0.25,0),
          children=[
          Shape(
            geometry=Cylinder(height=0.5,radius=0.2),
            appearance=Appearance(DEF='ShinyBlack',
              material=Material(diffuseColor=(0.15,0.2,0.225),shininess=0.33,specularColor=(0.25,0.3,0.325))))]),
        Transform(DEF='TopRing',translation=(0,0.1,0),
          children=[
          Shape(
            geometry=Cylinder(height=0.125,radius=0.35),
            appearance=Appearance(USE='ShinyBlack'))]),
        Transform(scale=(0.75,0.75,0.75),translation=(0,0.125,0),
          children=[
          Inline(url=["../../AmphibiousVehicles/AAV/RearAntenna.x3d","https://savage.nps.edu/Savage/AmphibiousVehicles/AAV/RearAntenna.x3d","../../AmphibiousVehicles/AAV/RearAntenna.wrl","https://savage.nps.edu/Savage/AmphibiousVehicles/AAV/RearAntenna.wrl"])])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for SurfaceTransponderBuoy.py")
