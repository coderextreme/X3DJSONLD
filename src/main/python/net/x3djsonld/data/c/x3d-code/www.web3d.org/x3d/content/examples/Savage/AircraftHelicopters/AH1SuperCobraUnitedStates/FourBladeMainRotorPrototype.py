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
    meta(content='FourBladeMainRotorPrototype.x3d',name='title'),
    meta(content='Prototypes a 4 blade main rotor and its shaft for a helicopter, rotating clockwise as seen from above.',name='description'),
    meta(content='Jane Wu, Etsuko Lippi',name='creator'),
    meta(content='21 March 2001',name='created'),
    meta(content='14 February 2015',name='modified'),
    meta(content='SuperCobraPrototype.x3d',name='reference'),
    meta(content='https://savage.nps.edu/Savage/AircraftHelicopters/AH1SuperCobraUnitedStates/FourBladeMainRotorPrototype.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    ProtoDeclare(name='FourBladeMainRotor',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOnly',appinfo='enable or disable rotor rotation',name='rotationOn',type='SFBool')]),
      ProtoBody=ProtoBody(
        children=[
        Transform(DEF='MainRotor',
          #  Rotor Shaft 
          children=[
          Transform(scale=(0.6,0.6,0.6),
            children=[
            Shape(
              appearance=Appearance(DEF='ShaftColor',
                material=Material(diffuseColor=(0.5,0.5,0.5))),
              geometry=Cylinder(bottom=False,height=1.5,radius=0.1,top=False)),
            Transform(translation=(0,0.75,0),
              children=[
              Shape(
                appearance=Appearance(USE='ShaftColor'),
                geometry=Cylinder(height=0.1,radius=0.4))]),
            Transform(rotation=(1,0,0,1.57),translation=(0,0.75,0),
              children=[
              Shape(DEF='Arm',
                appearance=Appearance(USE='ShaftColor'),
                geometry=Cylinder(height=1.75,radius=0.05))]),
            Transform(rotation=(0,0,1,1.57),translation=(0,0.75,0),
              children=[
              Shape(USE='Arm')]),
            Transform(translation=(0,-0.4,0),
              children=[
              Shape(
                appearance=Appearance(USE='ShaftColor'),
                geometry=Cylinder(height=0.1,radius=0.3))]),
            Transform(rotation=(0.71,0.02,-0.71,0.10),translation=(0.23,0.15,0.23),
              children=[
              Shape(DEF='Tube',
                appearance=Appearance(USE='ShaftColor'),
                geometry=Cylinder(height=1.1,radius=0.05))]),
            Transform(rotation=(-0.71,0.02,0.71,0.10),translation=(-0.23,0.15,-0.23),
              children=[
              Shape(USE='Tube')]),
            Transform(rotation=(0.71,-0.02,0.71,0.10),translation=(-0.23,0.15,0.23),
              children=[
              Shape(USE='Tube')]),
            Transform(rotation=(-0.71,-0.02,-0.71,0.10),translation=(0.23,0.15,-0.23),
              children=[
              Shape(USE='Tube')])]),
          Switch(DEF='RotationSwitch',whichChoice=0,
            children=[
            Group(DEF='FourBlades',
              #  Blade in x direction 
              #  Rotate 90 + 15 degree along x 
              children=[
              Transform(rotation=(1,0,0,1.83),translation=(0.45,0.375,0.25),
                children=[
                Shape(DEF='Blade',
                  appearance=Appearance(DEF='BladeColor',
                    material=Material(diffuseColor=(0.2,0.2,0.2))),
                  geometry=Extrusion(ccw=False,creaseAngle=0.8,crossSection=[(-0.10,0.00),(0.06,-0.01),(0.10,-0.02),(0.16,-0.03),(0.22,-0.035),(0.28,-0.03),(0.30,-0.025),(0.32,-0.02),(0.331,0.00),(0.32,0.016),(0.30,0.018),(0.28,0.02),(0.22,0.02),(0.16,0.02),(0.10,0.018),(0.06,0.01),(-0.10,0.00)],spine=[(0.08,0.0,0.0),(5.3,0.0,0.0)]))]),
              #  Blade in -z direction 
              #  Rotate 180 - 15 degree along z 
              Transform(rotation=(0,0,1,2.88),translation=(0.25,0.375,-0.45),
                children=[
                Shape(
                  appearance=Appearance(USE='BladeColor'),
                  geometry=Extrusion(ccw=False,creaseAngle=0.8,crossSection=[(-0.10,0.00),(0.06,-0.01),(0.10,-0.02),(0.16,-0.03),(0.22,-0.035),(0.28,-0.03),(0.30,-0.025),(0.32,-0.02),(0.331,0.00),(0.32,0.016),(0.30,0.018),(0.28,0.02),(0.22,0.02),(0.16,0.02),(0.10,0.018),(0.06,0.01),(-0.10,0.00)],spine=[(0.00,0.0,-0.08),(0.0,0.0,-5.3)]))]),
              #  Blade in -x direction 
              #  Rotate 90 - 15 on x 
              Transform(rotation=(1,0,0,1.31),translation=(-0.45,0.375,-0.25),
                children=[
                Shape(
                  appearance=Appearance(USE='BladeColor'),
                  geometry=Extrusion(ccw=False,creaseAngle=0.8,crossSection=[(-0.10,0.00),(0.06,-0.01),(0.10,-0.02),(0.16,-0.03),(0.22,-0.035),(0.28,-0.03),(0.30,-0.025),(0.32,-0.02),(0.331,0.00),(0.32,0.016),(0.30,0.018),(0.28,0.02),(0.22,0.02),(0.16,0.02),(0.10,0.018),(0.06,0.01),(-0.10,0.00)],spine=[(-0.08,0.0,0.0),(-5.3,0.0,0.0)]))]),
              #  Blade in z direction 
              #  Rotate 15 degreen on z 
              Transform(rotation=(0,0,1,0.26),translation=(-0.25,0.375,0.45),
                children=[
                Shape(
                  appearance=Appearance(USE='BladeColor'),
                  geometry=Extrusion(ccw=False,creaseAngle=0.8,crossSection=[(-0.10,0.00),(0.06,-0.01),(0.10,-0.02),(0.16,-0.03),(0.22,-0.035),(0.28,-0.03),(0.30,-0.025),(0.32,-0.02),(0.331,0.00),(0.32,0.016),(0.30,0.018),(0.28,0.02),(0.22,0.02),(0.16,0.02),(0.10,0.018),(0.06,0.01),(-0.10,0.00)],spine=[(0.00,0.0,0.08),(0.0,0.0,5.3)]))])]),
            LOD(range=[50,200],
              children=[
              Group(USE='FourBlades'),
              Group(
                children=[
                Transform(translation=(0,0.45,0),
                  children=[
                  Shape(
                    appearance=Appearance(
                      material=Material(diffuseColor=(0.2,0.2,0.2),transparency=0.75)),
                    geometry=Cylinder(height=0.1,radius=6))])]),
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
          TimeSensor(DEF='Clock',enabled=False,loop=True),
          #  Animation Path 
          OrientationInterpolator(DEF='MainRotorPath',key=[0.0,0.25,0.5,0.75,1.0],keyValue=[(0.00,-1.00,0.0,0.0),(0.00,-1.00,0.0,1.571),(0.00,-1.00,0.0,3.142),(0.00,-1.00,0.0,4.712),(0.00,-1.00,0.0,6.284)])]),
        ROUTE(fromField='clockEnabled',fromNode='BladeRotationOnOffScript',toField='set_enabled',toNode='Clock'),
        ROUTE(fromField='switchChoice',fromNode='BladeRotationOnOffScript',toField='whichChoice',toNode='RotationSwitch'),
        ROUTE(fromField='fraction_changed',fromNode='Clock',toField='set_fraction',toNode='MainRotorPath'),
        ROUTE(fromField='value_changed',fromNode='MainRotorPath',toField='set_rotation',toNode='MainRotor')])),
    #  ============================================================ 
    WorldInfo(title='FourBladeMainRotor Prototype'),
    Background(skyColor=[(0.9,0.9,0.9)]),
    Viewpoint(description='Toggle Blade Status',position=(0,1,12)),
    Viewpoint(description='At a distance',position=(0,1,50)),
    ProtoInstance(DEF='ExampleMainRotor',name='FourBladeMainRotor'),
    Transform(translation=(0,2.5,0),
      children=[
      TouchSensor(DEF='ExampleBladeRotationToggle',description='Toggle blade rotation on/off'),
      Shape(
        appearance=Appearance(
          material=Material(DEF='ToggleStatusColor',diffuseColor=(0.6,0.6,0))),
        geometry=Text(string=["Select Text to Toggle","Blade Rotation On/Off"],
          fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"]))),
      Shape(
        geometry=Box(size=(10,2.0,0.01)),
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
    ROUTE(fromField='status',fromNode='ExampleSelection',toField='rotationOn',toNode='ExampleMainRotor')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for FourBladeMainRotorPrototype.py")
