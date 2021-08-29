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
    component(level=1,name='Geometry2D'),
    meta(content='MH53ESeaDragon.x3d',name='title'),
    meta(content="MH-53E Sea Dragon constructed with inlines of the various parts including fuselage, engines, EAPS, main and tail rotor heads. Notice the 5 degree forward tilt of the main rotor head. Viewpoints and background borrowed from Capt Allen A. Harper's CH-46 model.",name='description'),
    meta(content='LT Terry D. Norbraten, USN',name='creator'),
    meta(content='19 March 2004',name='created'),
    meta(content='20 February 2010',name='modified'),
    meta(content='http://www.fas.org/man/dod-101/sys/ac/h-53.htm',name='reference'),
    meta(content='http://www.fas.org/man/dod-101/sys/ac/mh-53e-wasp-dr5.jpg http://images.google.com/imgres?imgurl=gra.midco.net/mlgould/Helicopters/MH-53E%2520Sea%2520Dragon.jpg&imgrefurl=http://gra.midco.net/mlgould/M-R.html&h=226&w=332&sz=32&tbnid=ICDN8Yoa8mAJ:&tbnh=78&tbnw=114&prev=/images%3Fq%3DMH-53E%26hl%3Den%26lr%3D%26ie%3DUTF-8%26oe%3DUTF-8%26c2coff%3D1 http://www.history.navy.mil/planes/mh-53e.jpg http://digilander.libero.it/31ATSG/MH-53E%20163057-41.jpg http://www.ndu.edu/nwc/nwcCLIPART/US_NAVY/Equipment/Helicopters/MH-53E(Sea-Dragon)/MH53ESeaDragon01.jpg',name='Image'),
    meta(content='Sikorsky MH-53E Sea Dragon Multi-mission helicopter for the U.S. Navy.',name='subject'),
    meta(content='https://savage.nps.edu/Savage/AircraftHelicopters/MH53ESeaDragonUnitedStates/MH53ESeaDragon.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Group(
      children=[
      Transform(DEF='No3EAPS',rotation=(0,1,0,3.1416),scale=(0.8,0.8,0.8),translation=(-0.97,0.75,2.3),
        children=[
        Transform(rotation=(1,0,0,1.571),
          children=[
          Inline(DEF='EAPS',url=["MH53EEAPS.x3d","https://savage.nps.edu/Savage/AircraftHelicopters/MH53ESeaDragonUnitedStates/MH53EEAPS.x3d","MH53EEAPS.wrl","https://savage.nps.edu/Savage/AircraftHelicopters/MH53ESeaDragonUnitedStates/MH53EEAPS.wrl"])])]),
      Transform(DEF='No2EAPS',rotation=(1,0,0,-1.571),scale=(0.75,0.75,0.75),translation=(0.43,1.46,0.75),
        children=[
        Transform(rotation=(0,0,1,0.349),
          children=[
          Inline(USE='EAPS')])]),
      Transform(DEF='No1EAPS',rotation=(1,0,0,3.1416),scale=(0.8,0.8,0.8),translation=(0.97,0.9,2.3),
        children=[
        Transform(rotation=(1,0,0,1.571),
          children=[
          Inline(USE='EAPS')])]),
      Transform(DEF='MainRotor',rotation=(1,0,0,0.087),translation=(0,2.28,0.5),
        children=[
        Inline(DEF='MainRotorHead',url=["MH53EMainRotorHead.x3d","https://savage.nps.edu/Savage/AircraftHelicopters/MH53ESeaDragonUnitedStates/MH53EMainRotorHead.x3d","MH53EMainRotorHead.wrl","https://savage.nps.edu/Savage/AircraftHelicopters/MH53ESeaDragonUnitedStates/MH53EMainRotorHead.wrl"]),
        TimeSensor(DEF='Clock1',cycleInterval=.04,loop=True),
        OrientationInterpolator(DEF='MainRotorPath',key=[0.0,0.50,1.0],keyValue=[(0.0,1.0,0.0,0.0),(0.0,1.0,0.0,3.1416),(0.0,1.0,0.0,6.283)])]),
      ROUTE(fromField='fraction_changed',fromNode='Clock1',toField='set_fraction',toNode='MainRotorPath'),
      ROUTE(fromField='value_changed',fromNode='MainRotorPath',toField='set_rotation',toNode='MainRotor'),
      Inline(DEF='Fuselage',url=["MH53EFuselage.x3d","https://savage.nps.edu/Savage/AircraftHelicopters/MH53ESeaDragonUnitedStates/MH53EFuselage.x3d","MH53EFuselage.wrl","https://savage.nps.edu/Savage/AircraftHelicopters/MH53ESeaDragonUnitedStates/MH53EFuselage.wrl"]),
      Transform(DEF='No1InputDriveShaft',rotation=(0,0,1,-1.92),translation=(0.7,1.1,1.2),
        children=[
        Transform(rotation=(1,0,0,0.785),
          children=[
          Shape(DEF='Shaft',
            appearance=Appearance(
              material=Material(diffuseColor=(.208,.388,.463),emissiveColor=(.0471,.0863,0))),
            geometry=Cylinder(height=0.82,radius=.07))])]),
      Transform(DEF='No3InputDriveShaft',rotation=(0,0,1,1.92),translation=(-0.7,1.1,1.2),
        children=[
        Transform(rotation=(1,0,0,0.785),
          children=[
          Shape(USE='Shaft')])]),
      Transform(DEF='No1Engine',rotation=(0,0,1,0.785),scale=(1,1.1,0.8),translation=(2,-0.35,0.65),
        children=[
        Inline(DEF='Engine',url=["MH53EEngine.x3d","https://savage.nps.edu/Savage/AircraftHelicopters/MH53ESeaDragonUnitedStates/MH53EEngine.x3d","MH53EEngine.wrl","https://savage.nps.edu/Savage/AircraftHelicopters/MH53ESeaDragonUnitedStates/MH53EEngine.wrl"])]),
      Transform(DEF='No3Engine',rotation=(0,0,1,-0.785),scale=(1,1.1,0.8),translation=(-2.43,0.1,0.65),
        children=[
        Inline(USE='Engine')]),
      Transform(DEF='No2EngineAccess',rotation=(0,1,0,1.571),translation=(0.52,1.3,-0.9),
        children=[
        Transform(rotation=(0,0,1,1.571),
          children=[
          Shape(DEF='Panel',
            appearance=Appearance(
              material=Material(diffuseColor=(0.2,0.3,0.4),emissiveColor=(0.05,0.09,0))),
            geometry=Rectangle2D(size=(0.7,1.3)))])]),
      Transform(DEF='No2EngineExhaust',rotation=(0,1,0,-0.349),scale=(1,0.9,1),translation=(0.3,0.42,-1.6),
        children=[
        Shape(DEF='Duct',
          appearance=Appearance(
            material=Material(diffuseColor=(.208,.388,.463),emissiveColor=(.0471,.0863,0))),
          geometry=Extrusion(creaseAngle=1.05,crossSection=[(0,.8),(0,-.2),(-.191342,-.16194),(-.353553,-.053553),(-.46194,.108658),(-.5,.3),(-.46194,.491342),(-.353553,.653553),(-.191342,.76194),(0,.8)],endCap=False,scale=[(.7,.7),(.6791,.6791),(.6143,.6143),(.6,.6),(.595,.595),(.5,.5),(.6,.6)],solid=False,spine=[(0,1.1486,-.2),(0,1.1486,-.3),(.00443504,1.1486,-.72152),(.00139496,1.1486,-.85279),(.00839493,1.1486,-.867751),(.1,1.1486,-1.1),(.198605,1.1486,-1.15)]))]),
      Transform(DEF='PortSponson',scale=(1,0.8,1),translation=(1.555,-1.05,-1.2),
        children=[
        Inline(DEF='Sponson',url=["MH53ESponson.x3d","https://savage.nps.edu/Savage/AircraftHelicopters/MH53ESeaDragonUnitedStates/MH53ESponson.x3d","MH53ESponson.wrl","https://savage.nps.edu/Savage/AircraftHelicopters/MH53ESeaDragonUnitedStates/MH53ESponson.wrl"])]),
      Transform(DEF='StarboardSponson',scale=(1,0.8,1),translation=(-1.55,-1.05,-1.2),
        children=[
        Inline(USE='Sponson')]),
      Transform(DEF='RefuelingProbe',rotation=(1,0,0,1.571),translation=(-0.5,-0.5,4.9),
        children=[
        Shape(DEF='Probe',
          appearance=Appearance(
            material=Material(diffuseColor=(.208,.388,.463),emissiveColor=(.0471,.0863,0))),
          geometry=Cylinder(height=1.8,radius=0.1)),
        Transform(scale=(1,1.6,1),translation=(0,0.89,0),
          children=[
          Shape(DEF='Plug',
            appearance=Appearance(
              material=Material(),),
            geometry=Sphere(radius=0.09))])]),
      Transform(DEF='TripodGear',translation=(0,-0.45,0),
        children=[
        Inline(DEF='LandingGear',url=["MH53ELandingGear.x3d","https://savage.nps.edu/Savage/AircraftHelicopters/MH53ESeaDragonUnitedStates/MH53ELandingGear.x3d","MH53ELandingGear.wrl","https://savage.nps.edu/Savage/AircraftHelicopters/MH53ESeaDragonUnitedStates/MH53ELandingGear.wrl"])]),
      Transform(rotation=(0,0,1,-1.92),scale=(0.25,0.25,0.25),translation=(1.3,3.25,-10.8),
        children=[
        Transform(DEF='TailRotorHead',
          children=[
          Inline(DEF='TailRotor',url=["MH53ETailRotorHead.x3d","https://savage.nps.edu/Savage/AircraftHelicopters/MH53ESeaDragonUnitedStates/MH53ETailRotorHead.x3d","MH53ETailRotorHead.wrl","https://savage.nps.edu/Savage/AircraftHelicopters/MH53ESeaDragonUnitedStates/MH53ETailRotorHead.wrl"]),
          TimeSensor(DEF='Clock2',cycleInterval=0.15,loop=True),
          OrientationInterpolator(DEF='TailRotorPath',key=[0.0,0.50,1.0],keyValue=[(0.0,1.0,0.0,0.0),(0.0,1.0,0.0,-3.1416),(0.0,1.0,0.0,-6.283)])]),
        ROUTE(fromField='fraction_changed',fromNode='Clock2',toField='set_fraction',toNode='TailRotorPath'),
        ROUTE(fromField='value_changed',fromNode='TailRotorPath',toField='set_rotation',toNode='TailRotorHead')])]),
    Group(DEF='Viewpoints',
      children=[
      Viewpoint(description='MH-53E Right wing, level',orientation=(0,1,0,-1.57),position=(-15,0,0)),
      Viewpoint(description='MH-53E Bottom, up',orientation=(1,0,0,1.57),position=(0,-15,-1)),
      Viewpoint(description='MH-53E Left wing, level',orientation=(0,1,0,1.57),position=(15,0,0)),
      Viewpoint(description='MH-53E Rear, level',orientation=(0,1,0,3.14),position=(0,0,-25)),
      Transform(rotation=(0,0,1,3.1416),
        children=[
        Viewpoint(description='MH-53E Rear, angle down',orientation=(1,0,0,2.356),position=(0,-20,-20))]),
      Viewpoint(description='MH-53E Top, down',orientation=(1,0,0,-1.57),position=(0,25,0)),
      Viewpoint(description='MH-53E Front, level',position=(0,0,15)),
      Viewpoint(description='MH-53E Front, angle down',orientation=(1,0,0,-0.78),position=(0,20,20)),
      Viewpoint(description='MH-53E Left, level, front @ 45',orientation=(0,1,0,0.785),position=(10,1,10)),
      Viewpoint(description='MH-53E Right, level, front @ 45',orientation=(0,-1,0,0.785),position=(-10,1,10)),
      Viewpoint(description='MH-53E Right, level, rear @ 45',orientation=(0,-1,0,2.356),position=(-10,1,-10)),
      Viewpoint(description='MH-53E Left, level, rear @ 45',orientation=(0,1,0,2.356),position=(10,1,-10))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for MH53ESeaDragon.py")
