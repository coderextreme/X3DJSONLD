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
    meta(content='SliderFloatPrototype.x3d',name='title'),
    meta(content='A Slider prototype enabling mouse input where float output values are needed. Size, min/max values and color are defined by the author.',name='description'),
    meta(content='Mike Hunsberger, Jane Wu',name='creator'),
    meta(content='17 October 2001',name='created'),
    meta(content='25 February 2010',name='modified'),
    meta(content='animation slider',name='subject'),
    meta(content='https://savage.nps.edu/Savage/Tools/Animation/SliderFloatPrototype.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    ProtoDeclare(appinfo='Slider user-interface widget that produces floating-point output values',name='SliderFloat',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='initializeOnly',appinfo='Allowed values: vertical, horizontal',name='layoutDirection',type='SFString',value='vertical'),
        field(accessType='initializeOnly',appinfo='default value 1.0',name='height',type='SFFloat',value=1.0),
        field(accessType='initializeOnly',appinfo='default value 0.1',name='radius',type='SFFloat',value=0.1),
        field(accessType='initializeOnly',appinfo='default value 0.02',name='barRadius',type='SFFloat',value=0.02),
        field(accessType='initializeOnly',appinfo='default value .8 .4 .8',name='sliderBarColor',type='SFColor',value=(.8,.4,.8)),
        field(accessType='initializeOnly',appinfo='default value .3 .4 .8',name='sliderBallColor',type='SFColor',value=(.3,.4,.8)),
        field(accessType='initializeOnly',appinfo='default value .2 .3 .9',name='sliderEndColor',type='SFColor',value=(.2,.3,.9)),
        field(accessType='initializeOnly',appinfo='default value 0.0',name='min',type='SFFloat',value=0.0),
        field(accessType='initializeOnly',appinfo='default value 10.0',name='max',type='SFFloat',value=10.0),
        field(accessType='initializeOnly',appinfo='default value 0.0',name='value',type='SFFloat',value=0.0),
        field(accessType='inputOnly',appinfo='set minimum value for slider bar',name='setMin',type='SFFloat'),
        field(accessType='inputOnly',appinfo='set maximum value for slider bar',name='setMax',type='SFFloat'),
        field(accessType='inputOnly',appinfo='set value for slider bar',name='setValue',type='SFFloat'),
        field(accessType='outputOnly',appinfo='output value for slider bar',name='valueChanged',type='SFFloat'),
        field(accessType='initializeOnly',appinfo='enable/disable console output for troubleshooting',name='traceEnabled',type='SFBool',value=False)]),
      ProtoBody=ProtoBody(
        children=[
        Group(
          children=[
          Transform(DEF='LayoutDirectionTransform',
            children=[
            Transform(DEF='SliderBarTransform',
              children=[
              Shape(
                appearance=Appearance(
                  material=Material(DEF='SliderBarMaterial',
                    IS=IS(
                      connect=[
                      connect(nodeField='diffuseColor',protoField='sliderBarColor'),
                      connect(nodeField='emissiveColor',protoField='sliderBarColor')]))),
                geometry=Cylinder(DEF='SliderBar',
                  IS=IS(
                    connect=[
                    connect(nodeField='height',protoField='height'),
                    connect(nodeField='radius',protoField='barRadius')])))]),
            Transform(DEF='SliderBallTransform',
              children=[
              PlaneSensor(DEF='SliderBallPlaneSensor',description='select and drag to change values'),
              Shape(
                appearance=Appearance(
                  material=Material(DEF='SliderBallMaterial',
                    IS=IS(
                      connect=[
                      connect(nodeField='diffuseColor',protoField='sliderBallColor')]))),
                geometry=Sphere(DEF='SliderBall',
                  IS=IS(
                    connect=[
                    connect(nodeField='radius',protoField='radius')])))]),
            Transform(DEF='BottomEndTransform',
              children=[
              TouchSensor(DEF='BottomEndSensor',description='touch bottom end to decrement'),
              Shape(
                appearance=Appearance(
                  material=Material(
                    IS=IS(
                      connect=[
                      connect(nodeField='diffuseColor',protoField='sliderEndColor')]))),
                geometry=Cylinder(height=.05,radius=.1)),
              Transform(translation=(0,-0.1,0),
                children=[
                Shape(DEF='TransparentEndShape',
                  appearance=Appearance(
                    material=Material(transparency=1)),
                  geometry=Box(size=(0.2,0.2,0.01)))])]),
            Transform(DEF='TopEndTransform',
              children=[
              TouchSensor(DEF='TopEndSensor',description='touch top end to increment'),
              Shape(
                appearance=Appearance(
                  material=Material(
                    IS=IS(
                      connect=[
                      connect(nodeField='diffuseColor',protoField='sliderEndColor')]))),
                geometry=Cylinder(height=.05,radius=.1)),
              Transform(translation=(0,0.1,0),
                children=[
                Shape(USE='TransparentEndShape')])]),
            Script(DEF='SliderScript',
              #  local variables 
              field=[
              field(accessType='initializeOnly',name='height',type='SFFloat'),
              field(accessType='initializeOnly',name='radius',type='SFFloat'),
              field(accessType='initializeOnly',name='min',type='SFFloat'),
              field(accessType='initializeOnly',name='max',type='SFFloat'),
              field(accessType='initializeOnly',name='value',type='SFFloat'),
              field(accessType='initializeOnly',name='lastBallPosition',type='SFVec3f',value=(0,0,0)),
              field(accessType='initializeOnly',name='beginPosition',type='SFVec3f',value=(0,0,0)),
              field(accessType='initializeOnly',name='endPosition',type='SFVec3f',value=(0,1,0)),
              field(accessType='initializeOnly',name='incrementInterval',type='SFFloat',value=0.1),
              field(accessType='inputOnly',name='setMin',type='SFFloat'),
              field(accessType='inputOnly',name='setMax',type='SFFloat'),
              field(accessType='inputOnly',name='setValue',type='SFFloat'),
              field(accessType='outputOnly',name='valueChanged',type='SFFloat'),
              field(accessType='inputOnly',name='bottomEndTouched',type='SFBool'),
              field(accessType='inputOnly',name='topEndTouched',type='SFBool'),
              field(accessType='inputOnly',name='setBallPosition',type='SFVec3f'),
              field(accessType='outputOnly',name='bottomEndPositionChanged',type='SFVec3f'),
              field(accessType='outputOnly',name='topEndPositionChanged',type='SFVec3f'),
              field(accessType='outputOnly',name='ballPositionChanged',type='SFVec3f'),
              field(accessType='outputOnly',name='minBallPositionChanged',type='SFVec2f'),
              field(accessType='outputOnly',name='maxBallPositionChanged',type='SFVec2f'),
              field(accessType='initializeOnly',name='partialIncrement',type='SFFloat',value=0.0),
              field(accessType='initializeOnly',name='traceEnabled',type='SFBool')],
              IS=IS(
                connect=[
                connect(nodeField='height',protoField='height'),
                connect(nodeField='radius',protoField='radius'),
                connect(nodeField='min',protoField='min'),
                connect(nodeField='max',protoField='max'),
                connect(nodeField='value',protoField='value'),
                connect(nodeField='setMin',protoField='setMin'),
                connect(nodeField='setMax',protoField='setMax'),
                connect(nodeField='setValue',protoField='setValue'),
                connect(nodeField='valueChanged',protoField='valueChanged'),
                connect(nodeField='traceEnabled',protoField='traceEnabled')])),
            ROUTE(fromField='translation_changed',fromNode='SliderBallPlaneSensor',toField='setBallPosition',toNode='SliderScript'),
            ROUTE(fromField='isActive',fromNode='BottomEndSensor',toField='bottomEndTouched',toNode='SliderScript'),
            ROUTE(fromField='isActive',fromNode='TopEndSensor',toField='topEndTouched',toNode='SliderScript'),
            ROUTE(fromField='minBallPositionChanged',fromNode='SliderScript',toField='set_minPosition',toNode='SliderBallPlaneSensor'),
            ROUTE(fromField='maxBallPositionChanged',fromNode='SliderScript',toField='set_maxPosition',toNode='SliderBallPlaneSensor'),
            ROUTE(fromField='bottomEndPositionChanged',fromNode='SliderScript',toField='set_translation',toNode='BottomEndTransform'),
            ROUTE(fromField='topEndPositionChanged',fromNode='SliderScript',toField='set_translation',toNode='TopEndTransform'),
            ROUTE(fromField='ballPositionChanged',fromNode='SliderScript',toField='set_translation',toNode='SliderBallTransform')]),
          Script(DEF='LayoutDirectionScript',
            field=[
            field(accessType='initializeOnly',name='direction',type='SFString'),
            field(accessType='outputOnly',name='directionRotation',type='SFRotation'),
            field(accessType='initializeOnly',name='traceEnabled',type='SFBool')],
            IS=IS(
              connect=[
              connect(nodeField='direction',protoField='layoutDirection'),
              connect(nodeField='traceEnabled',protoField='traceEnabled')])),
          ROUTE(fromField='directionRotation',fromNode='LayoutDirectionScript',toField='set_rotation',toNode='LayoutDirectionTransform')])])),
    #  ==================== 
    Anchor(description='SliderFloatExample',parameter=["target=_blank"],url=["SliderFloatExample.x3d","https://savage.nps.edu/Savage/Tools/Animation/SliderFloatExample.x3d","SliderFloatExample.wrl","https://savage.nps.edu/Savage/Tools/Animation/SliderFloatExample.wrl"],
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0,1,1),emissiveColor=(0,1,1))),
        geometry=Text(string=["SliderFloatPrototype","is a Prototype definition file.","","To see an example scene","select this text and view","SliderFloatExample"],
          fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=0.8)))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for SliderFloatPrototype.py")
