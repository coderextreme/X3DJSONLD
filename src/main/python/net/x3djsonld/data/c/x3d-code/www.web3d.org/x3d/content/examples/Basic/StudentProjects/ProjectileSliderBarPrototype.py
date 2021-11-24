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
    meta(content='ProjectileSliderBarPrototype.x3d',name='title'),
    meta(content='A generic slider bar prototype. Colors, size of the bar and name are changable.',name='description'),
    meta(content='Ozan APAYDIN',name='creator'),
    meta(content='1 December 2001',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/ProjectileSliderBarPrototype.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='ProjectileSliderBarPrototype.x3d'),
    ProtoDeclare(name='ProjectileSliderBar',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='initializeOnly',appinfo='Name of the Slider Bar. It appears on the left side of the bar.',name='name',type='MFString'),
        field(accessType='initializeOnly',appinfo='Length of the Slider bar. According to given value bar will arrange itself.',name='length',type='SFFloat',value=1),
        field(accessType='initializeOnly',appinfo='Width of the Slider bar. According to given value bar will arrange itself.',name='width',type='SFFloat',value=1),
        field(accessType='initializeOnly',appinfo='Max. value of Slider Bar.It can be assigned a positive or a negative value.',name='maxValue',type='SFFloat',value=1),
        field(accessType='initializeOnly',appinfo='Min. value of Slider Bar. It can be assigned a positive or a negative value.',name='minValue',type='SFFloat',value=0),
        field(accessType='initializeOnly',appinfo='Color of Slider Bar.',name='barColor',type='SFColor',value=(1,0,0)),
        field(accessType='initializeOnly',appinfo='Pointer Color of Slider Bar.',name='pointerColor',type='SFColor',value=(1,1,0)),
        field(accessType='initializeOnly',appinfo='Slider Bar Name Color.',name='nameColor',type='SFColor',value=(1,0,1)),
        field(accessType='initializeOnly',appinfo='Color of Current Value text.',name='currentValueColor',type='SFColor',value=(0.2,0.8,0.2)),
        field(accessType='outputOnly',appinfo='If the precision is 0 current Value will be output in this eventOut field as Integer else in currentValueFloat eventOut field as Float.',name='currentValueInt',type='SFInt32'),
        field(accessType='outputOnly',appinfo='If the precision is NOT 0 current Value will be output in this eventOut field as Float else in currentValueInt eventOut field as Integer.',name='currentValueFloat',type='SFFloat'),
        field(accessType='initializeOnly',appinfo='Count of the numbers after Decimal Point. Example : If precision is 2 1.562777 -> 1.56',name='precision',type='SFInt32',value=2),
        field(accessType='initializeOnly',appinfo='Translation values of Slider Bar to define its location on the screen.',name='translation',type='SFVec3f')]),
      ProtoBody=ProtoBody(
        children=[
        Group(DEF='HUDGroup',
          children=[
          Collision(enabled=False,
            children=[
            ProximitySensor(DEF='HudProx',size=(1000000,1000000,1000000)),
            Transform(DEF='HudTransform',
              children=[
              Transform(translation=(0,0,-0.2),
                children=[
                Transform(DEF='SliderTransform',
                  IS=IS(
                    connect=[
                    connect(nodeField='translation',protoField='translation')]),
                  children=[
                  Group(DEF='SliderShape',
                    children=[
                    Transform(DEF='barTransform',
                      children=[
                      Shape(
                        appearance=Appearance(
                          material=Material(DEF='BarColor',diffuseColor=(0,0,1),
                            IS=IS(
                              connect=[
                              connect(nodeField='diffuseColor',protoField='barColor')]))),
                        geometry=Box(DEF='bar',size=(0.05,0.001,0.000001)))]),
                    Transform(DEF='pointerTransform',
                      children=[
                      Shape(
                        appearance=Appearance(
                          material=Material(DEF='PointerColor',diffuseColor=(1,1,0),
                            IS=IS(
                              connect=[
                              connect(nodeField='diffuseColor',protoField='pointerColor')]))),
                        geometry=Cone(DEF='pointer',bottomRadius=0.0025,height=0.005)),
                      PlaneSensor(DEF='SVPlaneSensor',maxPosition=(0.025,0),minPosition=(-0.025,0))]),
                    Transform(DEF='sliderNameTransform',
                      children=[
                      Shape(
                        geometry=Text(DEF='SliderName',
                          IS=IS(
                            connect=[
                            connect(nodeField='string',protoField='name')]),
                          fontStyle=FontStyle(justify=["END"],size=0.0085,style_='BOLD')),
                        appearance=Appearance(
                          material=Material(DEF='sliderNameColor',
                            IS=IS(
                              connect=[
                              connect(nodeField='diffuseColor',protoField='nameColor')]))))]),
                    Transform(DEF='currentValueTransform',
                      children=[
                      Shape(DEF='currentValue',
                        geometry=Text(DEF='currentValueText',
                          fontStyle=FontStyle(DEF='currentValueFont',justify=["BEGIN","MIDDLE"],size=0.0085,style_='BOLD')),
                        appearance=Appearance(
                          material=Material(DEF='valueColor',
                            IS=IS(
                              connect=[
                              connect(nodeField='diffuseColor',protoField='currentValueColor')]))))])])])])])])]),
        Script(DEF='ShapeOrganizer',directOutput=True,
          field=[
          field(accessType='initializeOnly',name='Length',type='SFFloat'),
          field(accessType='initializeOnly',name='Width',type='SFFloat'),
          field(accessType='initializeOnly',name='SliderNameTransformNode',type='SFNode',
            children=[
            Transform(USE='sliderNameTransform')]),
          field(accessType='initializeOnly',name='CurrentValueTransformNode',type='SFNode',
            children=[
            Transform(USE='currentValueTransform')]),
          field(accessType='initializeOnly',name='BarTransformNode',type='SFNode',
            children=[
            Transform(USE='barTransform')]),
          field(accessType='initializeOnly',name='PointerTransformNode',type='SFNode',
            children=[
            Transform(USE='pointerTransform')]),
          field(accessType='initializeOnly',name='CurrentValueText',type='SFNode',
            children=[
            Text(USE='currentValueText')]),
          field(accessType='initializeOnly',name='SVPlaneSensorNode',type='SFNode',
            children=[
            PlaneSensor(USE='SVPlaneSensor')])],
          IS=IS(
            connect=[
            connect(nodeField='Length',protoField='length'),
            connect(nodeField='Width',protoField='width')])),
        Script(DEF='CurrentValueFinder',directOutput=True,
          field=[
          field(accessType='initializeOnly',name='SVPlaneSensorNode',type='SFNode',
            children=[
            PlaneSensor(USE='SVPlaneSensor')]),
          field(accessType='initializeOnly',name='MaxValue',type='SFFloat'),
          field(accessType='initializeOnly',name='MinValue',type='SFFloat'),
          field(accessType='initializeOnly',name='CurrentValueTextNode',type='SFNode',
            children=[
            Text(USE='currentValueText')]),
          field(accessType='inputOnly',name='updateCurrentValue',type='SFVec3f'),
          field(accessType='outputOnly',name='CurrentValueInt',type='SFInt32'),
          field(accessType='outputOnly',name='CurrentValueFloat',type='SFFloat'),
          field(accessType='initializeOnly',name='Precision',type='SFInt32')],
          IS=IS(
            connect=[
            connect(nodeField='MaxValue',protoField='maxValue'),
            connect(nodeField='MinValue',protoField='minValue'),
            connect(nodeField='CurrentValueInt',protoField='currentValueInt'),
            connect(nodeField='CurrentValueFloat',protoField='currentValueFloat'),
            connect(nodeField='Precision',protoField='precision')])),
        ROUTE(fromField='position_changed',fromNode='HudProx',toField='set_translation',toNode='HudTransform'),
        ROUTE(fromField='orientation_changed',fromNode='HudProx',toField='set_rotation',toNode='HudTransform'),
        ROUTE(fromField='position_changed',fromNode='HudProx',toField='center',toNode='HudProx'),
        ROUTE(fromField='translation_changed',fromNode='SVPlaneSensor',toField='set_translation',toNode='pointerTransform'),
        ROUTE(fromField='translation_changed',fromNode='SVPlaneSensor',toField='updateCurrentValue',toNode='CurrentValueFinder')])),
    Viewpoint(description='Slider bar',position=(0,0,5)),
    ProtoInstance(name='ProjectileSliderBar',
      fieldValue=[
      fieldValue(name='name',value=["AFAA"]),
      fieldValue(name='length',value=1.5),
      fieldValue(name='width',value=1),
      fieldValue(name='maxValue',value=10),
      fieldValue(name='minValue',value=-2)])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for ProjectileSliderBarPrototype.py")
