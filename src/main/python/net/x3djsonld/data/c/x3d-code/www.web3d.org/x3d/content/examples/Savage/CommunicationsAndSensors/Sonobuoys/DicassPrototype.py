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

newModel=X3D(profile='Immersive',version='3.2',
  head=head(
    children=[
    meta(content='DicassPrototype.x3d',name='title'),
    meta(content='AN/SSQ-62B/C/D/E Directional Command Activated Sonobuoy System (DICASS) Sonobuoy',name='description'),
    meta(content='x=East, z=North, y=Up',name='coordinateSystem'),
    meta(content='Don Brutzman, Patrick Burton',name='creator'),
    meta(content='30 January 2003',name='created'),
    meta(content='10 October 2015',name='modified'),
    meta(content='DICASS-an-ssq-62.pdf',name='reference'),
    meta(content='http://www.fas.org/man/dod-101/sys/ship/weaps/an-ssq-62.htm',name='reference'),
    meta(content='NAVY TRAINING SYSTEM PLAN FOR THE NAVY CONSOLIDATED SONOBUOYS N88-NTSP-A-50-8910B/A SEPTEMBER 1998',name='reference'),
    meta(content='ntsp-Sonobuoy.pdf',name='reference'),
    meta(content='http://www.fas.org/man/dod-101/sys/ship/weaps/docs/ntsp-Sonobuoy.pdf',name='reference'),
    meta(content='http://www.avtechtra.navy.mil/pdf/Sonobuoys_a.PDF',name='reference'),
    meta(content='http://www.ultra-scs.com/sonobuoys/dicass.htm',name='reference'),
    meta(content='http://www.ultra-ussg.com/company/sonobuoy_history.cfm',name='reference'),
    meta(content='DICASS sonobuoy',name='subject'),
    meta(content='https://savage.nps.edu/Savage/CommunicationsAndSensors/Sonobuoys/DicassPrototype.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    ExternProtoDeclare(appinfo='Produce wireframe or transparent beam hemisphere. Typical uses include sonar/radar/light beams. Negative range values invert base and apex at same relative location. Default: hemisphere with centroid at (0 0 0) and radius 1 atop x-z plane.',name='BeamHemisphere',url=["../../CommunicationsAndSensors/Beam/BeamHemispherePrototype.x3d#BeamHemisphere","https://savage.nps.edu/Savage/CommunicationsAndSensors/Beam/BeamHemispherePrototype.x3d#BeamHemisphere","../../CommunicationsAndSensors/Beam/BeamHemispherePrototype.wrl#BeamHemisphere","https://savage.nps.edu/Savage/CommunicationsAndSensors/Beam/BeamHemispherePrototype.wrl#BeamHemisphere"],
      field=[
      field(accessType='inputOnly',appinfo='(communications) is transmitted signal in contact with receiver or (sensor) is a target return detected?',name='contact',type='SFBool'),
      field(accessType='inputOnly',appinfo='distance in meters along x axis',name='range',type='SFFloat'),
      field(accessType='initializeOnly',appinfo='distance in meters used until eventIn range sent',name='defaultRange',type='SFFloat'),
      field(accessType='initializeOnly',appinfo='whether wireframe beam is drawn',name='wireframe',type='SFBool'),
      field(accessType='initializeOnly',appinfo='whether solid beam is drawn',name='solid',type='SFBool'),
      field(accessType='initializeOnly',appinfo='rendering color when contact=true',name='contactColor',type='SFColor'),
      field(accessType='initializeOnly',appinfo='rendering color when contact=false',name='noContactColor',type='SFColor'),
      field(accessType='inputOutput',appinfo='1 = fully transparent wireframe only',name='transparency',type='SFFloat')]),
    ProtoDeclare(appinfo='AN/SSQ-62B/C/D/E Directional Command Activated Sonobuoy System (DICASS) Sonobuoy',name='DICASS',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOutput',appinfo='identifier label for this buoy',name='ID',type='MFString',value=["missingID"]),
        field(accessType='initializeOnly',appinfo='default value: AN/SSQ-62B',name='version',type='SFString',value='AN/SSQ-62B'),
        field(accessType='initializeOnly',appinfo='local surface coordinates X=North Z=East',name='initialPositionXZ',type='SFVec2f',value=(0,0)),
        field(accessType='inputOnly',appinfo='local surface coordinates X=North Z=East',name='orderedPositionXZ',type='SFVec2f'),
        field(accessType='initializeOnly',appinfo='meters depth use negative numbers for subsurface',name='initialDepth',type='SFFloat',value=-10),
        field(accessType='inputOnly',appinfo='meters depth use negative numbers for subsurface',name='orderedDepth',type='SFFloat'),
        field(accessType='inputOnly',appinfo='trigger event to bind/unbind viewpoint',name='bindViewpoint',type='SFBool'),
        field(accessType='outputOnly',appinfo='local coordinates X=North Y=altitude Z=East',name='location_changed',type='SFVec3f'),
        field(accessType='initializeOnly',appinfo='maximum audible sonar detection range meters',name='maxRange',type='SFFloat',value=1000),
        field(accessType='outputOnly',appinfo='pingDuration corresponds to maxRange at 1500m/sec sound speed',name='pingDuration',type='SFTime'),
        field(accessType='initializeOnly',appinfo='in-water sound speed m/s, default value 1500',documentation='https://en.wikipedia.org/wiki/Speed_of_sound#Seawater',name='soundSpeed',type='SFFloat',value=1500),
        field(accessType='inputOnly',appinfo='trigger event to start single ping',name='startPing',type='SFBool'),
        field(accessType='inputOnly',appinfo='trigger event to start continuous ping sequence',name='startContinuousPings',type='SFBool'),
        field(accessType='inputOutput',appinfo='Can add linkable text for further information',name='linkText',type='MFString'),
        field(accessType='inputOutput',appinfo='url for linkable text',name='linkUrl',type='MFString'),
        field(accessType='inputOutput',appinfo='target window for linkable text',name='linkTargetWindow',type='MFString')]),
      ProtoBody=ProtoBody(
        children=[
        Group(
          children=[
          Transform(DEF='BuoyPosition',
            children=[
            Viewpoint(DEF='BuoyViewpoint',description='DICASS buoy',
              #  ViewpointControl initialize() updates description to include ID 
              ),
            LOD(range=[1000,5000],
              children=[
              Group(DEF='CloseUpView',
                children=[
                Transform(translation=(0,0.25,0),
                  children=[
                  Shape(DEF='BuoyBody',
                    geometry=Cylinder(radius=0.1),
                    appearance=Appearance(
                      material=Material(DEF='Maroon',diffuseColor=(0.5,0,0)),
                      texture=ImageTexture(url=["DICASSphoto.png","https://savage.nps.edu/Savage/CommunicationsAndSensors/Sonobuoys/DICASSphoto.png"])))]),
                Group(DEF='LinkTextGroup',
                  children=[
                  Transform(translation=(0,-1,0),
                    children=[
                    Billboard(axisOfRotation=(0,0,0),
                      children=[
                      Anchor(DEF='LinkTextAnchor',description='click this text for link',
                        IS=IS(
                          connect=[
                          connect(nodeField='url',protoField='linkUrl'),
                          connect(nodeField='parameter',protoField='linkTargetWindow')]),
                        children=[
                        Shape(
                          appearance=Appearance(
                            material=Material(diffuseColor=(0.6,0.6,0.1))),
                          geometry=Text(DEF='LinkTextNode',
                            IS=IS(
                              connect=[
                              connect(nodeField='string',protoField='linkText')]),
                            fontStyle=FontStyle(justify=["MIDDLE","BEGIN"],size=0.3)))])])])])]),
              Group(DEF='DescriptionTextGroup',
                children=[
                Billboard(axisOfRotation=(0,0,0),
                  children=[
                  TouchSensor(DEF='TextTouch',description='click and hold to view sonobuoy data'),
                  Shape(
                    appearance=Appearance(
                      material=Material(USE='Maroon')),
                    geometry=Text(DEF='BuoyID',
                      IS=IS(
                        connect=[
                        connect(nodeField='string',protoField='ID')]),
                      fontStyle=FontStyle(justify=["MIDDLE","BEGIN"])))]),
                #  make text touchable at a distance, allows closeup viewing of DICASS and label data 
                Shape(
                  appearance=Appearance(
                    material=Material(DEF='Invisible',transparency=1)),
                  geometry=Box(size=(.1,.1,.1)))]),
              WorldInfo(info=["null node, no text at long range"])]),
            Transform(DEF='TextLabelOffset',translation=(0,2,0),
              children=[
              LOD(range=[50],
                children=[
                Billboard(axisOfRotation=(0,0,0),
                  children=[
                  Shape(
                    appearance=Appearance(
                      material=Material(USE='Maroon')),
                    geometry=Text(DEF='BuoyLabel',
                      fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=0.3)))]),
                WorldInfo(info=["null node, no text at long range"])])]),
            ProtoInstance(DEF='SonarBeamHemisphere',name='BeamHemisphere',
              fieldValue=[
              fieldValue(name='defaultRange',value=10),
              fieldValue(name='transparency',value=1),
              fieldValue(name='wireframe',value=True),
              fieldValue(name='solid',value=True)]),
            #  Needed: time-delay prototype gated by distance and speed of sound through medium. 
            Sound(DEF='PingSound',maxBack=10000,maxFront=10000,
              source=AudioClip(DEF='PingAudioClip',description='representative sonar ping',url=["sonarPing.wav","https://savage.nps.edu/Savage/CommunicationsAndSensors/Sonobuoys/sonarPing.wav"]))]),
          #  nonrendering controllers 
          Script(DEF='LocationScript',url=["DicassPrototypeScriptLocation.js","https://savage.nps.edu/Savage/CommunicationsAndSensors/Sonobuoys/DicassPrototypeScriptLocation.js"],
            field=[
            field(accessType='inputOutput',name='ID',type='MFString'),
            field(accessType='initializeOnly',name='version',type='SFString'),
            field(accessType='initializeOnly',name='initialPositionXZ',type='SFVec2f'),
            field(accessType='inputOnly',name='orderedPositionXZ',type='SFVec2f'),
            field(accessType='initializeOnly',name='initialDepth',type='SFFloat'),
            field(accessType='inputOnly',name='orderedDepth',type='SFFloat'),
            field(accessType='outputOnly',name='newLocation',type='SFVec3f'),
            field(accessType='outputOnly',name='newBuoyLabel',type='MFString'),
            field(accessType='initializeOnly',appinfo='set Script to verbose mode by enabling console trace statements',name='traceEnabled',type='SFBool',value=True)],
            IS=IS(
              connect=[
              connect(nodeField='ID',protoField='ID'),
              connect(nodeField='version',protoField='version'),
              connect(nodeField='initialPositionXZ',protoField='initialPositionXZ'),
              connect(nodeField='orderedPositionXZ',protoField='orderedPositionXZ'),
              connect(nodeField='initialDepth',protoField='initialDepth'),
              connect(nodeField='orderedDepth',protoField='orderedDepth'),
              connect(nodeField='newLocation',protoField='location_changed')])),
          ROUTE(fromField='newLocation',fromNode='LocationScript',toField='set_translation',toNode='BuoyPosition'),
          ROUTE(fromField='newBuoyLabel',fromNode='LocationScript',toField='string',toNode='BuoyLabel'),
          Script(DEF='ViewpointControl',directOutput=True,url=["DicassPrototypeScriptViewpointControl.js","https://savage.nps.edu/Savage/CommunicationsAndSensors/Sonobuoys/DicassPrototypeScriptViewpointControl.js"],
            field=[
            field(accessType='inputOutput',name='ID',type='MFString'),
            field(accessType='initializeOnly',name='LocalViewpoint',type='SFNode',
              children=[
              Viewpoint(USE='BuoyViewpoint')]),
            field(accessType='outputOnly',name='viewpointDescription',type='SFString'),
            field(accessType='inputOnly',name='bindViewpoint',type='SFBool'),
            field(accessType='initializeOnly',appinfo='set Script to verbose mode by enabling console trace statements',name='traceEnabled',type='SFBool',value=True)],
            IS=IS(
              connect=[
              connect(nodeField='ID',protoField='ID'),
              connect(nodeField='bindViewpoint',protoField='bindViewpoint')])),
          #  <ROUTE fromField='viewpointDescription' fromNode='ViewpointControl' toField='description' toNode='BuoyViewpoint'/> 
          ROUTE(fromField='isActive',fromNode='TextTouch',toField='bindViewpoint',toNode='ViewpointControl'),
          Group(DEF='AnimationGroup',
            children=[
            TimeSensor(DEF='PingClock'),
            ScalarInterpolator(DEF='RangeInterpolator',key=[0,0.1,0.6,0.6,1],keyValue=[0.01,0.01,1000,0,0]),
            ROUTE(fromField='fraction_changed',fromNode='PingClock',toField='set_fraction',toNode='RangeInterpolator'),
            ROUTE(fromField='value_changed',fromNode='RangeInterpolator',toField='range',toNode='SonarBeamHemisphere'),
            #  maintain opaque until mid range, then go transparent to indicate active detection not feasible 
            ScalarInterpolator(DEF='TransparencyInterpolator',key=[0,0.35,0.5,1],keyValue=[0.2,0.2,1,0]),
            ROUTE(fromField='fraction_changed',fromNode='PingClock',toField='set_fraction',toNode='TransparencyInterpolator'),
            ROUTE(fromField='value_changed',fromNode='TransparencyInterpolator',toField='transparency',toNode='SonarBeamHemisphere')]),
          Script(DEF='PingControl',url=["DicassPrototypeScriptPingControl.js","https://savage.nps.edu/Savage/CommunicationsAndSensors/Sonobuoys/DicassPrototypeScriptPingControl.js"],
            field=[
            field(accessType='inputOutput',name='ID',type='MFString'),
            field(accessType='initializeOnly',name='maxRange',type='SFFloat'),
            field(accessType='initializeOnly',name='soundSpeed',type='SFFloat'),
            field(accessType='outputOnly',appinfo='pingDuration corresponds to maxRange at 1500m/sec sound speed',name='pingDuration',type='SFTime'),
            field(accessType='outputOnly',appinfo='duration between successive pings is twice pingInterval',name='cycleInterval',type='SFTime'),
            field(accessType='outputOnly',name='keyValueRangeInterpolator',type='MFFloat'),
            field(accessType='outputOnly',name='initializeHemisphereRange',type='SFFloat'),
            field(accessType='inputOnly',name='startPing',type='SFBool'),
            field(accessType='inputOnly',name='startContinuousPings',type='SFBool'),
            field(accessType='outputOnly',name='startTime',type='SFTime'),
            field(accessType='outputOnly',name='loop',type='SFBool'),
            field(accessType='initializeOnly',appinfo='set Script to verbose mode by enabling console trace statements',name='traceEnabled',type='SFBool',value=True)],
            IS=IS(
              connect=[
              connect(nodeField='ID',protoField='ID'),
              connect(nodeField='maxRange',protoField='maxRange'),
              connect(nodeField='soundSpeed',protoField='soundSpeed'),
              connect(nodeField='pingDuration',protoField='pingDuration'),
              connect(nodeField='startPing',protoField='startPing'),
              connect(nodeField='startContinuousPings',protoField='startContinuousPings')])),
          ROUTE(fromField='cycleInterval',fromNode='PingControl',toField='cycleInterval',toNode='PingClock'),
          ROUTE(fromField='keyValueRangeInterpolator',fromNode='PingControl',toField='keyValue',toNode='RangeInterpolator'),
          ROUTE(fromField='initializeHemisphereRange',fromNode='PingControl',toField='range',toNode='SonarBeamHemisphere'),
          ROUTE(fromField='loop',fromNode='PingControl',toField='loop',toNode='PingClock'),
          ROUTE(fromField='startTime',fromNode='PingControl',toField='startTime',toNode='PingClock'),
          ROUTE(fromField='startTime',fromNode='PingControl',toField='startTime',toNode='PingAudioClip'),
          ROUTE(fromField='cycleTime',fromNode='PingClock',toField='startTime',toNode='PingAudioClip')])])),
    #  Rendered scene begins here 
    Background(DEF='AquaTealBackground',groundColor=[(0.0,0.25,0.25)],skyColor=[(0,1,1)]),
    NavigationInfo(speed=10),
    Anchor(description='Dicass Example',url=["DicassExample.x3d","https://savage.nps.edu/Savage/CommunicationsAndSensors/Sonobuoys/DicassExample.x3d","DicassExample.wrl","https://savage.nps.edu/Savage/CommunicationsAndSensors/Sonobuoys/DicassExample.wrl"],
      children=[
      Shape(
        geometry=Text(string=["DicassPrototype is a","sonobuoy prototype","","Click text to see","DicassExample"],
          fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=0.9)),
        appearance=Appearance(
          material=Material(diffuseColor=(0.5,0.5,0.1))))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for DicassPrototype.py")
