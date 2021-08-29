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
    meta(content='XdvExerciseScenario.x3d',name='title'),
    meta(content='Master scene for XMSF DCEE Viewer (XDV) Exercise at JFCOM/ODU, Chesapeake Virginia, July 2003. XMSF = Extensible Modeling and Simulation Framework, DCEE = Distributed Continuous Exercise Environment, JFCOM = Joint Forces Command, ODU = Old Dominion University.',name='description'),
    meta(content='Don Brutzman and Brian Hittner',name='creator'),
    meta(content='23 July 2003',name='created'),
    meta(content='9 July 2018',name='modified'),
    meta(content='under development',name='warning'),
    meta(content='https://savage.nps.edu/Savage/Scenarios/JfcomDceeExerciseJuly2003/XdvExerciseScenario.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Switch(DEF='TerrainSelector',whichChoice=0,
      children=[
      Group(DEF='SavageTerrainPreprocessedInlines',
        children=[
        Inline(url=["../../Locations/SouthernCaliforniaBorder/N2942E5237DTED2.x3d","../../Locations/SouthernCaliforniaBorder/N2942E5237DTED2.wrl","https://savage.nps.edu/Savage/Locations/SouthernCaliforniaBorder/N2942E5237DTED2.x3d","https://savage.nps.edu/Savage/Locations/SouthernCaliforniaBorder/N2942E5237DTED2.wrl"]),
        Inline(url=["../../Locations/SouthernCaliforniaBorder/N2942E5238DTED2.x3d","../../Locations/SouthernCaliforniaBorder/N2942E5238DTED2.wrl","https://savage.nps.edu/Savage/Locations/SouthernCaliforniaBorder/N2942E5238DTED2.x3d","https://savage.nps.edu/Savage/Locations/SouthernCaliforniaBorder/N2942E5238DTED2.wrl"]),
        Inline(url=["../../Locations/SouthernCaliforniaBorder/N2942E5239DTED2.x3d","../../Locations/SouthernCaliforniaBorder/N2942E5239DTED2.wrl","https://savage.nps.edu/Savage/Locations/SouthernCaliforniaBorder/N2942E5239DTED2.x3d","https://savage.nps.edu/Savage/Locations/SouthernCaliforniaBorder/N2942E5239DTED2.wrl"]),
        Inline(url=["../../Locations/SouthernCaliforniaBorder/N2942E5240DTED2.x3d","../../Locations/SouthernCaliforniaBorder/N2942E5240DTED2.wrl","https://savage.nps.edu/Savage/Locations/SouthernCaliforniaBorder/N2942E5240DTED2.x3d","https://savage.nps.edu/Savage/Locations/SouthernCaliforniaBorder/N2942E5240DTED2.wrl"]),
        Inline(url=["../../Locations/SouthernCaliforniaBorder/N2943E5237DTED2.x3d","../../Locations/SouthernCaliforniaBorder/N2943E5237DTED2.wrl","https://savage.nps.edu/Savage/Locations/SouthernCaliforniaBorder/N2943E5237DTED2.x3d","https://savage.nps.edu/Savage/Locations/SouthernCaliforniaBorder/N2943E5237DTED2.wrl"]),
        Inline(url=["../../Locations/SouthernCaliforniaBorder/N2943E5238DTED2.x3d","../../Locations/SouthernCaliforniaBorder/N2943E5238DTED2.wrl","https://savage.nps.edu/Savage/Locations/SouthernCaliforniaBorder/N2943E5238DTED2.x3d","https://savage.nps.edu/Savage/Locations/SouthernCaliforniaBorder/N2943E5238DTED2.wrl"]),
        Inline(url=["../../Locations/SouthernCaliforniaBorder/N2943E5239DTED2.x3d","../../Locations/SouthernCaliforniaBorder/N2943E5239DTED2.wrl","https://savage.nps.edu/Savage/Locations/SouthernCaliforniaBorder/N2943E5239DTED2.x3d","https://savage.nps.edu/Savage/Locations/SouthernCaliforniaBorder/N2943E5239DTED2.wrl"]),
        Inline(url=["../../Locations/SouthernCaliforniaBorder/N2943E5240DTED2.x3d","../../Locations/SouthernCaliforniaBorder/N2943E5240DTED2.wrl","https://savage.nps.edu/Savage/Locations/SouthernCaliforniaBorder/N2943E5240DTED2.x3d","https://savage.nps.edu/Savage/Locations/SouthernCaliforniaBorder/N2943E5240DTED2.wrl"]),
        Inline(url=["../../Locations/SouthernCaliforniaBorder/N2944E5237DTED2.x3d","../../Locations/SouthernCaliforniaBorder/N2944E5237DTED2.wrl","https://savage.nps.edu/Savage/Locations/SouthernCaliforniaBorder/N2944E5237DTED2.x3d","https://savage.nps.edu/Savage/Locations/SouthernCaliforniaBorder/N2944E5237DTED2.wrl"]),
        Inline(url=["../../Locations/SouthernCaliforniaBorder/N2944E5238DTED2.x3d","../../Locations/SouthernCaliforniaBorder/N2944E5238DTED2.wrl","https://savage.nps.edu/Savage/Locations/SouthernCaliforniaBorder/N2944E5238DTED2.x3d","https://savage.nps.edu/Savage/Locations/SouthernCaliforniaBorder/N2944E5238DTED2.wrl"]),
        Inline(url=["../../Locations/SouthernCaliforniaBorder/N2944E5239DTED2.x3d","../../Locations/SouthernCaliforniaBorder/N2944E5239DTED2.wrl","https://savage.nps.edu/Savage/Locations/SouthernCaliforniaBorder/N2944E5239DTED2.x3d","https://savage.nps.edu/Savage/Locations/SouthernCaliforniaBorder/N2944E5239DTED2.wrl"]),
        Inline(url=["../../Locations/SouthernCaliforniaBorder/N2944E5240DTED2.x3d","../../Locations/SouthernCaliforniaBorder/N2944E5240DTED2.wrl","https://savage.nps.edu/Savage/Locations/SouthernCaliforniaBorder/N2944E5240DTED2.x3d","https://savage.nps.edu/Savage/Locations/SouthernCaliforniaBorder/N2944E5240DTED2.wrl"]),
        Inline(url=["../../Locations/SouthernCaliforniaBorder/N2945E5237DTED2.x3d","../../Locations/SouthernCaliforniaBorder/N2945E5237DTED2.wrl","https://savage.nps.edu/Savage/Locations/SouthernCaliforniaBorder/N2945E5237DTED2.x3d","https://savage.nps.edu/Savage/Locations/SouthernCaliforniaBorder/N2945E5237DTED2.wrl"]),
        Inline(url=["../../Locations/SouthernCaliforniaBorder/N2945E5238DTED2.x3d","../../Locations/SouthernCaliforniaBorder/N2945E5238DTED2.wrl","https://savage.nps.edu/Savage/Locations/SouthernCaliforniaBorder/N2945E5238DTED2.x3d","https://savage.nps.edu/Savage/Locations/SouthernCaliforniaBorder/N2945E5238DTED2.wrl"]),
        Inline(url=["../../Locations/SouthernCaliforniaBorder/N2945E5239DTED2.x3d","../../Locations/SouthernCaliforniaBorder/N2945E5239DTED2.wrl","https://savage.nps.edu/Savage/Locations/SouthernCaliforniaBorder/N2945E5239DTED2.x3d","https://savage.nps.edu/Savage/Locations/SouthernCaliforniaBorder/N2945E5239DTED2.wrl"]),
        Inline(url=["../../Locations/SouthernCaliforniaBorder/N2945E5240DTED2.x3d","../../Locations/SouthernCaliforniaBorder/N2945E5240DTED2.wrl","https://savage.nps.edu/Savage/Locations/SouthernCaliforniaBorder/N2945E5240DTED2.x3d","https://savage.nps.edu/Savage/Locations/SouthernCaliforniaBorder/N2945E5240DTED2.wrl"])]),
      Group(DEF='TerrainServerQueryInlines',
        #  http-ized query to terrain server (same functionality as globe interface click query) which provokes terrain server .x3d or .wrl response 
        ),
      Group(DEF='TerrainWebServiceQueryInlines',
        #  Identical terrain-server queries, but first mediated by Web services to (a) ask for what is there, then (b) query for actual terrain. 
        )]),
    #  ==================== 
    Group(DEF='ExampleEntityTemplate',
      children=[
      GeoLocation(DEF='EntityGeoLocation',
        geoOrigin=GeoOrigin(DEF='LocalGeoOrigin',geoCoords=(29.0,52.0,0.0)),
        children=[
        Transform(DEF='EntityOrientation',
          children=[
          Inline(DEF='EntityModelFromSavage',url=["../../GroundVehicles/M1A1/M1A1.x3d","https://savage.nps.edu/Savage/Scenarios/JfcomDceeExerciseJuly2003/../../GroundVehicles/M1A1/M1A1.x3d","../../GroundVehicles/M1A1/M1A1.wrl","https://savage.nps.edu/Savage/Scenarios/JfcomDceeExerciseJuly2003/../../GroundVehicles/M1A1/M1A1.wrl"])])]),
      GeoViewpoint(DEF='LocalTestView',description='local entity moving?',
        geoOrigin=GeoOrigin(USE='LocalGeoOrigin')),
      EspduTransform(DEF='EntityEspdu',address='224.2.181.145',entityID=2,marking='EspduTrans',port=62040,readInterval=10,
        #  Can no longer put DIS entities as children when they are georeferenced, due to insufficient floating-point precision on Transform node 
        #  Nevertheless, we can still use EspduTransform as our network reader, for this entity, and then send double-precision translation (and single-precision rotation) to georeferenced nodes. 
        children=[
        Shape(
          geometry=Text(string=["EspduTransform"],
            fontStyle=FontStyle(DEF='FontJustifyMiddle',justify=["MIDDLE","MIDDLE"])),
          appearance=Appearance(
            material=Material(diffuseColor=(0,0.6,0.6))))]),
      ROUTE(fromField='geoCoords_changed',fromNode='EntityEspdu',toField='geoCoords',toNode='EntityGeoLocation'),
      ROUTE(fromField='geoCoords_changed',fromNode='EntityEspdu',toField='set_position',toNode='LocalTestView'),
      ROUTE(fromField='rotation',fromNode='EntityEspdu',toField='rotation',toNode='EntityOrientation'),
      ROUTE(fromField='rotation',fromNode='EntityEspdu',toField='set_orientation',toNode='LocalTestView')]),
    #  ==================== 
    Group(DEF='HlaToDisBridgeListener',
      children=[
      EspduTransform(applicationID=2,entityID=325,marking='HlaListener',networkMode='networkReader',port=62040,siteID=106)]),
    Group(DEF='CreateNewEntityPrototype')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for XdvExerciseScenario.py")
