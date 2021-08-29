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
    meta(content='ViewpointSequencerPrototype.x3d',name='title'),
    meta(content='Animate through a set of Viewpoint or GeoViewpoint nodes and repeat',name='description'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='10 December 2002',name='created'),
    meta(content='21 September 2017',name='modified'),
    meta(content='Two versions of this scene are maintained in order to avoid Cross-Origin Resource Sharing (CORS) restrictions when referenced from X3D models embedded inside HTML.',name='info'),
    meta(content='http://x3dGraphics.com/examples/X3dForAdvancedModeling/Animation/ViewpointSequencerPrototype.x3d',name='reference'),
    meta(content='http://www.web3d.org/technicalinfo/specifications/vrml97/part1/nodesRef.html#ScalarInterpolator',name='reference'),
    meta(content='Viewpoint Tour',name='subject'),
    meta(content='eliminate intermediate TraceHolder',name='TODO'),
    meta(content='https://savage.nps.edu/Savage/Tools/Animation/ViewpointSequencerPrototype.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    ProtoDeclare(appinfo='Sequentially binds each Viewpoint in a set of Viewpoint USE nodes, creating an automatic tour for a scene',name='ViewpointSequencer',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='initializeOnly',appinfo='Viewpoint USE nodes that are sequentially bound',name='viewpoints',type='MFNode',
          #  initialization nodes (if any) go here 
          ),
        field(accessType='inputOutput',appinfo='number of seconds between viewpoint shifts',name='interval',type='SFTime',value=5),
        field(accessType='inputOutput',appinfo='whether ViewpointSequencer is enabled or not',name='enabled',type='SFBool',value=True),
        field(accessType='inputOnly',appinfo='whether ViewpointSequencer is enabled or not',name='set_enabled',type='SFBool'),
        field(accessType='inputOnly',appinfo='bind previous Viewpoint in list',name='previous',type='SFBool'),
        field(accessType='inputOnly',appinfo='bind next Viewpoint in list',name='next',type='SFBool'),
        field(accessType='inputOutput',appinfo='Select message to toggle ViewpointSequencer',name='toggleMessage',type='MFString',value=["Click text to toggle","ViewpointSequencer"]),
        field(accessType='initializeOnly',appinfo='Font size for toggleMessage text',name='toggleMessageFontSize',type='SFFloat',value=1),
        field(accessType='inputOutput',appinfo='Color for toggleMessage text',name='toggleMessageColor',type='SFColor',value=(0.6,0.4,0.13)),
        field(accessType='inputOutput',appinfo='enable console output',name='traceEnabled',type='SFBool',value=False)]),
      ProtoBody=ProtoBody(
        children=[
        Group(DEF='ProtoBodyGroup',
          children=[
          TimeSensor(DEF='Trigger',loop=True,
            IS=IS(
              connect=[
              connect(nodeField='enabled',protoField='enabled'),
              connect(nodeField='cycleInterval',protoField='interval')])),
          TimeSensor(DEF='TraceHolder',
            IS=IS(
              connect=[
              connect(nodeField='enabled',protoField='traceEnabled')])),
          Script(DEF='SequencerScript',directOutput=True,
            field=[
            field(accessType='initializeOnly',name='viewpoints',type='MFNode'),
            field(accessType='inputOnly',appinfo='whether ViewpointSequencer is enabled or not',name='set_enabled',type='SFBool'),
            field(accessType='initializeOnly',name='TriggerNode',type='SFNode',
              children=[
              TimeSensor(USE='Trigger')]),
            field(accessType='initializeOnly',name='TraceHolderNode',type='SFNode',
              children=[
              TimeSensor(USE='TraceHolder')]),
            field(accessType='inputOnly',name='triggerNext',type='SFTime'),
            field(accessType='inputOnly',name='previous',type='SFBool'),
            field(accessType='inputOnly',name='next',type='SFBool'),
            #  local Script variables needing persistent values 
            field(accessType='initializeOnly',name='index',type='SFInt32',value=0),
            field(accessType='initializeOnly',name='viewpointCount',type='SFInt32',value=0),
            field(accessType='initializeOnly',name='traceEnabled',type='SFBool',value=False)],
            IS=IS(
              connect=[
              connect(nodeField='viewpoints',protoField='viewpoints'),
              connect(nodeField='previous',protoField='previous'),
              connect(nodeField='next',protoField='next'),
              connect(nodeField='set_enabled',protoField='set_enabled')])),
          ROUTE(fromField='cycleTime',fromNode='Trigger',toField='triggerNext',toNode='SequencerScript'),
          Group(DEF='TouchTextGroup',
            children=[
            TouchSensor(DEF='TouchTextSensor',description='Click text to toggle ViewpointSequencer'),
            Billboard(axisOfRotation=(0,0,0),
              children=[
              Shape(
                geometry=Text(
                  IS=IS(
                    connect=[
                    connect(nodeField='string',protoField='toggleMessage')]),
                  fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],
                    IS=IS(
                      connect=[
                      connect(nodeField='size',protoField='toggleMessageFontSize')]))),
                appearance=Appearance(
                  material=Material(
                    IS=IS(
                      connect=[
                      connect(nodeField='diffuseColor',protoField='toggleMessageColor')])))),
              #  An invisible box behind the string helps to toggle the ViewpointSequencer 
              Shape(
                geometry=Box(size=(7.8,2,0.1)),
                appearance=Appearance(
                  material=Material(diffuseColor=(1,1,1),transparency=1)))]),
            BooleanToggle(DEF='TouchToggle'),
            ROUTE(fromField='isActive',fromNode='TouchTextSensor',toField='set_boolean',toNode='TouchToggle'),
            #  TouchToggle toggle_changed should likely revert to TouchToggle toggle when inputOutput fields supported in Script, or native implementation provided. 
            ROUTE(fromField='toggle',fromNode='TouchToggle',toField='set_enabled',toNode='SequencerScript'),
            ROUTE(fromField='toggle',fromNode='TouchToggle',toField='enabled',toNode='Trigger')])])])),
    #  ===============Example============== 
    Anchor(description='select to view ViewpointSequencer example',parameter=["target=_blank"],url=["ViewpointSequencerExample.x3d","https://savage.nps.edu/Savage/Tools/Animation/ViewpointSequencerExample.x3d","ViewpointSequencerExample.wrl","https://savage.nps.edu/Savage/Tools/Animation/ViewpointSequencerExample.wrl"],
      children=[
      Shape(
        geometry=Text(string=["ViewpointSequencerPrototype","defines a prototype","","Click text to see example scene","ViewpointTourExample"],
          fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=0.9)),
        appearance=Appearance(
          material=Material(diffuseColor=(1,1,0.2)))),
      Shape(
        #  transparent Box to make text more selectable 
        geometry=Box(size=(11,5,0.1)),
        appearance=Appearance(
          material=Material(diffuseColor=(1,1,1),transparency=1)))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for ViewpointSequencerPrototype.py")
