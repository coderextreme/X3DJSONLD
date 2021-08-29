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

newModel=X3D(profile='Immersive',version='3.1',
  head=head(
    children=[
    component(level=1,name='DIS'),
    meta(content='PredatorEspduExample.x3d',name='title'),
    meta(content='Extern prototype declaration for a DIS enabled Predator AUV for cut and paste into a VRML scene. Also includes an example instantiation.',name='description'),
    meta(content='Duane Davis',name='creator'),
    meta(content='Vrml97ToX3dNist',name='translator'),
    meta(content='24 October 2003',name='created'),
    meta(content='19 May 2007',name='modified'),
    meta(content='Distributed Interactive Simulation DIS ESPDU Predator AUV',name='subject'),
    meta(content='https://savage.nps.edu/Savage/Robots/UnmannedUnderwaterVehicles/AriesEspduExample.x3d',name='reference'),
    meta(content='https://savage.nps.edu/Savage/Robots/UnmannedAirVehicles/PredatorEspduExample.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    ExternProtoDeclare(name='PredatorEspdu',url=["../../../Savage/Robots/UnmannedAirVehicles/PredatorEspduPrototype.x3d#PredatorEspdu","../../../Savage/Robots/UnmannedAirVehicles/PredatorEspduPrototype.wrl#PredatorEspdu","https://savage.nps.edu/Savage/Robots/UnmannedAirVehicles/PredatorEspduPrototype.x3d#PredatorEspdu","https://savage.nps.edu/Savage/Robots/UnmannedAirVehicles/PredatorEspduPrototype.wrl#PredatorEspdu"],
      field=[
      field(accessType='inputOutput',name='marking',type='SFString'),
      field(accessType='inputOutput',name='translation',type='SFVec3f'),
      field(accessType='inputOutput',name='rotation',type='SFRotation'),
      field(accessType='inputOutput',name='siteID',type='SFInt32'),
      field(accessType='inputOutput',name='applicationID',type='SFInt32'),
      field(accessType='inputOutput',name='entityID',type='SFInt32'),
      field(accessType='inputOutput',name='readInterval',type='SFTime'),
      field(accessType='inputOutput',name='writeInterval',type='SFTime'),
      field(accessType='inputOutput',name='networkMode',type='SFString'),
      field(accessType='inputOutput',name='address',type='SFString'),
      field(accessType='inputOutput',name='port',type='SFInt32')]),
    Background(groundAngle=[1.57],groundColor=[(.05,.05,.15),(.05,.05,.15)],skyAngle=[.05,1.4,1.55,1.56,1.57],skyColor=[(1,1,.5),(.4,.4,.6),(.4,.4,.6),(.5,.5,.75),(.6,.6,.8),(.8,.8,.8)]),
    Group(
      children=[
      ProtoInstance(name='PredatorEspdu',
        fieldValue=[
        fieldValue(name='networkMode',value='networkReader'),
        fieldValue(name='marking',value='Predator UAV 0'),
        fieldValue(name='rotation',value=(0,1,0,-0.5))]),
      Transform(translation=(-20,-10,-20),
        children=[
        Shape(
          geometry=ElevationGrid(DEF='SimpleCheckboard',colorPerVertex=False,height=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],solid=False,xDimension=5,xSpacing=10,zDimension=5,zSpacing=10,
            color=Color(color=[(0,0.6,0.2),(0,0.3,0.1),(0,0.6,0.2),(0,0.3,0.1),(0,0.3,0.1),(0,0.6,0.2),(0,0.3,0.1),(0,0.6,0.2),(0,0.6,0.2),(0,0.3,0.1),(0,0.6,0.2),(0,0.3,0.1),(0,0.3,0.1),(0,0.6,0.2),(0,0.3,0.1),(0,0.6,0.2)])),
          appearance=Appearance(
            material=Material(diffuseColor=(0,0,0),transparency=0.25)))])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for PredatorEspduExample.py")
