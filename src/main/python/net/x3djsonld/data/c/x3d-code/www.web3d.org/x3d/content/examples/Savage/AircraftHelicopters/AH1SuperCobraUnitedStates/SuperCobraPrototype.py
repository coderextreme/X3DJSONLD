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
    meta(content='SuperCobraPrototype.x3d',name='title'),
    meta(content='Defines a prototype of Supercobra AH-1Z helicopter.',name='description'),
    meta(content='Jane Wu',name='creator'),
    meta(content='16 January 2001',name='created'),
    meta(content='1 February 2015',name='modified'),
    meta(content='fix model rotations',name='TODO'),
    meta(content='https://savage.nps.edu/Savage/AircraftHelicopters/AH1SuperCobraUnitedStates/Hughes500HoverInteriorMedium-cd21-no59-10sec.wav',name='reference'),
    meta(content='https://savage.nps.edu/Savage/AircraftHelicopters/AH1SuperCobraUnitedStates/FourBladeMainRotorPrototype.x3d',name='reference'),
    meta(content='https://savage.nps.edu/Savage/AircraftHelicopters/AH1SuperCobraUnitedStates/RocketPod.x3d',name='reference'),
    meta(content='https://savage.nps.edu/Savage/AircraftHelicopters/AH1SuperCobraUnitedStates/SkidLeft.x3d',name='reference'),
    meta(content='https://savage.nps.edu/Savage/AircraftHelicopters/AH1SuperCobraUnitedStates/SkidRight.x3d',name='reference'),
    meta(content='https://savage.nps.edu/Savage/AircraftHelicopters/AH1SuperCobraUnitedStates/TwoBladeTailRotorPrototype.x3d',name='reference'),
    meta(content='http://www.fas.org/man/dod-101/sys/ac/ah-1.htm',name='reference'),
    meta(content='https://savage.nps.edu/Savage/AircraftHelicopters/AH1SuperCobraUnitedStates/SuperCobraPrototype.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    ExternProtoDeclare(name='FourBladeMainRotor',url=["FourBladeMainRotorPrototype.x3d#FourBladeMainRotor","https://savage.nps.edu/Savage/AircraftHelicopters/AH1SuperCobraUnitedStates/FourBladeMainRotorPrototype.x3d#FourBladeMainRotor","FourBladeMainRotorPrototype.wrl#FourBladeMainRotor","https://savage.nps.edu/Savage/AircraftHelicopters/AH1SuperCobraUnitedStates/FourBladeMainRotorPrototype.wrl#FourBladeMainRotor"],
      field=[
      field(accessType='inputOnly',appinfo='enable or disable rotor rotation',name='rotationOn',type='SFBool')]),
    ExternProtoDeclare(name='TwoBladeTailRotor',url=["TwoBladeTailRotorPrototype.x3d#TwoBladeTailRotor","https://savage.nps.edu/Savage/AircraftHelicopters/AH1SuperCobraUnitedStates/TwoBladeTailRotorPrototype.x3d#TwoBladeTailRotor","TwoBladeTailRotorPrototype.wrl#TwoBladeTailRotor","https://savage.nps.edu/Savage/AircraftHelicopters/AH1SuperCobraUnitedStates/TwoBladeTailRotorPrototype.wrl#TwoBladeTailRotor"],
      field=[
      field(accessType='inputOnly',name='rotationOn',type='SFBool')]),
    ProtoDeclare(appinfo='Prototype declaration for SuperCobra helicopter',name='SuperCobra',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='initializeOnly',appinfo='color of tail boom',name='tailBoomColor',type='SFNode',
          #  initialization node (if any) goes here 
          ),
        field(accessType='initializeOnly',appinfo='color of tail boom drive shaft',name='tailRotorDriveShaftColor',type='SFNode',
          #  initialization node (if any) goes here 
          ),
        field(accessType='initializeOnly',appinfo='color of horizontal stabilizer',name='horizontalStabilizerColor',type='SFNode',
          #  initialization node (if any) goes here 
          ),
        field(accessType='initializeOnly',appinfo='color of fuselage',name='fuselageColor',type='SFNode',
          #  initialization node (if any) goes here 
          ),
        field(accessType='initializeOnly',appinfo='color of cockpit',name='cockpitColor',type='SFNode',
          #  initialization node (if any) goes here 
          ),
        field(accessType='initializeOnly',appinfo='color of cowling',name='cowlingColor',type='SFNode',
          #  initialization node (if any) goes here 
          ),
        field(accessType='initializeOnly',appinfo='name of specific helicopter',name='helicopterName',type='SFString',value='Super Cobra'),
        field(accessType='inputOnly',appinfo='input event indicating that the aircraft is in flight',name='inFlight',type='SFBool')]),
      ProtoBody=ProtoBody(
        children=[
        Group(
          children=[
          WorldInfo(DEF='HeloWorldInfo',
            IS=IS(
              connect=[
              connect(nodeField='title',protoField='helicopterName')])),
          Viewpoint(DEF='HeloNameViewpoint',description='helicopter name overridden by protodeclare field',orientation=(0,1,0,-1.57),position=(-20,2,0),
            IS=IS(
              connect=[
              connect(nodeField='description',protoField='helicopterName')])),
          LOD(range=[400],
            children=[
            Group(DEF='DetailViewpoint',
              children=[
              Viewpoint(description='SuperCobra Right',position=(0,2,15)),
              Viewpoint(description='SuperCobra Front',orientation=(0,1,0,1.57),position=(15,2,0)),
              Viewpoint(description='SuperCobra Left',orientation=(0,1,0,3.14),position=(0,2,-15)),
              Viewpoint(description='SuperCobra Behind',orientation=(0,1,0,4.71),position=(-15,2,0)),
              Viewpoint(description='SuperCobra Top',orientation=(-0.51,0.83,0.22,1.24),position=(10,10,6)),
              Viewpoint(description='SuperCobra Bottom',orientation=(0.82,0.22,-0.53,0.94),position=(0,-12,10))]),
            WorldInfo(info=["null node"])]),
          Script(DEF='InFlightStatusScript',
            field=[
            field(accessType='inputOnly',name='inFlight',type='SFBool'),
            field(accessType='outputOnly',name='status',type='SFBool')],
            IS=IS(
              connect=[
              connect(nodeField='inFlight',protoField='inFlight')])),
          Sound(direction=(1.0,1.0,1.0),maxBack=200.0,maxFront=200.0,minBack=20.0,minFront=20.0,
            source=AudioClip(DEF='HeloFlyingAudioClip',description='helicopter flight sound',url=["../../AircraftHelicopters/AH1SuperCobraUnitedStates/Hughes500HoverInteriorMedium-cd21-no59-10sec.wav","https://savage.nps.edu/Savage/AircraftHelicopters/AH1SuperCobraUnitedStates/Hughes500HoverInteriorMedium-cd21-no59-10sec.wav"])),
          #  Tailboom 
          Transform(DEF='TailBoom',rotation=(0,0,-1,1.66),scale=(1.2,1.2,1.0),translation=(-7.8,0.78,0.0),
            #  Tailboom shape 
            children=[
            Transform(rotation=(0,1,0,1.57),
              children=[
              Shape(DEF='TailBoomShape',
                IS=IS(
                  connect=[
                  connect(nodeField='appearance',protoField='tailBoomColor')]),
                geometry=Extrusion(convex=False,creaseAngle=0.8,crossSection=[(0.4,-0.5),(-0.4,-0.5),(-0.465,-0.465),(-0.5,-0.4),(-0.5,0.4),(-0.465,0.465),(-0.4,0.5),(0.4,0.5),(0.465,0.465),(0.5,0.4),(0.5,-0.4),(0.465,-0.465),(0.4,-0.5)],endCap=False,orientation=[(0,0,0,0),(0,0,0,0),(0,0,0,0),(0,0,0,0),(0,0,0,0),(0,0,0,0),(0,0,0,0),(0,0,0,0),(0,0,0,0),(0,0,0,0),(0,0,0,0),(0,0,0,0),(0,0,0,0),(0,0,0,0),(0,0,0,0),(1,0,0,0)],scale=[(0.10,0.10),(0.15,0.15),(0.20,0.20),(0.25,0.25),(0.30,0.30),(0.35,0.35),(0.40,0.40),(0.45,0.45),(0.475,0.475),(0.50,0.50),(0.525,0.525),(0.55,0.55),(0.565,0.565),(0.575,0.575),(0.58,0.58),(0.6,0.6)],solid=False,spine=[(0.00,0.00,0.00),(0.00,0.05,0.00),(0.00,0.10,0.00),(0.00,0.20,0.00),(0.00,0.30,0.00),(0.00,0.40,0.00),(0.00,0.80,0.00),(0.00,1.00,0.00),(0.00,2.00,0.00),(0.00,3.00,0.00),(0.00,3.25,0.00),(0.00,3.50,0.00),(0.00,3.75,0.00),(0.00,4.00,0.00),(0.00,4.25,0.00),(0.00,4.50,0.00)]))]),
            #  AC Light 
            Shape(
              appearance=Appearance(
                material=Material(emissiveColor=(1.0,1.0,1.0))),
              geometry=Sphere(radius=.04)),
            #  Tail Rotor Drive Shaft 
            Transform(center=(0.0,2.2,0.0),rotation=(0.0,0.0,1.0,0.03),translation=(-0.3,1.0,0.0),
              children=[
              Group(
                children=[
                Shape(DEF='TailRotorDriveShaftShape',
                  IS=IS(
                    connect=[
                    connect(nodeField='appearance',protoField='tailRotorDriveShaftColor')]),
                  geometry=Extrusion(ccw=False,creaseAngle=1.5,crossSection=[(-0.03,0),(-0.0276,-0.0114),(-0.0213,-0.0213),(-0.0114,-0.0276),(0,-0.03),(0.0114,-0.0276),(0.0213,-0.0213),(0.0276,-0.0114),(0.03,0),(0.0276,0.0114),(0.0213,0.0213),(0.0114,0.0276),(0,0.03),(-0.0114,0.0276),(-0.0213,0.0213),(-0.0276,0.0114),(-0.03,0)],scale=[(2,2),(2.3,2.3),(2,2)],spine=[(-1.16,-1.0,0.0),(0.0,0.0,0.0),(0.0,3.6,0.0)]))])]),
            #  Horizontal stabilizer 
            Transform(rotation=(0.58,0.58,0.58,2.09),translation=(0,0.1,0),
              children=[
              Transform(rotation=(0,0,1,3.14),
                children=[
                Shape(DEF='HorizontalStabilizerShape',
                  IS=IS(
                    connect=[
                    connect(nodeField='appearance',protoField='horizontalStabilizerColor')]),
                  geometry=Extrusion(convex=False,creaseAngle=0.8,crossSection=[(-2.7,0.0),(-2.6,0.02),(-2.5,0.04),(-2.4,0.045),(-2.32,0.04),(-0.5,0.0),(-2.32,-0.04),(-2.4,-0.045),(-2.5,-0.04),(-2.6,-0.02),(-2.7,0.0)],scale=[(0.14,1.0),(0.29,1.0),(0.14,1.0)],solid=False,spine=[(0.0,-0.85,0.0),(0.0,0.0,0.0),(0.0,0.85,0.0)]))]),
              Transform(DEF='LeftVerticalStabilizer',rotation=(1,0,0,-1.57),translation=(-0.05,-0.85,0.325),
                children=[
                Shape(DEF='VerticalStabilizerShape',
                  IS=IS(
                    connect=[
                    connect(nodeField='appearance',protoField='tailBoomColor')]),
                  #  right, left, bottom, lower front, upper front, top, lower back, upper back 
                  geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,2,3,4,5,-1,6,11,10,9,8,7,-1,0,6,7,1,-1,1,7,8,2,-1,2,8,9,3,-1,3,9,10,4,-1,0,5,11,6,-1,5,4,10,11,-1],
                    coord=Coordinate(point=[(0.1,0.15,0.0),(0.3,0.15,0.0),(0.425,0.325,0.0),(0.275,0.6,0.0),(0.05,0.6,0.0),(0.125,0.3,0.0),(0.1,0.15,-0.04),(0.3,0.15,-0.02),(0.425,0.325,-0.02),(0.275,0.6,-0.02),(0.05,0.6,-0.04),(0.125,0.3,-0.04)])))]),
              Transform(DEF='RightVerticalStabilizer',rotation=(1,0,0,-1.57),translation=(-0.05,0.85,0.325),
                children=[
                Shape(USE='VerticalStabilizerShape')])]),
            #  Vertical Fin 
            Transform(DEF='VerticalFin',rotation=(0,0,1,1.57),scale=(3.5,3.5,2.5),translation=(1.45,0,0),
              children=[
              Shape(DEF='VerticalFinShape',
                IS=IS(
                  connect=[
                  connect(nodeField='appearance',protoField='tailBoomColor')]),
                geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,2,3,4,5,6,7,-1,8,15,14,13,12,11,10,9,-1,8,9,1,0,-1,9,10,2,1,-1,10,11,3,2,-1,11,12,4,3,-1,12,13,5,4,-1,5,13,14,6,-1,6,14,15,7,-1,0,7,15,8,-1],
                  coord=Coordinate(point=[(0.1,0.375,0.01),(0.125,0.355,0.01),(0.175,0.33,0.01),(0.3,0.325,0.02),(0.35,0.35,0.02),(0.375,0.4,0.02),(0.0,0.8,0.02),(-0.1,0.7,0.01),(0.1,0.375,-0.01),(0.125,0.355,-0.01),(0.175,0.33,-0.01),(0.3,0.325,-0.02),(0.35,0.35,-0.02),(0.375,0.4,-0.02),(0.0,0.8,-0.02),(-0.1,0.7,-0.01)]))),
              #  Tail Stinger 
              Transform(rotation=(0,0,-1,1.05),translation=(0.07,0.29,0.0),
                children=[
                Shape(
                  appearance=Appearance(DEF='Gray',
                    material=Material(diffuseColor=(.25,.25,.25))),
                  geometry=Cylinder(height=0.2,radius=0.008)),
                #  Tip part 
                Transform(rotation=(0,0,1,2.62),translation=(-0.0075,-0.11,0),
                  children=[
                  Shape(
                    appearance=Appearance(USE='Gray'),
                    geometry=Cylinder(height=0.04,radius=0.008))])])]),
            #  Tail Rotor 
            Transform(translation=(-1.25,0.0,0.25),
              children=[
              ProtoInstance(DEF='TailRotor',name='TwoBladeTailRotor')])]),
          #  Fuselage 
          Transform(DEF='FuselageBody',rotation=(0,1,0,-1.57),translation=(0.4,1.78,0.0),
            children=[
            Transform(DEF='MainFuselageBody',
              children=[
              Shape(DEF='MainFuselageShape',
                IS=IS(
                  connect=[
                  connect(nodeField='appearance',protoField='fuselageColor')]),
                geometry=IndexedFaceSet(coordIndex=[7,6,5,4,3,2,1,0,-1,0,1,2,3,13,12,11,10,9,8,-1,10,11,12,13,23,22,21,20,-1,14,15,16,17,18,19,4,5,6,7,-1,24,25,26,27,19,18,17,16,-1,0,8,14,7,-1,20,21,22,23,31,30,29,28,-1,27,26,25,24,32,33,34,35,-1,28,29,30,31,39,38,37,36,-1,35,34,33,32,40,41,42,43,-1,9,10,20,24,16,15,-1,20,28,32,24,-1,28,36,40,32,-1,43,42,41,40,36,37,38,39,-1],creaseAngle=1.57,
                  coord=Coordinate(point=[(-0.025,0.0,3.25),(-0.3,0.0,2.0),(-0.55,0.0,0.5),(-0.6,0.0,-0.5),(0.6,0.0,-0.5),(0.55,0.0,0.5),(0.3,0.0,2.0),(0.025,0.0,3.25),(-0.05,-1.0,3.5),(-0.05,-1.0,3.0),(-0.3,-1.0,3.0),(-0.5,-1.0,2.0),(-0.55,-1.0,0.0),(-0.56,-1.0,-0.5),(0.05,-1.0,3.5),(0.05,-1.0,3.0),(0.3,-1.0,3.0),(0.5,-1.0,2.0),(0.55,-1.0,0.0),(0.56,-1.0,-0.5),(-0.3,-1.7,3.0),(-0.5,-1.9,2.0),(-0.55,-1.9,0.0),(-0.56,-1.9,-0.5),(0.3,-1.7,3.0),(0.5,-1.9,2.0),(0.55,-1.9,0.0),(0.56,-1.9,-0.5),(-0.275,-1.76,3.0),(-0.475,-1.96,2.0),(-0.525,-1.96,0.0),(-0.535,-1.96,-0.5),(0.275,-1.76,3.0),(0.475,-1.96,2.0),(0.525,-1.96,0.0),(0.535,-1.96,-0.5),(-0.2,-1.8,3.0),(-0.4,-2.0,2.0),(-0.45,-2.0,0.0),(-0.46,-2.0,-0.5),(0.2,-1.8,3.0),(0.4,-2.0,2.0),(0.45,-2.0,0.0),(0.46,-2.0,-0.5)])))]),
            #  Left Engine 
            Transform(rotation=(0,1,0,0.15),scale=(0.6,0.9,1.0),translation=(-0.65,-0.5,1.6),
              children=[
              Transform(DEF='Engine',rotation=(1,0,0,1.57),scale=(0.25,0.25,0.25),
                children=[
                Shape(DEF='EngineShape',
                  IS=IS(
                    connect=[
                    connect(nodeField='appearance',protoField='fuselageColor')]),
                  geometry=Extrusion(creaseAngle=2.36,crossSection=[(-0.05,-5),(-0.15,-4.95),(-0.25,-4.8),(-0.35,-4.45),(-0.45,-4),(-0.45,4),(-0.35,4.45),(-0.25,4.8),(-0.15,4.95),(-0.05,5),(0.05,5),(0.15,4.95),(0.25,4.8),(0.35,4.45),(0.45,4),(0.45,-4),(0.35,-4.45),(0.25,-4.8),(0.15,-4.95),(0.05,-5),(-0.05,-5)],spine=[(0.00,0.0,-2.00),(0.77,0.0,-1.95),(1.20,0.0,-1.80),(1.41,0.0,-1.56),(1.58,0.0,-1.15),(1.58,0.0,0.00),(1.58,0.0,1.15),(1.41,0.0,1.56),(1.20,0.0,1.80),(0.77,0.0,1.95),(0.00,0.0,2.00),(-0.77,0.0,1.95),(-1.20,0.0,1.80),(-1.41,0.0,1.56),(-1.58,0.0,1.15),(-1.58,0.0,0.00),(-1.58,0.0,-1.15),(-1.41,0.0,-1.56),(-1.20,0.0,-1.80),(-0.77,0.0,-1.95),(0.00,0.0,-2.00)])),
                Transform(
                  children=[
                  Shape(
                    appearance=Appearance(DEF='EngineInsideColor',
                      material=Material(diffuseColor=(0.25,0.25,0.25))),
                    geometry=Extrusion(ccw=False,crossSection=[(0.00,-2.00),(0.77,-1.95),(1.20,-1.80),(1.41,-1.56),(1.58,-1.15),(1.58,0.00),(1.58,1.15),(1.41,1.56),(1.20,1.80),(0.77,1.95),(0.00,2.00),(-0.77,1.95),(-1.20,1.80),(-1.41,1.56),(-1.58,1.15),(-1.58,0.0),(-1.58,-1.15),(-1.41,-1.56),(-1.20,-1.80),(-0.77,-1.95),(0.0,-2.0)],spine=[(0.0,6.5,0.0),(0.0,-3.0,0.0)]))]),
                Transform(translation=(0,6.6,0),
                  children=[
                  Shape(
                    appearance=Appearance(USE='EngineInsideColor'),
                    geometry=Extrusion(crossSection=[(0.1,0.0),(0.092,-0.038),(0.071,-0.071),(0.038,-0.092),(0.0,-0.1),(-0.038,-0.092),(-0.071,-0.071),(-0.092,-0.038),(-0.1,0.0),(-0.092,0.038),(-0.071,0.071),(-0.038,0.092),(0.0,0.1),(0.038,0.092),(0.071,0.071),(0.092,0.038),(0.1,0.0)],spine=[(0.0,0.0,-2.00),(0.77,0.0,-1.95),(1.20,0.0,-1.80),(1.41,0.0,-1.56),(1.58,0.0,-1.15),(1.58,0.0,0.00),(1.58,0.0,1.15),(1.41,0.0,1.56),(1.20,0.0,1.80),(0.77,0.0,1.95),(0.00,0.0,2.00),(-0.77,0.0,1.95),(-1.20,0.0,1.80),(-1.41,0.0,1.56),(-1.58,0.0,1.15),(-1.58,0.0,0.0),(-1.58,0.0,-1.15),(-1.41,0.0,-1.56),(-1.20,0.0,-1.80),(-0.77,0.0,-1.95),(0.0,0.0,-2.0)]))]),
                #  Left Middle Strip 
                Transform(rotation=(0.58,0.58,0.58,2.09),translation=(-1.55,1.75,0),
                  children=[
                  Shape(DEF='EngineStripShape',
                    appearance=Appearance(
                      material=Material(diffuseColor=(0.05,0.05,0.05))),
                    geometry=Box(size=(9.5,0.3,0.1)))]),
                #  Right Middle Strip 
                Transform(rotation=(0.58,0.58,0.58,2.09),translation=(1.55,1.75,0),
                  children=[
                  Shape(USE='EngineStripShape')]),
                #  Left Upper Strip 
                Transform(rotation=(0.58,0.58,0.58,2.09),translation=(-1.55,1.75,-0.75),
                  children=[
                  Shape(USE='EngineStripShape')]),
                #  Right Upper Strip 
                Transform(rotation=(0.58,0.58,0.58,2.09),translation=(1.55,1.75,-0.75),
                  children=[
                  Shape(USE='EngineStripShape')]),
                #  Left Lower Strip 
                Transform(rotation=(0.58,0.58,0.58,2.09),translation=(-1.55,1.75,0.75),
                  children=[
                  Shape(USE='EngineStripShape')]),
                #  Right Lower Strip 
                Transform(rotation=(0.58,0.58,0.58,2.09),translation=(1.55,1.75,0.75),
                  children=[
                  Shape(USE='EngineStripShape')])])]),
            #  Right Engine 
            Transform(rotation=(0,-1,0,0.15),scale=(0.6,0.9,1.0),translation=(0.65,-0.5,1.6),
              children=[
              Transform(USE='Engine')]),
            #  Cockpit 
            Transform(DEF='Cockpit',rotation=(1,0,0,-1.57),translation=(0.0,-0.4,1.51),
              #  Cockpit Bottom 
              children=[
              Transform(DEF='CockpitBottom',rotation=(0,1,0,3.14),translation=(0,2,-1.6),
                children=[
                Shape(DEF='CockpitBottomShape',
                  IS=IS(
                    connect=[
                    connect(nodeField='appearance',protoField='cockpitColor')]),
                  geometry=Extrusion(beginCap=False,convex=False,creaseAngle=1.5,crossSection=[(-0.56,-0.65),(-0.56,-0.3),(-0.56,-0.05),(-0.535,-0.02),(-0.46,0.0),(0.46,0.0),(0.535,-0.02),(0.56,-0.05),(0.56,-0.3),(0.56,-0.65)],endCap=False,scale=[(1.0,2.5),(1.0,2.0),(1.0,1.61),(0.9,1.25)],solid=False,spine=[(0.0,0.0,0.0),(0.0,0.375,0.0),(0.0,1.25,0.0),(0.0,2.15,0.0)])),
                #  Front Cockpit Bottom 
                Transform(translation=(0,0,-0.325),
                  children=[
                  Shape(DEF='FrontCockpitBottomShape',
                    IS=IS(
                      connect=[
                      connect(nodeField='appearance',protoField='cockpitColor')]),
                    geometry=Extrusion(beginCap=False,convex=False,creaseAngle=1.5,crossSection=[(-0.56,-0.65),(-0.56,-0.3),(-0.56,-0.05),(-0.535,-0.02),(-0.46,0.0),(0.46,0.0),(0.535,-0.02),(0.56,-0.05),(0.56,-0.3),(0.56,-0.65)],endCap=False,scale=[(0.9,0.75),(0.85,0.56)],solid=False,spine=[(0.0,2.15,0.0),(0.0,2.56,0.0)]))])]),
              #  Cockpit Top 
              Transform(rotation=(0,.71,.71,3.14),translation=(0.0,2.0,0.4),
                children=[
                Shape(DEF='CockpitTopShape',
                  IS=IS(
                    connect=[
                    connect(nodeField='appearance',protoField='cockpitColor')]),
                  geometry=IndexedFaceSet(coordIndex=[0,1,17,-1,1,2,16,17,-1,2,3,15,16,-1,3,4,10,11,14,15,-1,4,5,9,10,-1,5,6,8,9,-1,6,7,8,-1,11,12,13,14,-1,14,13,12,11,-1,1,0,17,-1,2,1,17,16,-1,3,2,16,15,-1,4,3,15,14,11,10,-1,5,4,10,9,-1,6,5,9,8,-1,7,6,8,-1],creaseAngle=1.57,
                    coord=Coordinate(point=[(0.56,-0.3,0.0),(0.56,-0.1,0.0),(0.56,-0.04,0.0),(0.475,0.0,0.0),(-0.475,0.0,0.0),(-0.56,-0.04,0.0),(-0.56,-0.1,0.0),(-0.56,-0.3,0.0),(-0.56,-0.1,0.06),(-0.56,-0.04,0.08),(-0.475,0.0,0.10),(-0.300,0.0,0.12),(-0.300,-0.03,0.5),(0.300,-0.03,0.5),(0.300,0.0,0.12),(0.475,0.0,0.10),(0.56,-0.04,0.08),(0.56,-0.1,0.06)]))),
                #  Center Bars 
                Shape(DEF='CenterBarShape',
                  IS=IS(
                    connect=[
                    connect(nodeField='appearance',protoField='cockpitColor')]),
                  geometry=IndexedFaceSet(coordIndex=[3,2,1,0,-1,0,1,2,3,-1,4,5,6,7,-1,7,6,5,4,-1,17,16,9,8,-1,8,9,16,17,-1,16,15,10,9,-1,9,10,15,16,-1,15,14,11,10,-1,10,11,14,15,-1,14,13,12,11,-1,11,12,13,14,-1,23,18,17,8,-1,8,17,18,23,-1,22,19,18,23,-1,23,18,19,22,-1,22,21,20,19,-1,19,20,21,22,-1,31,30,29,28,27,26,25,24,-1,24,25,26,27,28,29,30,31,-1,39,38,37,36,35,34,33,32,-1,32,33,34,35,36,37,38,39,-1],
                    coord=Coordinate(DEF='CenterBarCoord',point=[(0.3,-0.03,0.5),(0.3,-0.13,1.75),(0.25,-0.13,1.75),(0.25,-0.03,0.5),(-0.3,-0.03,0.5),(-0.3,-0.13,1.75),(-0.25,-0.13,1.75),(-0.25,-0.03,0.5),(-0.3,-0.13,1.75),(0.3,-0.13,1.75),(0.4,-0.2,1.725),(0.45,-0.3,1.7),(0.56,-0.94,1.2),(0.56,-0.95,1.25),(0.45,-0.3,1.75),(0.4,-0.2,1.775),(0.3,-0.13,1.8),(-0.3,-0.13,1.8),(-0.4,-0.2,1.775),(-0.45,-0.3,1.75),(-0.56,-0.95,1.25),(-0.56,-0.94,1.2),(-0.45,-0.3,1.7),(-0.4,-0.2,1.725),(0.3,-0.13,1.75),(0.3,-0.17,2.0),(0.3,-0.25,2.1),(0.3,-1.0,3.0),(0.25,-1.0,3.0),(0.25,-0.25,2.1),(0.25,-0.17,2.0),(0.25,-0.13,1.75),(-0.3,-0.13,1.75),(-0.3,-0.17,2.0),(-0.3,-0.25,2.1),(-0.3,-1.0,3.0),(-0.25,-1.0,3.0),(-0.25,-0.25,2.1),(-0.25,-0.17,2.0),(-0.25,-0.13,1.75)]))),
                #  Glass Panes 
                Shape(
                  appearance=Appearance(
                    material=Material(diffuseColor=(0.75,0.75,0.75),transparency=0.5)),
                  geometry=IndexedFaceSet(coordIndex=[11,10,9,5,4,3,2,1,0,-1,0,1,2,3,4,5,9,10,11,-1,9,8,7,6,5,-1,5,6,7,8,9,-1,13,14,15,16,17,21,22,23,-1,23,22,21,17,16,15,14,13,-1,17,18,19,20,21,-1,21,20,19,18,17,-1,24,25,26,27,-1,27,26,25,24,-1,28,29,30,31,32,33,34,35,-1,35,34,33,32,31,30,29,28,-1,44,43,42,41,40,39,38,37,36,-1,36,37,38,39,40,41,42,43,44,-1,45,46,47,48,49,50,51,52,53,-1,53,52,51,50,49,48,47,46,45,-1],creaseAngle=0.8,
                    coord=Coordinate(DEF='GlassPaneCoord',point=[(0.3,-0.03,0.5),(0.3,0.0,0.12),(0.475,0.0,0.10),(0.56,-0.04,0.08),(0.56,-0.1,0.06),(0.56,-0.3,0.0),(0.56,-0.38,0.0),(0.56,-0.7,0.37),(0.56,-0.94,1.2),(0.45,-0.3,1.7),(0.4,-0.2,1.725),(0.3,-0.13,1.75),(-0.3,-0.03,0.5),(-0.3,0.0,0.12),(-0.475,0.0,0.10),(-0.56,-0.04,0.08),(-0.56,-0.1,0.06),(-0.56,-0.3,0.0),(-0.56,-0.38,0.0),(-0.56,-0.7,0.37),(-0.56,-0.94,1.2),(-0.45,-0.3,1.7),(-0.4,-0.2,1.725),(-0.3,-0.13,1.75),(0.25,-0.03,0.5),(0.25,-0.13,1.75),(-0.25,-0.13,1.75),(-0.25,-0.03,0.5),(0.25,-0.13,1.8),(0.25,-0.17,2.0),(0.25,-0.25,2.1),(0.25,-1.0,3.0),(-0.25,-1.0,3.0),(-0.25,-0.25,2.1),(-0.25,-0.17,2.0),(-0.25,-0.13,1.8),(0.3,-0.13,1.8),(0.4,-0.2,1.775),(0.45,-0.3,1.75),(0.56,-0.95,1.25),(0.48,-1.31,2.55),(0.3,-1.0,3.0),(0.3,-0.25,2.1),(0.3,-0.17,2.0),(0.3,-0.13,1.8),(-0.3,-0.13,1.8),(-0.4,-0.2,1.775),(-0.45,-0.3,1.75),(-0.56,-0.95,1.25),(-0.48,-1.31,2.55),(-0.3,-1.0,3.0),(-0.3,-0.25,2.1),(-0.3,-0.17,2.0),(-0.3,-0.13,1.8)]))),
                #  Nose 
                Shape(DEF='NoseShape1',
                  IS=IS(
                    connect=[
                    connect(nodeField='appearance',protoField='fuselageColor')]),
                  geometry=IndexedFaceSet(coordIndex=[0,1,2,3,-1,0,3,4,-1,0,4,5,6,-1,9,8,7,1,-1,7,2,1,-1,3,2,10,11,-1,4,3,11,12,-1,5,4,12,13,-1,2,7,15,10,-1,7,8,14,15,-1,11,10,16,17,-1,11,17,18,19,-1,10,20,21,16,-1,21,18,17,16,-1,19,6,5,13,12,11,-1,20,10,15,14,8,9,-1,6,22,23,24,25,26,27,9,-1,27,26,25,24,23,22,6,-1,0,6,9,1,-1,6,5,28,22,-1,28,29,23,22,-1,29,30,24,23,-1,8,9,27,33,-1,32,33,27,26,-1,31,32,26,25,-1,30,31,25,24,-1,8,33,32,31,30,29,28,5,-1,41,40,39,38,37,36,35,34,-1],creaseAngle=0.86,
                    coord=Coordinate(DEF='NoseCoord',point=[(0.3,-1.0,3.0),(-0.3,-1.0,3.0),(-0.1,-1.15,3.38),(0.1,-1.15,3.38),(0.20,-1.2,3.34),(0.25,-1.31,3.2),(0.48,-1.31,2.56),(-0.20,-1.2,3.34),(-0.25,-1.31,3.2),(-0.48,-1.31,2.56),(-0.025,-1.31,3.6),(0.025,-1.31,3.6),(0.115,-1.31,3.55),(0.18,-1.31,3.45),(-0.18,-1.31,3.45),(-0.115,-1.31,3.55),(-0.025,-1.5,3.55),(0.025,-1.5,3.55),(0.025,-1.555,3.2),(0.025,-1.31,3.2),(-0.025,-1.31,3.2),(-0.025,-1.555,3.2),(0.48,-1.635,2.56),(0.455,-1.66,2.56),(0.39,-1.675,2.56),(-0.39,-1.675,2.56),(-0.455,-1.66,2.56),(-0.48,-1.635,2.56),(0.25,-1.515,3.2),(0.225,-1.54,3.25),(0.16,-1.555,3.275),(-0.16,-1.555,3.275),(-0.225,-1.54,3.25),(-0.25,-1.515,3.2),(0.51,-1.635,2.15),(0.51,-1.925,2.15),(0.485,-1.975,2.15),(0.42,-2.0,2.15),(-0.42,-2.0,2.15),(-0.485,-1.975,2.15),(-0.51,-1.925,2.15),(-0.51,-1.635,2.15)]))),
                Transform(translation=(0.0,-2.865,0.0),
                  children=[
                  Shape(DEF='NoseShape2',
                    IS=IS(
                      connect=[
                      connect(nodeField='appearance',protoField='fuselageColor')]),
                    geometry=Extrusion(crossSection=[(0.11,-1.315),(0.175,-1.34),(0.2,-1.355),(0.2,-1.515),(0.175,-1.54),(0.11,-1.555),(-0.11,-1.555),(-0.175,-1.54),(-0.2,-1.515),(-0.2,-1.355),(-0.175,-1.34),(-0.11,-1.315),(0.11,-1.315)],scale=[(0.7,1.0),(0.7,1.0)],spine=[(0.0,0.0,3.2),(0.0,0.0,3.425)]))])]),
              #  Front Gun 
              Transform(translation=(0,4.25,-1.35),
                children=[
                Shape(DEF='FrontGunBaseShape',
                  IS=IS(
                    connect=[
                    connect(nodeField='appearance',protoField='fuselageColor')]),
                  geometry=Sphere(radius=0.28)),
                Transform(translation=(0.0,0.6,-0.05),
                  children=[
                  Shape(
                    appearance=Appearance(
                      material=Material(diffuseColor=(0.25,0.25,0.25))),
                    geometry=Cylinder(height=1.75,radius=0.05))])])]),
            #  Cockpit Back Wall 
            Transform(translation=(0,-0.575,-0.4),
              children=[
              Shape(DEF='CockpitBackWallShape',
                IS=IS(
                  connect=[
                  connect(nodeField='appearance',protoField='cockpitColor')]),
                geometry=Box(size=(1.05,1.1,0.1)))]),
            #  Cockpit Floor 
            Transform(translation=(0,-1.5,-1.8),
              children=[
              Shape(DEF='CockpitFloorShape',
                IS=IS(
                  connect=[
                  connect(nodeField='appearance',protoField='cockpitColor')]),
                geometry=Box(size=(0.9,0.1,2.5)))]),
            #  Back Seat 
            Transform(translation=(0,-1.2,-0.8),
              children=[
              Group(DEF='Seat',
                #  Seat Bottom 
                children=[
                Shape(
                  appearance=Appearance(DEF='SeatColor',
                    material=Material(diffuseColor=(0.5,0.5,0.0))),
                  geometry=Box(size=(1.0,0.4,0.8))),
                #  Seat Back 
                Transform(translation=(0,0.45,0.35),
                  children=[
                  Shape(
                    appearance=Appearance(USE='SeatColor'),
                    geometry=Box(size=(0.75,0.5,0.1))),
                  #  Side Wings & Head Rest 
                  Shape(
                    appearance=Appearance(
                      material=Material(diffuseColor=(0.6,0.6,0))),
                    geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,-1,0,4,3,8,9,5,-1,9,8,7,6,5,-1,0,5,6,1,-1,8,3,2,7,-1,14,13,12,11,10,-1,15,19,18,13,14,10,-1,15,16,17,18,19,-1,15,10,11,16,-1,13,18,17,12,-1,23,22,0,10,-1,25,24,21,20,-1,22,25,20,0,-1,24,23,10,21,-1,22,23,24,25,-1],
                      coord=Coordinate(point=[(0.375,0.25,-0.05),(0.375,-0.25,-0.15),(0.375,-0.25,0.05),(0.375,0.3,0.05),(0.375,0.28,0.0),(0.425,0.25,-0.05),(0.5,-0.25,-0.15),(0.5,-0.25,0.05),(0.425,0.3,0.05),(0.425,0.28,0.0),(-0.375,0.25,-0.05),(-0.375,-0.25,-0.15),(-0.375,-0.25,0.05),(-0.375,0.3,0.05),(-0.375,0.28,0.0),(-0.425,0.25,-0.05),(-0.5,-0.25,-0.15),(-0.5,-0.25,0.05),(-0.425,0.3,0.05),(-0.425,0.28,0.0),(0.375,0.25,0.05),(-0.375,0.25,0.05),(0.3,0.5,-0.05),(-0.3,0.5,-0.05),(-0.3,0.5,0.05),(0.3,0.5,0.05)])))])])]),
            #  Front Seat 
            Transform(translation=(0,-1.4,-2.0),
              children=[
              Group(USE='Seat')])]),
          #  Fuselage Bottom 
          Group(DEF='FuselageBottom',
            children=[
            Transform(translation=(-0.25,-0.25,0.0),
              children=[
              Shape(
                appearance=Appearance(DEF='Black',
                  material=Material(diffuseColor=(0.0,0.0,0.0))),
                geometry=Box(size=(0.5,0.1,0.5)))]),
            #  Bottom A/C Light 
            Transform(translation=(-1.0,-0.25,0.0),
              children=[
              Shape(
                appearance=Appearance(
                  material=Material(DEF='BottomLightColor',diffuseColor=(0.4,0.4,0.4))),
                geometry=Sphere(radius=0.04)),
              Shape(
                appearance=Appearance(
                  material=Material(diffuseColor=(0.1,0.1,0.1))),
                geometry=Cylinder(height=0.05,radius=0.06))]),
            #  Animation Clock 
            TimeSensor(DEF='BottomACLightClock',enabled=False,loop=True),
            #  Animation Path 
            ColorInterpolator(DEF='BottomLightColorPath',key=[0.0,0.5,0.5,1.0],keyValue=[(1.0,0.0,0.0),(1.0,0.0,0.0),(1.0,1.0,1.0),(1.0,1.0,1.0)])]),
          #  Cowling 
          Transform(DEF='Cowling',scale=(0.55,0.65,0.6),translation=(0.48,1.8,0.0),
            children=[
            Transform(rotation=(0,1,0,-1.57),
              children=[
              Shape(DEF='CowlingShape',
                IS=IS(
                  connect=[
                  connect(nodeField='appearance',protoField='cowlingColor')]),
                geometry=Extrusion(creaseAngle=0.8,crossSection=[(0.05,-0.75),(-0.05,-0.75),(-0.2,-0.65),(-0.35,-0.5),(-0.65,0.0),(-0.65,1.5),(-0.6,2.5),(-0.4,3.25),(0.0,4.0),(0.4,3.25),(0.6,2.5),(0.65,1.5),(0.65,0.0),(0.35,-0.5),(0.2,-0.65),(0.05,-0.75)],scale=[(1.0,1.0),(0.8,0.8),(0.65,0.65)],spine=[(0.0,0.0,0.0),(0.0,0.6,0.0),(0.0,1.0,0.0)]))]),
            #  Top A/C Light 
            Transform(translation=(-1.5,1.04,0.0),
              children=[
              Shape(
                appearance=Appearance(
                  material=Material(DEF='TopLightColor',diffuseColor=(0.4,0.4,0.4))),
                geometry=Sphere(radius=0.04)),
              Shape(
                appearance=Appearance(
                  material=Material(diffuseColor=(0.1,0.1,0.1))),
                geometry=Cylinder(height=0.05,radius=0.06))]),
            #  Animation Clock 
            TimeSensor(DEF='TopACLightClock',enabled=False,loop=True),
            #  Animation Path 
            ColorInterpolator(DEF='TopLightColorPath',key=[0.0,0.5,0.5,1.0],keyValue=[(1.0,0.0,0.0),(1.0,0.0,0.0),(1.0,1.0,1.0),(1.0,1.0,1.0)])]),
          #  Right Skid 
          Transform(rotation=(0,0,1,-1.57),translation=(0.75,-1,1.15),
            children=[
            Inline(url=["../../AircraftHelicopters/AH1SuperCobraUnitedStates/SkidRight.x3d","https://savage.nps.edu/Savage/AircraftHelicopters/AH1SuperCobraUnitedStates/SkidRight.x3d","../../AircraftHelicopters/AH1SuperCobraUnitedStates/SkidRight.wrl","https://savage.nps.edu/Savage/AircraftHelicopters/AH1SuperCobraUnitedStates/SkidRight.wrl"])]),
          #  Left Skid 
          Transform(rotation=(-0.71,0.71,0,-3.14),translation=(0.75,-1,-1.15),
            children=[
            Inline(url=["../../AircraftHelicopters/AH1SuperCobraUnitedStates/SkidLeft.x3d","https://savage.nps.edu/Savage/AircraftHelicopters/AH1SuperCobraUnitedStates/SkidLeft.x3d","../../AircraftHelicopters/AH1SuperCobraUnitedStates/SkidLeft.wrl","https://savage.nps.edu/Savage/AircraftHelicopters/AH1SuperCobraUnitedStates/SkidLeft.wrl"])]),
          #  Right Wing 
          Transform(rotation=(0,0.71,0.71,3.14),translation=(-1.0,0.5,0.6),
            children=[
            Group(DEF='RightWing',
              children=[
              Shape(DEF='RightWingShape',
                IS=IS(
                  connect=[
                  connect(nodeField='appearance',protoField='fuselageColor')]),
                geometry=Extrusion(crossSection=[(-4.2,0.0),(-4.1,0.02),(-4.0,0.04),(-3.9,0.045),(-3.82,0.04),(-2.0,0.0),(-3.82,-0.04),(-3.9,-0.045),(-4.0,-0.04),(-4.1,-0.02),(-4.2,0.0)],scale=[(0.475,1.0),(0.3,1.0)],spine=[(0.1,0.0,0.0),(0.0,1.8,0.0)])),
              #  End Wing Attachment 
              Transform(rotation=(1,0,0,3.14),translation=(-1.4,1.75,-0.15),
                children=[
                Shape(DEF='WingAttachmentShape',
                  IS=IS(
                    connect=[
                    connect(nodeField='appearance',protoField='fuselageColor')]),
                  geometry=Extrusion(crossSection=[(-0.1,0.0),(0.1,0.0),(0.1,-0.2),(-0.1,-0.2),(-0.1,0.0)],scale=[(0.9,0.9),(0.95,0.95),(1.0,1.0),(1.0,1.0),(0.5,0.5),(0.45,0.45),(0.4,0.4)],spine=[(0.0,0.0,0.0),(0.05,0.0,0.0),(0.1,0.0,0.0),(0.6,0.0,0.0),(1.0,0.0,0.0),(1.05,0.0,0.0),(1.1,0.0,0.0)]))]),
              #  Middle Wing Attachment 
              Transform(rotation=(1,0,0,3.14),translation=(-1.7,0.75,-0.15),
                children=[
                Shape(USE='WingAttachmentShape')])]),
            #  Right Rocket Pod 
            Transform(rotation=(0,0,1,1.57),translation=(-1,1.6,-0.5),
              children=[
              Inline(DEF='RocketPod',url=["../../AircraftHelicopters/AH1SuperCobraUnitedStates/RocketPod.x3d","https://savage.nps.edu/Savage/AircraftHelicopters/AH1SuperCobraUnitedStates/RocketPod.x3d","../../AircraftHelicopters/AH1SuperCobraUnitedStates/RocketPod.wrl","https://savage.nps.edu/Savage/AircraftHelicopters/AH1SuperCobraUnitedStates/RocketPod.wrl"])])]),
          #  Left Wing 
          Transform(rotation=(0,0.71,0.71,3.14),translation=(-1.0,0.5,-0.6),
            children=[
            Group(DEF='LeftWing',
              children=[
              Shape(DEF='LeftWingShape',
                IS=IS(
                  connect=[
                  connect(nodeField='appearance',protoField='fuselageColor')]),
                geometry=Extrusion(convex=False,crossSection=[(4.2,0.0),(4.1,-0.02),(4.0,-0.04),(3.9,-0.045),(3.82,-0.04),(2.0,0.0),(3.82,0.04),(3.9,0.045),(4.0,0.04),(4.1,0.02),(4.2,0.0)],scale=[(0.475,1.0),(0.3,1.0)],spine=[(0.1,-0.0,0.0),(0.0,-1.8,0.0)])),
              #  End Wing Attachment 
              Transform(rotation=(1,0,0,3.14),translation=(-1.4,-1.75,-0.15),
                children=[
                Shape(USE='WingAttachmentShape')]),
              #  Middle Wing Attachment 
              Transform(rotation=(1,0,0,3.14),translation=(-1.7,-0.75,-0.15),
                children=[
                Shape(USE='WingAttachmentShape')])]),
            #  Inline Left Rocket Pod 
            Transform(rotation=(0,0,1,1.57),translation=(-1,-1.6,-0.5),
              children=[
              Inline(USE='RocketPod')])]),
          #  Main Rotor 
          Transform(translation=(0,2.7,0),
            children=[
            ProtoInstance(DEF='MainRotor',name='FourBladeMainRotor')])]),
        ROUTE(fromField='status',fromNode='InFlightStatusScript',toField='set_loop',toNode='HeloFlyingAudioClip'),
        ROUTE(fromField='status',fromNode='InFlightStatusScript',toField='rotationOn',toNode='MainRotor'),
        ROUTE(fromField='status',fromNode='InFlightStatusScript',toField='rotationOn',toNode='TailRotor'),
        ROUTE(fromField='status',fromNode='InFlightStatusScript',toField='set_enabled',toNode='BottomACLightClock'),
        ROUTE(fromField='status',fromNode='InFlightStatusScript',toField='set_enabled',toNode='TopACLightClock'),
        ROUTE(fromField='fraction_changed',fromNode='BottomACLightClock',toField='set_fraction',toNode='BottomLightColorPath'),
        ROUTE(fromField='value_changed',fromNode='BottomLightColorPath',toField='set_emissiveColor',toNode='BottomLightColor'),
        ROUTE(fromField='fraction_changed',fromNode='TopACLightClock',toField='set_fraction',toNode='TopLightColorPath'),
        ROUTE(fromField='value_changed',fromNode='TopLightColorPath',toField='set_emissiveColor',toNode='TopLightColor')])),
    #  ================================================================================================================ 
    #  Example Helicopters 
    Background(skyColor=[(.4,.4,.6)]),
    Viewpoint(description='Select Helicopter',orientation=(0,1,0,1.57),position=(12,2.5,0)),
    Transform(translation=(0,6.5,0),
      children=[
      Billboard(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.8,0.8,0))),
          geometry=Text(string=["Select Example Helicopter Overall Paint Scheme"],
            fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"]))),
        Transform(translation=(0,-1.5,0),
          children=[
          Transform(translation=(-5,0,0),
            children=[
            TouchSensor(DEF='TOUCH_Green',description='touch for green material'),
            Shape(
              appearance=Appearance(
                material=Material(DEF='MATERIAL_Green',diffuseColor=(0,0.8,0))),
              geometry=Text(string=["Green"],
                fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"]))),
            Shape(
              geometry=Box(size=(2,1,.01)),
              appearance=Appearance(DEF='TransparentMaterial',
                material=Material(transparency=0.9)))]),
          Transform(
            children=[
            TouchSensor(DEF='TOUCH_Camouflage',description='touch for camoflage material'),
            Shape(
              appearance=Appearance(
                material=Material(DEF='MATERIAL_Camouflage',diffuseColor=(0.8,0,0))),
              geometry=Text(string=["Camouflage"],
                fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"]))),
            Shape(
              geometry=Box(size=(4,1,.01)),
              appearance=Appearance(USE='TransparentMaterial'))]),
          Transform(translation=(4,0,0),
            children=[
            TouchSensor(DEF='TOUCH_Grey',description='touch for grey material'),
            Shape(
              appearance=Appearance(
                material=Material(DEF='MATERIAL_Grey',diffuseColor=(0.8,0,0))),
              geometry=Text(string=["Grey"],
                fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"]))),
            Shape(
              geometry=Box(size=(1,1,0.01)),
              appearance=Appearance(USE='TransparentMaterial'))])])])]),
    Switch(DEF='EXAMPLE_SWITCH',whichChoice=0,
      children=[
      Transform(rotation=(0,1,0,1.57),
        children=[
        Inline(url=["ExampleGreenCobra.x3d","https://savage.nps.edu/Savage/AircraftHelicopters/AH1SuperCobraUnitedStates/ExampleGreenCobra.x3d","ExampleGreenCobra.wrl","https://savage.nps.edu/Savage/AircraftHelicopters/AH1SuperCobraUnitedStates/ExampleGreenCobra.wrl"])]),
      Transform(rotation=(0,1,0,1.57),
        children=[
        Inline(url=["ExampleCamouflageCobra.x3d","https://savage.nps.edu/Savage/AircraftHelicopters/AH1SuperCobraUnitedStates/ExampleCamouflageCobra.x3d","ExampleCamouflageCobra.wrl","https://savage.nps.edu/Savage/AircraftHelicopters/AH1SuperCobraUnitedStates/ExampleCamouflageCobra.wrl"])]),
      Transform(rotation=(0,1,0,1.57),
        children=[
        Inline(url=["ExampleGreyCobra.x3d","https://savage.nps.edu/Savage/AircraftHelicopters/AH1SuperCobraUnitedStates/ExampleGreyCobra.x3d","ExampleGreyCobra.wrl","https://savage.nps.edu/Savage/AircraftHelicopters/AH1SuperCobraUnitedStates/ExampleGreyCobra.wrl"])])]),
    Script(DEF='EXAMPLE_SELECTION',
      field=[
      field(accessType='inputOnly',name='touchedGreen',type='SFBool'),
      field(accessType='inputOnly',name='touchedCamouflage',type='SFBool'),
      field(accessType='inputOnly',name='touchedGrey',type='SFBool'),
      field(accessType='outputOnly',name='selection',type='SFInt32'),
      field(accessType='outputOnly',name='greenSelectionColor',type='SFColor'),
      field(accessType='outputOnly',name='camouflageSelectionColor',type='SFColor'),
      field(accessType='outputOnly',name='greySelectionColor',type='SFColor')]),
    ROUTE(fromField='isActive',fromNode='TOUCH_Green',toField='touchedGreen',toNode='EXAMPLE_SELECTION'),
    ROUTE(fromField='isActive',fromNode='TOUCH_Camouflage',toField='touchedCamouflage',toNode='EXAMPLE_SELECTION'),
    ROUTE(fromField='isActive',fromNode='TOUCH_Grey',toField='touchedGrey',toNode='EXAMPLE_SELECTION'),
    ROUTE(fromField='greenSelectionColor',fromNode='EXAMPLE_SELECTION',toField='diffuseColor',toNode='MATERIAL_Green'),
    ROUTE(fromField='camouflageSelectionColor',fromNode='EXAMPLE_SELECTION',toField='diffuseColor',toNode='MATERIAL_Camouflage'),
    ROUTE(fromField='greySelectionColor',fromNode='EXAMPLE_SELECTION',toField='diffuseColor',toNode='MATERIAL_Grey'),
    ROUTE(fromField='selection',fromNode='EXAMPLE_SELECTION',toField='whichChoice',toNode='EXAMPLE_SWITCH')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for SuperCobraPrototype.py")
