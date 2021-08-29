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
    meta(content='PredatorExample.x3d',name='title'),
    meta(content='Example showing NPS Predator Autonomous Underwater Vehicle (AUV) prototype.',name='description'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='30 July 2000',name='created'),
    meta(content='21 February 2010',name='modified'),
    meta(content='https://savage.nps.edu/Savage/Robots/UnmannedAirVehicles/PredatorExample.x3d',name='identifier'),
    meta(content='X3D-Edit, http://www.web3d.org/x3d/content/README.X3D-Edit.html',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    ExternProtoDeclare(appinfo='Predator unmanned air vehicle (UAV)',name='Predator',url=["PredatorPrototype.x3d#Predator","../../Robots/UnmannedAirVehicles/PredatorPrototype.x3d#Predator","https://savage.nps.edu/Savage/Robots/UnmannedAirVehicles/PredatorPrototype.x3d#Predator","PredatorPrototype.wrl#Predator","../../Robots/UnmannedAirVehicles/PredatorPrototype.wrl#Predator","https://savage.nps.edu/Savage/Robots/UnmannedAirVehicles/PredatorPrototype.wrl#Predator"],
      field=[
      field(accessType='inputOutput',appinfo='default value 0 0 0',name='translation',type='SFVec3f'),
      field(accessType='inputOutput',appinfo='default value 0 0 1 0',name='rotation',type='SFRotation')]),
    Group(
      children=[
      Background(groundAngle=[1.57],groundColor=[(.05,.05,.15),(.05,.05,.15)],skyAngle=[.05,1.4,1.55,1.56,1.57],skyColor=[(1,1,.5),(.4,.4,.6),(.4,.4,.6),(.5,.5,.75),(.6,.6,.8),(.8,.8,.8)]),
      Transform(
        children=[
        ProtoInstance(name='Predator',
          fieldValue=[
          fieldValue(name='rotation',value=(0,1,0,-0.5))])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for PredatorExample.py")
