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
    meta(content='AriesEspduPrototype.x3d',name='title'),
    meta(content='Prototype for a DIS enabled (including articulated parameters) for inclusion in a VRML/X3D Scene. Articulation parameters are in AUV Dynamics (AUV Workbench) order.',name='description'),
    meta(content='Duane Davis',name='creator'),
    meta(content='Vrml97ToX3dNist',name='translator'),
    meta(content='21 November 2003',name='created'),
    meta(content='14 January 2014',name='modified'),
    meta(content='UuvBoxTest.xml',name='reference'),
    meta(content='UuvBoxTest.disbin',name='reference'),
    meta(content='UuvBoxTest.disbin.disbinidx',name='reference'),
    meta(content='EspduTransformTrace needs revision',name='errors'),
    meta(content='Distributed Interactive Simulation DIS ESPDU Aries AUV',name='subject'),
    meta(content='https://savage.nps.edu/Savage/Robots/UnmannedUnderwaterVehicles/AriesEspduPrototype.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    ExternProtoDeclare(appinfo='Acoustic Radio Interactive Exploratory Server (ARIES) is an operational NPS-designed Unmanned Underwater Vehicle (AUV)',name='Aries',url=["../../../Savage/Robots/UnmannedUnderwaterVehicles/AriesPrototype.x3d#Aries","https://savage.nps.edu/Savage/Robots/UnmannedUnderwaterVehicles/AriesPrototype.x3d#Aries","../../../Savage/Robots/UnmannedUnderwaterVehicles/AriesPrototype.wrl#Aries","https://savage.nps.edu/Savage/Robots/UnmannedUnderwaterVehicles/AriesPrototype.wrl#Aries"],
      field=[
      field(accessType='inputOutput',appinfo='can be overridden at instantiation time only',name='hullName',type='SFString'),
      field(accessType='inputOutput',name='hullColor',type='SFColor'),
      field(accessType='inputOutput',name='planeColor',type='SFColor'),
      field(accessType='inputOutput',name='translation',type='SFVec3f'),
      field(accessType='inputOutput',name='rotation',type='SFRotation'),
      field(accessType='inputOnly',name='set_portRpm',type='SFFloat'),
      field(accessType='inputOnly',name='set_stbdRpm',type='SFFloat'),
      field(accessType='inputOnly',name='set_forwardRudders',type='SFFloat'),
      field(accessType='inputOnly',name='set_afterRudders',type='SFFloat'),
      field(accessType='inputOnly',name='set_forwardPlanes',type='SFFloat'),
      field(accessType='inputOnly',name='set_afterPlanes',type='SFFloat'),
      field(accessType='inputOnly',name='set_forwardVerticalThruster',type='SFFloat'),
      field(accessType='inputOnly',name='set_afterVerticalThruster',type='SFFloat'),
      field(accessType='inputOnly',name='set_forwardLateralThruster',type='SFFloat'),
      field(accessType='inputOnly',name='set_afterLateralThruster',type='SFFloat'),
      field(accessType='inputOnly',appinfo='meters along sonar axis',name='set_ST725Range',type='SFFloat'),
      field(accessType='inputOnly',appinfo='meters along sonar axis',name='set_ST1000Range',type='SFFloat'),
      field(accessType='inputOnly',appinfo='degrees about vertical axis',name='set_ST725Bearing',type='SFFloat'),
      field(accessType='inputOnly',appinfo='degrees about vertical axis',name='set_ST1000Bearing',type='SFFloat'),
      field(accessType='inputOnly',appinfo='signal-to-noise ratio decibels',name='set_ST725Intensity',type='SFFloat'),
      field(accessType='inputOnly',appinfo='signal-to-noise ratio decibels',name='set_ST1000Intensity',type='SFFloat')]),
    ProtoDeclare(appinfo='Aries unmanned underwater vehicle with IEEE DIS EspduTransform wrapper bundled together in a single prototype',name='AriesEspdu',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOutput',appinfo='up to 11 characters maps to EspduTransform marking',name='hullName',type='SFString',value='AriesAUV'),
        field(accessType='inputOutput',appinfo='hull color for this UUV instance',name='hullColor',type='SFColor',value=(.9,.9,.9)),
        field(accessType='inputOutput',appinfo='plane color for this UUV instance',name='planeColor',type='SFColor',value=(.1,.1,.8)),
        field(accessType='inputOutput',appinfo='initial position prior to first ESPDU receipt',name='translation',type='SFVec3f',value=(0,0,0)),
        field(accessType='inputOutput',appinfo='initial orientation prior to first ESPDU receipt',name='rotation',type='SFRotation',value=(0,0,1,0)),
        field(accessType='inputOutput',name='siteID',type='SFInt32',value=0),
        field(accessType='inputOutput',name='applicationID',type='SFInt32',value=1),
        field(accessType='inputOutput',name='entityID',type='SFInt32',value=2),
        field(accessType='inputOutput',appinfo='network read periodicity',name='readInterval',type='SFTime',value=0.1),
        field(accessType='inputOutput',appinfo='network write periodicity',name='writeInterval',type='SFTime',value=1.0),
        field(accessType='inputOutput',appinfo='Override default EspduTransform value so that listening occurs by default',name='networkMode',type='SFString',value='networkReader'),
        field(accessType='inputOutput',appinfo='multicast address',name='address',type='SFString',value='239.255.5.8'),
        field(accessType='inputOutput',appinfo='multicast port',name='port',type='SFInt32',value=62040),
        field(accessType='inputOutput',appinfo='Set to 0 to activate EspduTransformTrace',name='traceNodeEnabled',type='SFInt32',value=-1)]),
      ProtoBody=ProtoBody(
        #  ============================= 
        children=[
        Group(
          children=[
          EspduTransform(DEF='ET',
            IS=IS(
              connect=[
              connect(nodeField='marking',protoField='hullName'),
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
                IS=IS(
                  connect=[
                  connect(nodeField='hullName',protoField='hullName'),
                  connect(nodeField='hullColor',protoField='hullColor'),
                  connect(nodeField='planeColor',protoField='planeColor')]))]),
            Group(DEF='ArticulationParameterScriptRoutes',
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
              ROUTE(fromField='portRpm',fromNode='ArticulationParameterControl',toField='set_portRpm',toNode='AriesAUV'),
              ROUTE(fromField='stbdRpm',fromNode='ArticulationParameterControl',toField='set_stbdRpm',toNode='AriesAUV'),
              ROUTE(fromField='forwardVerticalThruster',fromNode='ArticulationParameterControl',toField='set_forwardVerticalThruster',toNode='AriesAUV'),
              ROUTE(fromField='afterVerticalThruster',fromNode='ArticulationParameterControl',toField='set_afterVerticalThruster',toNode='AriesAUV'),
              ROUTE(fromField='forwardLateralThruster',fromNode='ArticulationParameterControl',toField='set_forwardLateralThruster',toNode='AriesAUV'),
              ROUTE(fromField='afterLateralThruster',fromNode='ArticulationParameterControl',toField='set_afterLateralThruster',toNode='AriesAUV'),
              ROUTE(fromField='forwardRudders',fromNode='ArticulationParameterControl',toField='set_forwardRudders',toNode='AriesAUV'),
              ROUTE(fromField='afterRudders',fromNode='ArticulationParameterControl',toField='set_afterRudders',toNode='AriesAUV'),
              ROUTE(fromField='forwardPlanes',fromNode='ArticulationParameterControl',toField='set_forwardPlanes',toNode='AriesAUV'),
              ROUTE(fromField='afterPlanes',fromNode='ArticulationParameterControl',toField='set_afterPlanes',toNode='AriesAUV'),
              ROUTE(fromField='ST725Range',fromNode='ArticulationParameterControl',toField='set_ST725Range',toNode='AriesAUV'),
              ROUTE(fromField='ST725Bearing',fromNode='ArticulationParameterControl',toField='set_ST725Bearing',toNode='AriesAUV'),
              ROUTE(fromField='ST1000Range',fromNode='ArticulationParameterControl',toField='set_ST1000Range',toNode='AriesAUV'),
              ROUTE(fromField='ST1000Bearing',fromNode='ArticulationParameterControl',toField='set_ST1000Bearing',toNode='AriesAUV')])]),
          Switch(DEF='HideTraceText',whichChoice=-1,
            IS=IS(
              connect=[
              connect(nodeField='whichChoice',protoField='traceNodeEnabled')]),
            children=[
            Transform(DEF='TRACETRANSFORM',
              children=[
              ROUTE(fromField='translation',fromNode='ET',toField='set_translation',toNode='TRACETRANSFORM'),
              ROUTE(fromField='rotation',fromNode='ET',toField='set_rotation',toNode='TRACETRANSFORM')])])])])),
    #  ============================== 
    Viewpoint(description='AriesEspdu Prototype'),
    Group(
      children=[
      ProtoInstance(name='AriesEspdu',
        fieldValue=[
        fieldValue(name='networkMode',value='networkReader'),
        fieldValue(name='translation',value=(0,0.4,0))])]),
    Anchor(description='AriesEspdu Prototype',parameter=["target=_blank"],url=["AriesEspduExample.x3d","https://savage.nps.edu/Savage/Robots/UnmannedUnderwaterVehicles/AriesEspduExample.x3d","AriesEspduExample.wrl","https://savage.nps.edu/Savage/Robots/UnmannedUnderwaterVehicles/AriesEspduExample.wrl"],
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0,1,1),emissiveColor=(0,1,1))),
        geometry=Text(string=["AriesEspduPrototype","is a prototype definition file","","To see an example scene","click on any text and view","AriesEspduExample"],
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

print ("python x3d.py load successful for AriesEspduPrototype.py")
