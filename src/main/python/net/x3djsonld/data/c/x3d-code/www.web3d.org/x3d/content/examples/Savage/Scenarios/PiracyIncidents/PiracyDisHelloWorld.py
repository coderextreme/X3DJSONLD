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
    component(level=1,name='DIS'),
    meta(content='PiracyDisHelloWorld.x3d',name='title'),
    meta(content='Counter-piracy patrol using DIS networking protocol, with animation provided by separate Java classes for patrolling helicopter and pirate skiff. Directions: "ant run.PiracyScenario" invokes Java programs which send animation PDUs.',name='description'),
    meta(content='Chad R Hutchins',name='creator'),
    meta(content='25 March 2012',name='created'),
    meta(content='8 November 2012',name='modified'),
    meta(content='build.xml',name='reference'),
    meta(content='javadoc/index.html',name='reference'),
    meta(content='http://www.3dtexture.net/img-blue-water-ocean-texture-250.htm',name='reference'),
    meta(content='Blue_water_ocean_texture.jpg',name='Image'),
    meta(content='Piracy Distributed Interactive Simulation',name='subject'),
    meta(content='https://savage.nps.edu/Savage/Scenarios/Piracy/PiracyDisHelloWorld.x3d',name='identifier'),
    meta(content='X3D-Edit, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    #  Viewpoints 
    children=[
    Viewpoint(description='Starting Point',orientation=(1,0,0,-0.1636),position=(0,10,40)),
    Viewpoint(description='Looking from -80 meters out',fieldOfView=1.3963,orientation=(-0.0017,0.9983,0.0584,3.0829),position=(0,10,-80)),
    Viewpoint(description='UAV View',fieldOfView=1.57079,orientation=(0,0.7415,0.671,-3.1416),position=(0,75,0)),
    #  Ocean 
    Transform(DEF='OceanTransform',translation=(0,0.5,0),
      children=[
      Shape(
        geometry=Box(size=(600,1,500)),
        appearance=Appearance(
          material=Material(diffuseColor=(0.380392,0.607843,1)),
          texture=ImageTexture(url=["Blue_water_ocean_texture.jpg","https://savage.nps.edu/Savage/ShipsCivilian/Piracy/Blue_water_ocean_texture.jpg"])))]),
    #  Ocean interpolator, time sensor, and route 
    PositionInterpolator(DEF='OceanMover',key=[0,0.2,0.4,0.6,0.8,0.9,1],keyValue=[(0,-0.9,0),(0,-0.8,0),(0,-1,0),(0,-0.9,0),(0,-0.8,0),(0,-1,0),(0,-0.9,0)]),
    TimeSensor(DEF='OceanTimer',cycleInterval=7,loop=True),
    ROUTE(fromField='value_changed',fromNode='OceanMover',toField='set_translation',toNode='OceanTransform'),
    ROUTE(fromField='fraction_changed',fromNode='OceanTimer',toField='set_fraction',toNode='OceanMover'),
    #  Entities 
    EspduTransform(address='239.1.2.3',entityID=1,marking='PirateSkiff',networkMode='networkReader',port=62040,translation=(0,1,0),
      children=[
      Inline(DEF='PirateSkiff',url=["../../ShipsCivilian/Piracy/PirateMotherSkiff.x3d","https://savage.nps.edu/Savage/ShipsCivilian/Piracy/PirateMotherSkiff.x3d"])]),
    EspduTransform(address='239.1.2.3',entityID=2,marking='Helicopter',networkMode='networkReader',port=62040,translation=(0,10,0),
      children=[
      Inline(DEF='Helicopter',url=["../../AircraftHelicopters/SH60SeahawkUnitedStates/SH60Seahawk.x3d","https://savage.nps.edu/Savage/AircraftHelicopters/SH60SeahawkUnitedStates/SH60Seahawk.x3d"])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for PiracyDisHelloWorld.py")
