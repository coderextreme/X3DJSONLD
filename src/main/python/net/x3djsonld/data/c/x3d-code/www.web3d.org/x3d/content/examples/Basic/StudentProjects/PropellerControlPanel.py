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
    meta(content='PropellerControlPanel.x3d',name='title'),
    meta(content='Controller buttons and slider for a propeller.',name='description'),
    meta(content='Dan DeVos',name='creator'),
    meta(content='*if manually translating VRML-to-X3D, enter name of person translating here*',name='translator'),
    meta(content='8 August 2002',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='mismatched typing in some ROUTEs still needs fixing',name='warning'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/PropellerControlPanel.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='PropellerControlPanel.x3d'),
    Viewpoint(description='Fan',position=(1,0,10)),
    Viewpoint(description='Control Panel',position=(-1,0,5)),
    Viewpoint(description='Watch Fan Spin',orientation=(0,1,0,1.571),position=(10,0,0)),
    Viewpoint(description='Remote Control',orientation=(1,0,0,-1.571),position=(0,3,20)),
    Background(groundColor=[(.3,.6,.4)],skyColor=[(.6,.6,.9)]),
    #  Rotating Fan 
    Group(DEF='MaterialGroup',
      children=[
      Shape(
        geometry=Sphere(radius=.001),
        appearance=Appearance(DEF='DarkBlueGreyMetal',
          material=Material(diffuseColor=(0.4,0.4,0.4),specularColor=(0.4,0.4,0.6)))),
      Shape(
        geometry=Sphere(radius=.001),
        appearance=Appearance(DEF='LightGreyMetal',
          material=Material(diffuseColor=(0.7,0.7,0.7),shininess=0.1,specularColor=(0.9,0.9,0.9))))]),
    Transform(rotation=(0,0,-1,1.571),translation=(2,0,0),
      children=[
      Group(DEF='RotatingFanGroup',
        children=[
        Transform(DEF='Fan',
          children=[
          Transform(DEF='FanHub',
            children=[
            Shape(DEF='FanHubMiddle',
              appearance=Appearance(USE='DarkBlueGreyMetal'),
              geometry=Cylinder(height=.4,radius=.25)),
            Transform(translation=(0,.2,0),
              children=[
              Shape(DEF='FanHubTop',
                geometry=Sphere(radius=.255),
                appearance=Appearance(USE='DarkBlueGreyMetal'))])]),
          Transform(DEF='RightFanBlade',rotation=(1,0,0,-.2),scale=(2,.1,.5),translation=(1.8,0,0),
            children=[
            Shape(DEF='FanBlade',
              geometry=Sphere(),
              appearance=Appearance(USE='LightGreyMetal'))]),
          Transform(DEF='LeftFanBlade',rotation=(1,0,0,.2),scale=(2,.1,.5),translation=(-1.8,0,0),
            children=[
            Shape(USE='FanBlade')])]),
        TimeSensor(DEF='FanClock',startTime=10,stopTime=0.1),
        OrientationInterpolator(DEF='FanPath',key=[0.0,0.50,1.0],keyValue=[(0.0,1.0,0.0,0.0),(0.0,1.0,0.0,3.14),(0.0,1.0,0.0,6.28)])])]),
    #  This is where the motor goes. 
    Transform(
      children=[
      Group(DEF='MotorHousingGroup',
        children=[
        Transform(
          children=[
          Shape(
            geometry=Box(size=(3.65,3.65,3.65)),
            appearance=Appearance(
              material=Material(),))])])]),
    #  
    Group(DEF='ControlPanel',
      #  This switch is used to control the fan 
      children=[
      Transform(scale=(.2,.2,.2),translation=(-1,-.3,1.825),
        children=[
        Group(DEF='SwitchGroup',
          children=[
          Transform(rotation=(0,0,1,1.571),
            children=[
            Transform(rotation=(1,0,0,1.571),
              children=[
              Shape(
                appearance=Appearance(USE='DarkBlueGreyMetal'),
                geometry=Extrusion(crossSection=[(0,1.2),(0,1.0),(-2,1.0),(-2,-1.0),(2,-1.0),(2,1.0),(0,1.0),(0,1.2),(2.2,1.2),(2.2,-1.2),(-2.2,-1.2),(-2.2,1.2),(0,1.2)],spine=[(0,0,0),(0,.5,0)]))])]),
          Transform(translation=(0,-1.5,.251),
            children=[
            Transform(DEF='SwitchTransform',
              children=[
              Shape(DEF='SwitchNob',
                geometry=Box(size=(2,1,.499)),
                appearance=Appearance(USE='LightGreyMetal')),
              PlaneSensor(DEF='SwitchPlaneSensor',maxPosition=(0,3)),
              TouchSensor(DEF='SwitchTouchSensor')])]),
          Transform(translation=(0,0,.1),
            children=[
            Shape(DEF='SwitchBack',
              geometry=Box(size=(2,4,.2)),
              appearance=Appearance(USE='DarkBlueGreyMetal'))])])]),
      #  Fan Status Display 
      Transform(translation=(.5,-.5,1.83),
        children=[
        Group(DEF='Display',
          children=[
          Transform(translation=(0,0,.01),
            children=[
            Shape(
              geometry=Text(DEF='SpeedDisplay',string=["OFF"],
                fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=0.5)),
              appearance=Appearance(DEF='BlackText',
                material=Material(diffuseColor=(0,0,0))))]),
          Shape(DEF='DisplayField',
            appearance=Appearance(
              material=Material(emissiveColor=(0,1,1),transparency=.7)),
            geometry=Box(size=(2,.6,.01))),
          Transform(translation=(0,.5,.01),
            children=[
            Shape(
              geometry=Text(string=["Fan Status:"],
                fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=0.5)),
              appearance=Appearance(USE='BlackText'))])])]),
      Script(DEF='MotorAmp',
        field=[
        field(accessType='inputOnly',name='switchPosition',type='SFVec3f'),
        field(accessType='outputOnly',name='fanCycleTime',type='MFFloat'),
        field(accessType='outputOnly',name='displayFanSpeed',type='MFString')]),
      #  Motor On/Off Buttons 
      Transform(translation=(-1,1,1.6),
        children=[
        Transform(rotation=(1,0,0,1.571),
          children=[
          Transform(DEF='OffButton',translation=(0,.1,.3),
            children=[
            Group(
              children=[
              Shape(
                geometry=Cylinder(height=.45,radius=.2),
                appearance=Appearance(DEF='RedStatus',
                  material=Material(diffuseColor=(1,0.3,0.3)))),
              TouchSensor(DEF='SensorOffButton'),
              PositionInterpolator(DEF='OffButtonDownPath',key=[0.0,0.50,1.0],keyValue=[(0.0,0.3,0.3),(0.0,0.2,0.3),(0.0,0.1,0.3)]),
              PositionInterpolator(DEF='OffButtonUpPath',key=[0.0,0.50,1.0],keyValue=[(0.0,0.1,0.3),(0.0,0.2,0.3),(0.0,0.3,0.3)])])]),
          Transform(DEF='OnButton',translation=(0,.3,-.3),
            children=[
            Group(
              children=[
              Shape(
                geometry=Cylinder(height=.45,radius=.2),
                appearance=Appearance(DEF='GreenStatus',
                  material=Material(diffuseColor=(0.3,1,.3)))),
              TouchSensor(DEF='SensorOnButton'),
              PositionInterpolator(DEF='OnButtonDownPath',key=[0.0,0.50,1.0],keyValue=[(0.0,0.3,-0.3),(0.0,0.2,-0.3),(0.0,0.1,-0.3)]),
              PositionInterpolator(DEF='OnButtonUpPath',key=[0.0,0.50,1.0],keyValue=[(0.0,0.1,-0.3),(0.0,0.2,-0.3),(0.0,0.3,-0.3)])])]),
          TimeSensor(DEF='MotorClockOff'),
          TimeSensor(DEF='MotorClockOn')])]),
      #  Motor Status Display 
      Transform(translation=(.5,.8,1.83),
        children=[
        Group(DEF='MotorStatus',
          children=[
          Transform(translation=(0,.5,.01),
            children=[
            Shape(
              geometry=Text(string=["Motor Status:"],
                fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=0.5)),
              appearance=Appearance(USE='BlackText'))]),
          Transform(translation=(0,0,.01),
            children=[
            Shape(
              geometry=Text(DEF='StatusDisplay',string=["OFF"],
                fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=0.5)),
              appearance=Appearance(
                material=Material(DEF='MotorDisplayMaterial',diffuseColor=(1,.3,.3))))]),
          Shape(USE='DisplayField')])]),
      Script(DEF='MotorButtonActionOn',
        field=[
        field(accessType='inputOnly',name='onButtonAction',type='SFBool'),
        field(accessType='outputOnly',name='displayMotorStatus',type='MFString'),
        field(accessType='outputOnly',name='fanOnButtonAction',type='SFInt32')]),
      Script(DEF='MotorButtonActionOff',
        field=[
        field(accessType='inputOnly',name='offButtonAction',type='SFBool'),
        field(accessType='outputOnly',name='displayMotorStatus',type='MFString')]),
      ColorInterpolator(DEF='RtoGColorInerp',key=[0,.1,.1,1],keyValue=[(1,.3,.3),(1,.3,.3),(.3,1,.3),(.3,1,.3)]),
      ColorInterpolator(DEF='GtoRColorInerp',key=[0,.1,.1,1],keyValue=[(.3,1,.3),(.3,1,.3),(1,.3,.3),(1,.3,.3)])]),
    Group(DEF='RemoteControl',
      children=[
      Transform(rotation=(1,0,0,-1.571),
        children=[
        Transform(scale=(.2,.5,.5),translation=(0,-20,0),
          children=[
          Group(USE='ControlPanel'),
          Transform(translation=(0,0,1.325),
            children=[
            Shape(
              geometry=Box(size=(3,3,1)),
              appearance=Appearance(USE='DarkBlueGreyMetal'))])])])]),
    #  Route for controling Switch movement 
    ROUTE(fromField='translation_changed',fromNode='SwitchPlaneSensor',toField='set_translation',toNode='SwitchTransform'),
    #  Routes for controling Fan w/ Switch 
    ROUTE(fromField='translation_changed',fromNode='SwitchPlaneSensor',toField='switchPosition',toNode='MotorAmp'),
    ROUTE(fromField='fanCycleTime',fromNode='MotorAmp',toField='set_cycleInterval',toNode='FanClock'),
    ROUTE(fromField='fraction_changed',fromNode='FanClock',toField='set_fraction',toNode='FanPath'),
    ROUTE(fromField='value_changed',fromNode='FanPath',toField='set_rotation',toNode='Fan'),
    #  Button Movement Routes 
    ROUTE(fromField='touchTime',fromNode='SensorOffButton',toField='set_startTime',toNode='MotorClockOff'),
    ROUTE(fromField='isActive',fromNode='SensorOffButton',toField='offButtonAction',toNode='MotorButtonActionOff'),
    ROUTE(fromField='touchTime',fromNode='SensorOnButton',toField='set_startTime',toNode='MotorClockOn'),
    ROUTE(fromField='isActive',fromNode='SensorOnButton',toField='onButtonAction',toNode='MotorButtonActionOn'),
    ROUTE(fromField='fraction_changed',fromNode='MotorClockOn',toField='set_fraction',toNode='OnButtonDownPath'),
    ROUTE(fromField='fraction_changed',fromNode='MotorClockOn',toField='set_fraction',toNode='OffButtonUpPath'),
    ROUTE(fromField='fraction_changed',fromNode='MotorClockOff',toField='set_fraction',toNode='OffButtonDownPath'),
    ROUTE(fromField='fraction_changed',fromNode='MotorClockOff',toField='set_fraction',toNode='OnButtonUpPath'),
    ROUTE(fromField='value_changed',fromNode='OnButtonDownPath',toField='set_translation',toNode='OnButton'),
    ROUTE(fromField='value_changed',fromNode='OffButtonDownPath',toField='set_translation',toNode='OffButton'),
    ROUTE(fromField='value_changed',fromNode='OnButtonUpPath',toField='set_translation',toNode='OnButton'),
    ROUTE(fromField='value_changed',fromNode='OffButtonUpPath',toField='set_translation',toNode='OffButton'),
    #  Route for Fan display 
    ROUTE(fromField='displayFanSpeed',fromNode='MotorAmp',toField='set_string',toNode='SpeedDisplay'),
    #  Route for Motor display 
    ROUTE(fromField='fraction_changed',fromNode='MotorClockOn',toField='set_fraction',toNode='RtoGColorInerp'),
    ROUTE(fromField='fraction_changed',fromNode='MotorClockOff',toField='set_fraction',toNode='GtoRColorInerp'),
    ROUTE(fromField='displayMotorStatus',fromNode='MotorButtonActionOn',toField='set_string',toNode='StatusDisplay'),
    ROUTE(fromField='value_changed',fromNode='RtoGColorInerp',toField='set_diffuseColor',toNode='MotorDisplayMaterial'),
    ROUTE(fromField='value_changed',fromNode='GtoRColorInerp',toField='set_diffuseColor',toNode='MotorDisplayMaterial'),
    ROUTE(fromField='displayMotorStatus',fromNode='MotorButtonActionOff',toField='set_string',toNode='StatusDisplay'),
    #  Buttons control Fan 
    ROUTE(fromField='fanOnButtonAction',fromNode='MotorButtonActionOn',toField='set_cycleInterval',toNode='FanClock')]
    #  
    )
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for PropellerControlPanel.py")
