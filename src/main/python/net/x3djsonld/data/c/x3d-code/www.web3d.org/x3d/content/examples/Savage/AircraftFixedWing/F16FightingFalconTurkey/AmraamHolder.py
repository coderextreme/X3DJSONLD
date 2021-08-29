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
    meta(content='AmraamHolder.x3d',name='title'),
    meta(content='F16, Fighting Falcon, Turkish Air Force (TUAF) AIM120 AMRAAM missile holder',name='description'),
    meta(content='Murat ONDER, LTJG, Turkish Navy',name='creator'),
    meta(content='13 July 2003',name='created'),
    meta(content='22 October 2018',name='modified'),
    meta(content='https://savage.nps.edu/Savage/AircraftFixedWing/F16FightingFalconTurkey/AmraamHolder.x3d',name='identifier'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Transform(scale=(1,.9,1.5),translation=(0,-0.75,1),
      children=[
      Shape(
        geometry=Extrusion(creaseAngle=1.00,crossSection=[(.5,0),(.45,.5),(.40,.6),(.35,.7),(.3,.72),(0,.75),(-.3,.72),(-.35,.7),(-.40,.6),(-.45,.5),(-.5,0),(-.45,-.5),(-.40,-.6),(-.35,-.7),(-.3,-.72),(0,-.75),(.3,-.72),(.35,-.7),(.40,-.6),(.45,-.5),(.5,0)],scale=[(.5,.5),(.5,.5),(.5,.5),(.5,.5)],solid=False,spine=[(0,0,0),(0,0,-1),(0,0,-2),(0,0,-3.5)]),
        appearance=Appearance(
          material=Material(diffuseColor=(.5,.5,.5),shininess=.5)))]),
    Transform(translation=(0,-.2,-2),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(.25,.25,.25),shininess=.5)),
        geometry=Box(size=(.1,.75,1.5)))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for AmraamHolder.py")
