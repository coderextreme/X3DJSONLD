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
    meta(content='TwoBladeTailRotorPrototype.x3d',name='title'),
    meta(content='Prototypes a two-blade tail rotor and its shaft for a helicopter.',name='description'),
    meta(content='Jane Wu',name='creator'),
    meta(content='21 March 2001',name='created'),
    meta(content='28 January 2015',name='modified'),
    meta(content='https://savage.nps.edu/Savage/AircraftHelicopters/AH1SuperCobraUnitedStates/TwoBladeTailRotorPrototype.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    ProtoDeclare(name='TwoBladeTailRotor',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOnly',appinfo='enable or disable rotor rotation',name='rotationOn',type='SFBool')]),
      ProtoBody=ProtoBody(
        children=[
        Transform(DEF='TailRotor',
          #  Tail Rotor Shaft 
          children=[
          Transform(rotation=(1.0,0.0,0.0,1.57),translation=(0.0,0.0,-0.1),
            children=[
            Shape(
              appearance=Appearance(DEF='Gray',
                material=Material(diffuseColor=(0.75,0.75,0.75))),
              geometry=Cylinder(height=0.2,radius=0.02))]),
          Switch(DEF='RotationSwitch',whichChoice=0,
            children=[
            Group(DEF='TwoBlades',
              #  put top blade on 
              #  Rotate 15 degree along y 
              children=[
              Transform(rotation=(0,1,0,0.26),translation=(-0.05,0.0,0.0),
                children=[
                Shape(
                  appearance=Appearance(DEF='DarkGray',
                    material=Material(diffuseColor=(0.2,0.2,0.2))),
                  geometry=Extrusion(DEF='TopTailRotor',convex=False,creaseAngle=0.8,crossSection=[(0.00,0.00),(0.03,-0.005),(0.05,-0.007),(0.07,-0.009),(0.09,-0.01),(0.11,-0.009),(0.12,-0.007),(0.13,-0.005),(0.135,0.0),(0.13,0.005),(0.12,0.007),(0.11,0.009),(0.09,0.01),(0.07,0.009),(0.05,0.007),(0.03,0.005)],solid=False,spine=[(-0.015,0.02,0.0),(-0.015,0.82,0.0)]))]),
              #  put bottom blade on 
              #  Rotate -15 degree along y 
              Transform(rotation=(0,1,0,-0.26),
                children=[
                Shape(
                  appearance=Appearance(USE='DarkGray'),
                  geometry=Extrusion(DEF='BottomTailRotor',convex=False,creaseAngle=0.8,crossSection=[(0.00,0.00),(0.03,-0.005),(0.05,-0.007),(0.07,-0.009),(0.09,-0.01),(0.11,-0.009),(0.12,-0.007),(0.13,-0.005),(0.135,0.0),(0.13,0.005),(0.12,0.007),(0.11,0.009),(0.09,0.01),(0.07,0.009),(0.05,0.007),(0.03,0.005)],solid=False,spine=[(0.065,-0.02,0.0),(0.065,-0.82,0.0)]))])]),
            LOD(range=[50,200],
              children=[
              Group(USE='TwoBlades'),
              Group(
                children=[
                Transform(rotation=(1,0,0,1.57),
                  children=[
                  Shape(
                    appearance=Appearance(
                      material=Material(diffuseColor=(0.2,0.2,0.2),transparency=0.75)),
                    geometry=Cylinder(height=0.1,radius=0.82))])]),
              WorldInfo(title='null')])]),
          Script(DEF='BladeRotationOnOffScript',
            field=[
            field(accessType='inputOnly',name='rotationOn',type='SFBool'),
            field(accessType='outputOnly',name='clockEnabled',type='SFBool'),
            field(accessType='outputOnly',name='switchChoice',type='SFInt32')],
            IS=IS(
              connect=[
              connect(nodeField='rotationOn',protoField='rotationOn')])),
          #  Animation Clock 
          TimeSensor(DEF='TailRotorClock',cycleInterval=0.5,enabled=False,loop=True),
          #  Animation Path 
          OrientationInterpolator(DEF='TailRotorPath',key=[0.0,0.25,0.5,0.75,1.0],keyValue=[(0.00,0.00,1.00,0.00),(0.00,0.00,1.00,1.57),(0.00,0.00,1.00,3.14),(0.00,0.00,1.00,4.712),(0.00,0.00,1.00,6.284)])]),
        ROUTE(fromField='clockEnabled',fromNode='BladeRotationOnOffScript',toField='set_enabled',toNode='TailRotorClock'),
        ROUTE(fromField='switchChoice',fromNode='BladeRotationOnOffScript',toField='whichChoice',toNode='RotationSwitch'),
        ROUTE(fromField='fraction_changed',fromNode='TailRotorClock',toField='set_fraction',toNode='TailRotorPath'),
        ROUTE(fromField='value_changed',fromNode='TailRotorPath',toField='set_rotation',toNode='TailRotor')])),
    #  ============================================================ 
    WorldInfo(title='TwoBladeTailRotor Prototype'),
    Background(skyColor=[(.4,.4,.6)]),
    Viewpoint(description='Toggle Blade Status',position=(0,0,12)),
    Viewpoint(description='At a distance',position=(0,0,50)),
    ProtoInstance(DEF='ExampleTailRotor',name='TwoBladeTailRotor'),
    Transform(translation=(0,2.5,0),
      children=[
      TouchSensor(DEF='ExampleBladeRotationToggle',description='Toggle blade rotation on/off'),
      Shape(
        appearance=Appearance(
          material=Material(DEF='ToggleStatusColor',diffuseColor=(0.8,0.8,0))),
        geometry=Text(string=["Select Text to Toggle","Blade Rotation On/Off"],
          fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"]))),
      Shape(
        geometry=Box(size=(8.5,2.0,0.01)),
        appearance=Appearance(
          material=Material(transparency=1)))]),
    Script(DEF='ExampleSelection',
      field=[
      field(accessType='initializeOnly',name='armed',type='SFInt32',value=-1),
      field(accessType='inputOnly',name='toggleEnabled',type='SFBool'),
      field(accessType='outputOnly',name='statusColor',type='SFColor'),
      field(accessType='outputOnly',name='status',type='SFBool')]),
    ROUTE(fromField='isActive',fromNode='ExampleBladeRotationToggle',toField='toggleEnabled',toNode='ExampleSelection'),
    ROUTE(fromField='statusColor',fromNode='ExampleSelection',toField='diffuseColor',toNode='ToggleStatusColor'),
    ROUTE(fromField='status',fromNode='ExampleSelection',toField='rotationOn',toNode='ExampleTailRotor')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for TwoBladeTailRotorPrototype.py")
