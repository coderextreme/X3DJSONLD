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
    meta(content='SidewinderHolder.x3d',name='title'),
    meta(content='F16, Fighting Falcon, Turkish Air Force (TUAF) AIM9 Sidewinder missile holder',name='description'),
    meta(content='Murat ONDER, LTJG, Turkish Navy',name='creator'),
    meta(content='13 July 2003',name='created'),
    meta(content='22 October 2018',name='modified'),
    meta(content='https://savage.nps.edu/Savage/AircraftFixedWing/F16FightingFalconTurkey/SidewinderHolder.x3d',name='identifier'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Transform(
      children=[
      Shape(
        geometry=Extrusion(creaseAngle=1.57,crossSection=[(1,-.25),(1,0),(.85,.25),(.5,.75),(-.75,.75),(-1,0),(-1,-.25),(1,-.25)],scale=[(.5,.4),(.5,.5),(.5,.4)],solid=False,spine=[(0,0,0),(0,0,-.1),(0,0,-.2)]),
        appearance=Appearance(
          material=Material(diffuseColor=(.5,.5,.5),shininess=.5)))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for SidewinderHolder.py")
