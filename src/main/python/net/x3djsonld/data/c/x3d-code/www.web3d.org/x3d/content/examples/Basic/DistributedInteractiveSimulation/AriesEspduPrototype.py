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
    component(level=1,name='DIS'),
    meta(content='AriesEspduPrototype.x3d',name='title'),
    meta(content='Prototype for a DIS enabled (including articulated parameters) for inclusion in a VRML Scene. Articulation parameters are in AUV Dynamics (AUV Workbench) order.',name='description'),
    meta(content='Duane Davis',name='creator'),
    meta(content='Vrml97ToX3dNist',name='translator'),
    meta(content='15 November 2003',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Distributed Interactive Simulation DIS ESPDU Aries AUV',name='subject'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/AriesEspduPrototype.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='AriesEspduPrototype.x3d'),
    ExternProtoDeclare(appinfo='Acoustic Radio Interactive Exploratory Server (ARIES) is an operational NPS-designed Unmanned Underwater Vehicle (AUV)',name='Aries',url=["../../Savage/Robots/UnmannedUnderwaterVehicles/AriesPrototype.x3d#Aries","https://savage.nps.edu/Savage/Robots/UnmannedUnderwaterVehicles/AriesPrototype.x3d#Aries","../../Savage/Robots/UnmannedUnderwaterVehicles/AriesPrototype.wrl#Aries","https://savage.nps.edu/Savage/Robots/UnmannedUnderwaterVehicles/AriesPrototype.wrl#Aries"],
      field=[
      field(accessType='inputOutput',name='translation',type='SFVec3f'),
      field(accessType='inputOutput',name='rotation',type='SFRotation'),
      field(accessType='inputOnly',name='portRpm',type='SFFloat'),
      field(accessType='inputOnly',name='stbdRpm',type='SFFloat'),
      field(accessType='inputOnly',name='forwardRudders',type='SFFloat'),
      field(accessType='inputOnly',name='afterRudders',type='SFFloat'),
      field(accessType='inputOnly',name='forwardPlanes',type='SFFloat'),
      field(accessType='inputOnly',name='afterPlanes',type='SFFloat'),
      field(accessType='inputOnly',name='forwardVerticalThruster',type='SFFloat'),
      field(accessType='inputOnly',name='afterVerticalThruster',type='SFFloat'),
      field(accessType='inputOnly',name='forwardLateralThruster',type='SFFloat'),
      field(accessType='inputOnly',name='afterLateralThruster',type='SFFloat'),
      field(accessType='inputOnly',name='ST725Range',type='SFFloat'),
      field(accessType='inputOnly',name='ST1000Range',type='SFFloat'),
      field(accessType='inputOnly',name='ST725Bearing',type='SFFloat'),
      field(accessType='inputOnly',name='ST1000Bearing',type='SFFloat'),
      field(accessType='inputOnly',name='ST725Intensity',type='SFFloat'),
      field(accessType='inputOnly',name='ST1000Intensity',type='SFFloat'),
      field(accessType='inputOutput',appinfo='hull color for this UUV instance',name='hullColor',type='SFColor'),
      field(accessType='inputOutput',appinfo='can be overridden at instantiation time only',name='hullName',type='SFString'),
      field(accessType='inputOnly',appinfo='signal-to-noise ratio decibels',name='set_ST725Intensity',type='SFFloat'),
      field(accessType='inputOnly',name='set_forwardLateralThruster',type='SFFloat'),
      field(accessType='inputOnly',appinfo='degrees about vertical axis',name='set_ST1000Bearing',type='SFFloat'),
      field(accessType='inputOnly',name='set_forwardVerticalThruster',type='SFFloat'),
      field(accessType='inputOnly',name='set_afterVerticalThruster',type='SFFloat'),
      field(accessType='inputOnly',name='set_afterRudders',type='SFFloat'),
      field(accessType='inputOnly',appinfo='signal-to-noise ratio decibels',name='set_ST1000Intensity',type='SFFloat'),
      field(accessType='inputOnly',name='set_forwardPlanes',type='SFFloat'),
      field(accessType='inputOnly',appinfo='meters along sonar axis',name='set_ST725Range',type='SFFloat'),
      field(accessType='inputOnly',appinfo='degrees about vertical axis',name='set_ST725Bearing',type='SFFloat'),
      field(accessType='inputOnly',name='set_afterLateralThruster',type='SFFloat'),
      field(accessType='inputOnly',appinfo='meters along sonar axis',name='set_ST1000Range',type='SFFloat'),
      field(accessType='inputOnly',name='set_stbdRpm',type='SFFloat'),
      field(accessType='inputOnly',name='set_forwardRudders',type='SFFloat'),
      field(accessType='inputOnly',name='set_portRpm',type='SFFloat'),
      field(accessType='inputOutput',appinfo='plane color for this UUV instance',name='planeColor',type='SFColor'),
      field(accessType='inputOnly',name='set_afterPlanes',type='SFFloat')]),
    ProtoDeclare(name='AriesEspdu',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOutput',name='marking',type='SFString',value='AriesAUV'),
        field(accessType='inputOutput',name='siteID',type='SFInt32',value=0),
        field(accessType='inputOutput',name='applicationID',type='SFInt32',value=1),
        field(accessType='inputOutput',name='entityID',type='SFInt32',value=2),
        field(accessType='inputOutput',name='readInterval',type='SFTime',value=0.1),
        field(accessType='inputOutput',name='writeInterval',type='SFTime',value=1.0),
        field(accessType='inputOutput',name='networkMode',type='SFString',value='standAlone'),
        field(accessType='inputOutput',name='address',type='SFString',value='224.2.181.145'),
        field(accessType='inputOutput',name='port',type='SFInt32',value=62040),
        field(accessType='inputOutput',name='translation',type='SFVec3f',value=(0,0,0)),
        field(accessType='inputOutput',name='rotation',type='SFRotation',value=(0,0,1,0))]),
      ProtoBody=ProtoBody(
        #  ============================= 
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
          Switch(whichChoice=0,
            children=[
            ProtoInstance(DEF='AriesAUV',name='Aries',
              fieldValue=[
              fieldValue(name='hullColor',value=(.9,.9,.9)),
              fieldValue(name='hullName',value='Aries AUV')])]),
          Group(
            children=[
            Script(DEF='ArticulationParameterControl',
              field=[
              field(accessType='inputOnly',name='set_articulationParameters',type='MFFloat'),
              field(accessType='outputOnly',name='portRpm',type='SFFloat'),
              field(accessType='outputOnly',name='stbdRpm',type='SFFloat'),
              field(accessType='outputOnly',name='forwardVerticalThruster',type='SFFloat'),
              field(accessType='outputOnly',name='afterVerticalThruster',type='SFFloat'),
              field(accessType='outputOnly',name='forwardLateralThruster',type='SFFloat'),
              field(accessType='outputOnly',name='afterLateralThruster',type='SFFloat'),
              field(accessType='outputOnly',name='forwardRudders',type='SFFloat'),
              field(accessType='outputOnly',name='afterRudders',type='SFFloat'),
              field(accessType='outputOnly',name='forwardPlanes',type='SFFloat'),
              field(accessType='outputOnly',name='afterPlanes',type='SFFloat'),
              field(accessType='outputOnly',name='ST725Range',type='SFFloat'),
              field(accessType='outputOnly',name='ST725Bearing',type='SFFloat'),
              field(accessType='outputOnly',name='ST1000Range',type='SFFloat'),
              field(accessType='outputOnly',name='ST1000Bearing',type='SFFloat')]),
            ROUTE(fromField='articulationParameterArray',fromNode='ET',toField='set_articulationParameters',toNode='ArticulationParameterControl'),
            ROUTE(fromField='portRpm',fromNode='ArticulationParameterControl',toField='portRpm',toNode='AriesAUV'),
            ROUTE(fromField='stbdRpm',fromNode='ArticulationParameterControl',toField='stbdRpm',toNode='AriesAUV'),
            ROUTE(fromField='forwardVerticalThruster',fromNode='ArticulationParameterControl',toField='forwardVerticalThruster',toNode='AriesAUV'),
            ROUTE(fromField='afterVerticalThruster',fromNode='ArticulationParameterControl',toField='afterVerticalThruster',toNode='AriesAUV'),
            ROUTE(fromField='forwardLateralThruster',fromNode='ArticulationParameterControl',toField='forwardLateralThruster',toNode='AriesAUV'),
            ROUTE(fromField='afterLateralThruster',fromNode='ArticulationParameterControl',toField='afterLateralThruster',toNode='AriesAUV'),
            ROUTE(fromField='forwardRudders',fromNode='ArticulationParameterControl',toField='forwardRudders',toNode='AriesAUV'),
            ROUTE(fromField='afterRudders',fromNode='ArticulationParameterControl',toField='afterRudders',toNode='AriesAUV'),
            ROUTE(fromField='forwardPlanes',fromNode='ArticulationParameterControl',toField='forwardPlanes',toNode='AriesAUV'),
            ROUTE(fromField='afterPlanes',fromNode='ArticulationParameterControl',toField='afterPlanes',toNode='AriesAUV'),
            ROUTE(fromField='ST725Range',fromNode='ArticulationParameterControl',toField='ST725Range',toNode='AriesAUV'),
            ROUTE(fromField='ST725Bearing',fromNode='ArticulationParameterControl',toField='ST725Bearing',toNode='AriesAUV'),
            ROUTE(fromField='ST1000Range',fromNode='ArticulationParameterControl',toField='ST1000Range',toNode='AriesAUV'),
            ROUTE(fromField='ST1000Bearing',fromNode='ArticulationParameterControl',toField='ST1000Bearing',toNode='AriesAUV')])])])),
    Group(
      children=[
      ProtoInstance(name='AriesEspdu',
        fieldValue=[
        fieldValue(name='networkMode',value='networkReader')])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for AriesEspduPrototype.py")
