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
    meta(content='PredatorEspduPrototype.x3d',name='title'),
    meta(content='Prototype for a DIS enabled Predator UAV for inclusion in a VRML Scene.',name='description'),
    meta(content='Duane Davis',name='creator'),
    meta(content='Vrml97ToX3dNist',name='translator'),
    meta(content='27 August 2004',name='created'),
    meta(content='8 April 2012',name='modified'),
    meta(content='../UnmannedUnderwaterVehicles/AriesEspduPrototype.x3d',name='reference'),
    meta(content='Distributed Interactive Simulation DIS ESPDU Predator UAV',name='subject'),
    meta(content='https://savage.nps.edu/Savage/Robots/UnmannedAirVehicles/PredatorEspduPrototype.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    ExternProtoDeclare(appinfo='Predator unmanned air vehicle (UAV)',name='Predator',url=["../../../Savage/Robots/UnmannedAirVehicles/PredatorPrototype.x3d#Predator","https://savage.nps.edu/Savage/Robots/UnmannedAirVehicles/PredatorPrototype.x3d#Predator","../../../Savage/Robots/UnmannedAirVehicles/PredatorPrototype.wrl#Predator","https://savage.nps.edu/Savage/Robots/UnmannedAirVehicles/PredatorPrototype.wrl#Predator"],
      field=[
      field(accessType='inputOutput',appinfo='default value 0 0 0',name='translation',type='SFVec3f'),
      field(accessType='inputOutput',appinfo='default value 0 0 1 0',name='rotation',type='SFRotation')]),
    ProtoDeclare(appinfo='Predator unmanned air vehicle (UAV) with DIS ESPDU network connections',name='PredatorEspdu',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOutput',appinfo='default value PredatorUAV',name='marking',type='SFString',value='PredatorUAV'),
        field(accessType='inputOutput',appinfo='default value 0',name='siteID',type='SFInt32',value=0),
        field(accessType='inputOutput',appinfo='default value 1',name='applicationID',type='SFInt32',value=1),
        field(accessType='inputOutput',appinfo='default value 30',name='entityID',type='SFInt32',value=30),
        field(accessType='inputOutput',appinfo='default value 0.1',name='readInterval',type='SFTime',value=0.1),
        field(accessType='inputOutput',appinfo='default value 1.0',name='writeInterval',type='SFTime',value=1.0),
        field(accessType='inputOutput',appinfo='Override default EspduTransform value so that listening occurs by default',name='networkMode',type='SFString',value='networkReader'),
        field(accessType='inputOutput',appinfo='default value 224.2.181.145',name='address',type='SFString',value='224.2.181.145'),
        field(accessType='inputOutput',appinfo='default value 62040',name='port',type='SFInt32',value=62040),
        field(accessType='inputOutput',appinfo='default value 0 0 0',name='translation',type='SFVec3f',value=(0,0,0)),
        field(accessType='inputOutput',appinfo='default value 0 0 1 0',name='rotation',type='SFRotation',value=(0,0,1,0))]),
      ProtoBody=ProtoBody(
        #  ============================= 
        children=[
        Group(
          children=[
          EspduTransform(DEF='ET',
            IS=IS(
              connect=[
              connect(nodeField='marking',protoField='marking'),
              connect(nodeField='siteID',protoField='siteID'),
              connect(nodeField='applicationID',protoField='applicationID'),
              connect(nodeField='entityID',protoField='entityID'),
              connect(nodeField='readInterval',protoField='readInterval'),
              connect(nodeField='writeInterval',protoField='writeInterval'),
              connect(nodeField='networkMode',protoField='networkMode'),
              connect(nodeField='address',protoField='address'),
              connect(nodeField='port',protoField='port'),
              connect(nodeField='translation',protoField='translation'),
              connect(nodeField='rotation',protoField='rotation')]),
            #  applet 0 1 2, auv dynamics 36 1 1 
            children=[
            ProtoInstance(name='Predator')])])])),
    Viewpoint(description='Predator Espdu Prototype'),
    Group(
      children=[
      ProtoInstance(name='PredatorEspdu',
        fieldValue=[
        fieldValue(name='networkMode',value='networkReader'),
        fieldValue(name='translation',value=(0,0.4,0))])]),
    Anchor(description='PredatorEspduPrototype',parameter=["target=_blank"],url=["PredatorEspduExample.x3d","https://savage.nps.edu/Savage/Robots/UnmannedUnderwaterVehicles/PredatorEspduExample.x3d","PredatorEspduExample.wrl","https://savage.nps.edu/Savage/Robots/UnmannedUnderwaterVehicles/PredatorEspduExample.wrl"],
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0,1,1),emissiveColor=(0,1,1))),
        geometry=Text(string=["PredatorEspduPrototype","is a prototype definition file","","To see an example scene","click on any text and view","PredatorEspduExample"],
          fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"])))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for PredatorEspduPrototype.py")
