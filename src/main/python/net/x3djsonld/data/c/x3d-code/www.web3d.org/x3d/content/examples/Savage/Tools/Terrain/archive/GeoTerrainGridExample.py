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

newModel=X3D(version='3.0',profile='Immersive',
  head=head(
    children=[
    meta(content='GeoTerrainGridExample.x3d',name='title'),
    meta(content='Example scene demonstrating GeoTerrainGrid prototype.',name='description'),
    meta(content='Brian Hittner and Don Brutzman',name='creator'),
    meta(content='14 July 2003',name='created'),
    meta(content='23 July 2003',name='translated'),
    meta(content='24 September 2004',name='modified'),
    meta(content='under development',name='warning'),
    meta(content='http://www.geovrml.org',name='reference'),
    meta(content='3D terrain, GeoElevationGrid extension',name='subject'),
    meta(content='https://savage.nps.edu/Savage/Tools/Terrain/GeoTerrainGridExample.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(name='license',content='../../license.html')]),
  Scene=Scene(
    children=[
    NavigationInfo(speed=5000.0,type=["WALK","ANY"]),
    GeoOrigin(DEF='ORIGIN',geoCoords=(29.0,52.0,0.0)),
    GeoViewpoint(DEF='AnimatedGeoViewpoint',description='GeoTerrainGrid example',orientation=(1.0,0.0,0.0,-0.5),position=(29.7,52.65,2000),
      geoOrigin=GeoOrigin(USE='ORIGIN')),
    Group(DEF='SavageTerrainPreprocessedInlines',
      children=[
      Inline(url=["../../Locations/SouthernCaliforniaBorder/N2942E5237DTED2.wrl"
"../../Locations/SouthernCaliforniaBorder/N2942E5237DTED2.x3d"
"https://savage.nps.edu/Savage/Locations/SouthernCaliforniaBorder/N2942E5237DTED2.wrl"
"https://savage.nps.edu/Savage/Locations/SouthernCaliforniaBorder/N2942E5237DTED2.x3d"]),
      # fix other urls to include http addresses too!
      Inline(url=["../../Locations/SouthernCaliforniaBorder/N2942E5238DTED2.wrl"
"../../Locations/SouthernCaliforniaBorder/N2942E5238DTED2.x3d"]),
      Inline(url=["../../Locations/SouthernCaliforniaBorder/N2942E5239DTED2.wrl"
"../../Locations/SouthernCaliforniaBorder/N2942E5239DTED2.x3d"]),
      Inline(url=["../../Locations/SouthernCaliforniaBorder/N2942E5240DTED2.wrl"
"../../Locations/SouthernCaliforniaBorder/N2942E5240DTED2.x3d"]),
      Inline(url=["../../Locations/SouthernCaliforniaBorder/N2943E5237DTED2.wrl"
"../../Locations/SouthernCaliforniaBorder/N2943E5237DTED2.x3d"]),
      Inline(url=["../../Locations/SouthernCaliforniaBorder/N2943E5238DTED2.wrl"
"../../Locations/SouthernCaliforniaBorder/N2943E5238DTED2.x3d"]),
      Inline(url=["../../Locations/SouthernCaliforniaBorder/N2943E5239DTED2.wrl"
"../../Locations/SouthernCaliforniaBorder/N2943E5239DTED2.x3d"]),
      Inline(url=["../../Locations/SouthernCaliforniaBorder/N2943E5240DTED2.wrl"
"../../Locations/SouthernCaliforniaBorder/N2943E5240DTED2.x3d"]),
      Inline(url=["../../Locations/SouthernCaliforniaBorder/N2944E5237DTED2.wrl"
"../../Locations/SouthernCaliforniaBorder/N2944E5237DTED2.x3d"]),
      Inline(url=["../../Locations/SouthernCaliforniaBorder/N2944E5238DTED2.wrl"
"../../Locations/SouthernCaliforniaBorder/N2944E5238DTED2.x3d"]),
      Inline(url=["../../Locations/SouthernCaliforniaBorder/N2944E5239DTED2.wrl"
"../../Locations/SouthernCaliforniaBorder/N2944E5239DTED2.x3d"]),
      Inline(url=["../../Locations/SouthernCaliforniaBorder/N2944E5240DTED2.wrl"
"../../Locations/SouthernCaliforniaBorder/N2944E5240DTED2.x3d"]),
      Inline(url=["../../Locations/SouthernCaliforniaBorder/N2945E5237DTED2.wrl"
"../../Locations/SouthernCaliforniaBorder/N2945E5237DTED2.x3d"]),
      Inline(url=["../../Locations/SouthernCaliforniaBorder/N2945E5238DTED2.wrl"
"../../Locations/SouthernCaliforniaBorder/N2945E5238DTED2.x3d"]),
      Inline(url=["../../Locations/SouthernCaliforniaBorder/N2945E5239DTED2.wrl"
"../../Locations/SouthernCaliforniaBorder/N2945E5239DTED2.x3d"]),
      Inline(url=["../../Locations/SouthernCaliforniaBorder/N2945E5240DTED2.wrl"
"../../Locations/SouthernCaliforniaBorder/N2945E5240DTED2.x3d"])]),
    GeoLocation(DEF='UnitLocation',geoCoords=(29.76272,52.67797,632.0),
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      children=[
      Transform(rotation=(0,1,0,3.92699),translation=(0,3,0),
        children=[
        Inline(url=["../../GroundVehicles/M1A1/M1A1.wrl"
"../../GroundVehicles/M1A1/M1A1.x3d"
"https://savage.nps.edu/Savage/GroundVehicles/M1A1/M1A1.wrl"
"https://savage.nps.edu/Savage/GroundVehicles/M1A1/M1A1.x3d"])])]),
    GeoPositionInterpolator(DEF='GPI',key=[0.0,0.99],keyValue=[(29.711865,52.62712,0.0),(29.762711,52.677966,0.0)],
      geoOrigin=GeoOrigin(USE='ORIGIN')),
    TimeSensor(DEF='Clock',cycleInterval=100.0,loop=True),
    # Warning: VRML97-style scripting, not X3D Scene Authoring Interface (SAI)
    Script(DEF='PositionTester',mustEvaluate=True,url=["VRMLTerrain.jar#positionTest.class"
"https://savage.nps.edu/Savage/Tools/Terrain/VRMLTerrain.jar#positionTest.class"],
      field=[
      field(accessType='inputOnly',name='set_position',type='SFString'),
      field(accessType='outputOnly',name='rotation_changed',type='SFRotation'),
      field(accessType='outputOnly',name='position_changed',type='SFString'),
      field(accessType='outputOnly',name='positionHigh_changed',type='SFString')]),
    ROUTE(fromField='fraction_changed',fromNode='Clock',toField='set_fraction',toNode='GPI'),
    ROUTE(fromField='geovalue_changed',fromNode='GPI',toField='set_position',toNode='PositionTester'),
    ROUTE(fromField='position_changed',fromNode='PositionTester',toField='set_geoCoords',toNode='UnitLocation'),
    ROUTE(fromField='positionHigh_changed',fromNode='PositionTester',toField='set_position',toNode='AnimatedGeoViewpoint')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for GeoTerrainGridExample.py")
