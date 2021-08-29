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

newModel=X3D(profile='Immersive',version='3.3',
  head=head(
    children=[
    meta(content='FlyingTextPrototype.x3d',name='title'),
    meta(content='Prototype definition for a flying text message. Waypoints, time intervals, cycleInterval and text message can be overridden.',name='description'),
    meta(content='Murat Onder and Don Brutzman',name='creator'),
    meta(content='2 June 2004',name='created'),
    meta(content='9 July 2018',name='modified'),
    meta(content='FlyingTextExample.x3d',name='reference'),
    meta(content='https://savage.nps.edu/Savage/Tools/Animation/FlyingTextPrototype.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    ProtoDeclare(appinfo='Visualize message transfer between two points as flying text',name='FlyingText',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='initializeOnly',name='waypoints',type='MFVec3f',value=[(0,0,0),(0,1,0)]),
        field(accessType='inputOnly',name='set_waypoints',type='MFVec3f'),
        field(accessType='initializeOnly',name='timeIntervals',type='MFTime',value=[1]),
        field(accessType='inputOnly',name='set_timeIntervals',type='MFTime'),
        field(accessType='initializeOnly',name='textMessage',type='MFString',value=["default"]),
        field(accessType='inputOnly',name='set_textMessage',type='MFString'),
        field(accessType='initializeOnly',name='visible',type='SFBool',value=True),
        field(accessType='inputOnly',name='set_visible',type='SFBool'),
        field(accessType='initializeOnly',name='loop',type='SFBool',value=False),
        field(accessType='initializeOnly',name='axisOfRotation',type='SFVec3f',value=(0,0,0)),
        field(accessType='initializeOnly',name='timeSensorEnabled',type='SFBool',value=True),
        field(accessType='inputOutput',name='startTime',type='SFTime',value=0),
        field(accessType='inputOnly',name='set_startTime',type='SFTime'),
        field(accessType='inputOutput',name='stopTime',type='SFTime',value=0),
        field(accessType='inputOnly',name='set_stopTime',type='SFTime'),
        field(accessType='initializeOnly',name='traceEnabled',type='SFBool',value=False),
        field(accessType='inputOutput',name='textDiffuseColor',type='SFColor',value=(.2,.2,.4)),
        field(accessType='inputOutput',name='fontStyle',type='SFNode',
          children=[
          FontStyle(justify=["MIDDLE","MIDDLE"])])]),
      ProtoBody=ProtoBody(
        children=[
        Group(
          children=[
          Billboard(
            IS=IS(
              connect=[
              connect(nodeField='axisOfRotation',protoField='axisOfRotation')]),
            children=[
            Transform(DEF='TextMessageTransform',
              children=[
              Switch(DEF='TextVisibilitySwitch',whichChoice=-1,
                children=[
                Shape(
                  geometry=Text(DEF='TextMessage',
                    IS=IS(
                      connect=[
                      connect(nodeField='fontStyle',protoField='fontStyle')])),
                  appearance=Appearance(
                    material=Material(
                      IS=IS(
                        connect=[
                        connect(nodeField='diffuseColor',protoField='textDiffuseColor')])))),
                TouchSensor(DEF='Toucher',description='Touch to fly the text')])]),
            Group(DEF='TextAnimationGroup',
              children=[
              TimeSensor(DEF='Clock',
                IS=IS(
                  connect=[
                  connect(nodeField='loop',protoField='loop'),
                  connect(nodeField='enabled',protoField='timeSensorEnabled'),
                  connect(nodeField='startTime',protoField='startTime'),
                  connect(nodeField='set_startTime',protoField='set_startTime'),
                  connect(nodeField='stopTime',protoField='stopTime'),
                  connect(nodeField='set_stopTime',protoField='set_stopTime')])),
              ROUTE(fromField='touchTime',fromNode='Toucher',toField='set_startTime',toNode='Clock'),
              PositionInterpolator(DEF='TextAnimator'),
              ROUTE(fromField='fraction_changed',fromNode='Clock',toField='set_fraction',toNode='TextAnimator'),
              ROUTE(fromField='value_changed',fromNode='TextAnimator',toField='set_translation',toNode='TextMessageTransform')])]),
          Script(DEF='AnimationScript',directOutput=True,
            field=[
            field(accessType='initializeOnly',name='traceEnabled',type='SFBool'),
            field(accessType='initializeOnly',name='interpolatorNode',type='SFNode',
              children=[
              PositionInterpolator(USE='TextAnimator')]),
            field(accessType='initializeOnly',name='textNode',type='SFNode',
              children=[
              Text(USE='TextMessage')]),
            field(accessType='initializeOnly',name='timeSensorNode',type='SFNode',
              children=[
              TimeSensor(USE='Clock')]),
            field(accessType='initializeOnly',name='waypoints',type='MFVec3f'),
            field(accessType='inputOnly',name='set_waypoints',type='MFVec3f'),
            field(accessType='initializeOnly',name='timeIntervals',type='MFTime'),
            field(accessType='inputOnly',name='set_timeIntervals',type='MFTime'),
            field(accessType='initializeOnly',name='textMessage',type='MFString'),
            field(accessType='inputOnly',name='set_textMessage',type='MFString'),
            field(accessType='initializeOnly',name='visible',type='SFBool'),
            field(accessType='inputOnly',name='set_visible',type='SFBool'),
            field(accessType='outputOnly',name='hideText',type='SFBool'),
            field(accessType='outputOnly',name='revealText',type='SFBool'),
            field(accessType='inputOnly',name='set_startTime',type='SFTime'),
            field(accessType='initializeOnly',name='totalDuration',type='SFTime',value=0)],
            IS=IS(
              connect=[
              connect(nodeField='traceEnabled',protoField='traceEnabled'),
              connect(nodeField='waypoints',protoField='waypoints'),
              connect(nodeField='set_waypoints',protoField='set_waypoints'),
              connect(nodeField='timeIntervals',protoField='timeIntervals'),
              connect(nodeField='set_timeIntervals',protoField='set_timeIntervals'),
              connect(nodeField='textMessage',protoField='textMessage'),
              connect(nodeField='set_textMessage',protoField='set_textMessage'),
              connect(nodeField='visible',protoField='visible'),
              connect(nodeField='set_visible',protoField='set_visible'),
              connect(nodeField='set_startTime',protoField='set_startTime')])),
          Group(DEF='TextVisibilityGroup',
            children=[
            IntegerTrigger(DEF='HideTextTrigger'),
            ROUTE(fromField='hideText',fromNode='AnimationScript',toField='set_boolean',toNode='HideTextTrigger'),
            ROUTE(fromField='triggerValue',fromNode='HideTextTrigger',toField='whichChoice',toNode='TextVisibilitySwitch'),
            IntegerTrigger(DEF='RevealTextTrigger',integerKey=0),
            ROUTE(fromField='revealText',fromNode='AnimationScript',toField='set_boolean',toNode='RevealTextTrigger'),
            ROUTE(fromField='triggerValue',fromNode='RevealTextTrigger',toField='whichChoice',toNode='TextVisibilitySwitch')])])])),
    #  ============================ 
    Anchor(description='FlyingText Example',parameter=["target=_blank"],url=["../../../Savage/Tools/Animation/FlyingTextExample.x3d","https://savage.nps.edu/Savage/Tools/Animation/FlyingTextExample.x3d","../../../Savage/Tools/Animation/FlyingTextExample.wrl","https://savage.nps.edu/Savage/Tools/Animation/FlyingTextExample.wrl"],
      children=[
      Shape(
        geometry=Text(string=["FlyingTextPrototype","defines a prototype","","Click text to see example scene","","(Text has Billboard style)"],
          fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=0.7)),
        appearance=Appearance(
          material=Material(diffuseColor=(.8,.7,0.2))))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for FlyingTextPrototype.py")
