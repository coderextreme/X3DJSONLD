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
    meta(content='FuelTank.x3d',name='title'),
    meta(content='F16, Fighting Falcon, Turkish Air Force (TUAF) Fuel Tank',name='description'),
    meta(content='Murat ONDER, LTJG, Turkish Navy',name='creator'),
    meta(content='13 July 2003',name='created'),
    meta(content='22 October 2018',name='modified'),
    meta(content='https://savage.nps.edu/Savage/AircraftFixedWing/F16FightingFalconTurkey/FuelTank.x3d',name='identifier'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    #  Fuel Tank 
    children=[
    Transform(scale=(1,2.5,1),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(.75,.75,.75))),
        geometry=Extrusion(creaseAngle=0.785,crossSection=[(1.00,0.00),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0.00,-1.00),(-0.38,-0.92),(-0.71,-0.71),(-0.92,-0.38),(-1.00,-0.00),(-0.92,0.38),(-0.71,0.71),(-0.38,0.92),(0.00,1.00),(0.38,0.92),(0.71,0.71),(0.92,0.38),(1.00,0.00)],scale=[(.45,.45),(.50,.50),(.60,.60),(.70,.70),(.8,.8),(.9,.9),(.93,.93),(.95,.95),(.97,.97),(.97,.97),(.90,.90),(.85,.85),(.75,.75),(.65,.65),(.5,.5),(.37,.37),(.3,.3),(.2,.2),(.1,.1),(.001,.001)],spine=[(0,-2,0),(0,-1.75,0),(0,-1.5,0),(0,-1.25,0),(0,-1,0),(0,-0.75,0),(0,-.5,0),(0,-.25,0),(0,0,0),(0,.25,0),(0,.5,0),(0,.75,0),(0,1,0),(0,1.25,0),(0,1.5,0),(0,1.65,0),(0,1.75,0),(0,1.85,0),(0,1.95,0),(0,2,0)]))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for FuelTank.py")
