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
    meta(content='AriesEspduExample.x3d',name='title'),
    meta(content='Extern prototype declaration for a DIS enabled Aries AUV for cut and paste into a VRML scene. Also includes an example instantiation.',name='description'),
    meta(content='Duane Davis',name='creator'),
    meta(content='Vrml97ToX3dNist',name='translator'),
    meta(content='24 October 2003',name='created'),
    meta(content='28 July 2012',name='modified'),
    meta(content='Distributed Interactive Simulation DIS ESPDU Aries AUV',name='subject'),
    meta(content='https://savage.nps.edu/Savage/Robots/UnmannedUnderwaterVehicles/AriesEspduExample.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    ExternProtoDeclare(appinfo='Aries unmanned underwater vehicle with IEEE DIS EspduTransform wrapper bundled together in a single prototype',name='AriesEspdu',url=["../../../Savage/Robots/UnmannedUnderwaterVehicles/AriesEspduPrototype.x3d#AriesEspdu","https://savage.nps.edu/Savage/Robots/UnmannedUnderwaterVehicles/AriesEspduPrototype.x3d#AriesEspdu","../../../Savage/Robots/UnmannedUnderwaterVehicles/AriesEspduPrototype.wrl#AriesEspdu","https://savage.nps.edu/Savage/Robots/UnmannedUnderwaterVehicles/AriesEspduPrototype.wrl#AriesEspdu"],
      field=[
      field(accessType='inputOutput',appinfo='up to 11 characters maps to EspduTransform marking',name='hullName',type='SFString'),
      field(accessType='inputOutput',appinfo='hull color for this UUV instance',name='hullColor',type='SFColor'),
      field(accessType='inputOutput',appinfo='plane color for this UUV instance',name='planeColor',type='SFColor'),
      field(accessType='inputOutput',appinfo='initial position prior to first ESPDU receipt',name='translation',type='SFVec3f'),
      field(accessType='inputOutput',appinfo='initial orientation prior to first ESPDU receipt',name='rotation',type='SFRotation'),
      field(accessType='inputOutput',name='siteID',type='SFInt32'),
      field(accessType='inputOutput',name='applicationID',type='SFInt32'),
      field(accessType='inputOutput',name='entityID',type='SFInt32'),
      field(accessType='inputOutput',appinfo='network read periodicity',name='readInterval',type='SFTime'),
      field(accessType='inputOutput',appinfo='network write periodicity',name='writeInterval',type='SFTime'),
      field(accessType='inputOutput',appinfo='Override default EspduTransform value so that listening occurs by default',name='networkMode',type='SFString'),
      field(accessType='inputOutput',appinfo='multicast address',name='address',type='SFString'),
      field(accessType='inputOutput',appinfo='multicast port',name='port',type='SFInt32'),
      field(accessType='inputOutput',appinfo='Set to 0 to activate EspduTransformTrace',name='traceNodeEnabled',type='SFInt32')]),
    Background(groundAngle=[1.57],groundColor=[(.05,.05,.15),(.05,.05,.15)],skyAngle=[.05,1.4,1.55,1.56,1.57],skyColor=[(1,1,.5),(.4,.4,.6),(.4,.4,.6),(.5,.5,.75),(.6,.6,.8),(.8,.8,.8)]),
    Group(
      children=[
      ProtoInstance(name='AriesEspdu',
        fieldValue=[
        fieldValue(name='networkMode',value='networkReader'),
        fieldValue(name='traceNodeEnabled',value=0),
        fieldValue(name='hullName',value='Aries UUV'),
        fieldValue(name='hullColor',value=(0.6,0.6,0.8)),
        fieldValue(name='planeColor',value=(.1,.1,.8)),
        fieldValue(name='address',value='239.255.5.8'),
        fieldValue(name='port',value=62040)]),
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

print ("python x3d.py load successful for AriesEspduExample.py")
