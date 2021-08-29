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
    component(level=1,name='Geospatial'),
    meta(content='DTEDMultiGrid.x3d',name='title'),
    meta(content='Example of a tank driving across multiple GeoTerrainGrids',name='description'),
    meta(content='Brian Hittner, CPT, U.S.A.',name='creator'),
    meta(content='Xeena VRML importer with significant manual corrections',name='translator'),
    meta(content='10 October 2003',name='created'),
    meta(content='10 October 2003',name='translated'),
    meta(content='9 July 2018',name='modified'),
    meta(content='find or reconsitute .x3d terrain files',name='TODO'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='https://savage.nps.edu/Savage/Tools/Terrain/DTEDMultiGrid.x3d',name='identifier'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    ExternProtoDeclare(name='GeoLocation3',url=["GeoLocation3.x3d#GeoLocation3","https://savage.nps.edu/Savage/Tools/Terrain/GeoLocation3.x3d#GeoLocation3","GeoLocation3.wrl#GeoLocation3","https://savage.nps.edu/Savage/Tools/Terrain/GeoLocation3.wrl#GeoLocation3"],
      field=[
      field(accessType='initializeOnly',name='geoOrigin',type='SFNode'),
      field(accessType='initializeOnly',name='geoSystem',type='MFString'),
      field(accessType='initializeOnly',name='geoCoords',type='SFString'),
      field(accessType='initializeOnly',name='children',type='MFNode'),
      field(accessType='initializeOnly',name='autoElevation',type='SFBool'),
      field(accessType='initializeOnly',name='autoSurfaceOrientation',type='SFBool'),
      field(accessType='initializeOnly',name='debug',type='SFBool'),
      field(accessType='inputOnly',name='set_geoCoords',type='SFString'),
      field(accessType='outputOnly',name='geoCoords_changed',type='SFString'),
      field(accessType='inputOnly',name='set_autoElevation',type='SFBool'),
      field(accessType='outputOnly',name='autoElevation_changed',type='SFBool'),
      field(accessType='inputOnly',name='set_autoSurfaceOrientation',type='SFBool'),
      field(accessType='outputOnly',name='autoSurfaceOrientation_changed',type='SFBool')]),
    NavigationInfo(speed=5000,type=["WALK"]),
    GeoViewpoint(DEF='ViewPoint',orientation=(1.0,0.0,0.0,-0.5),position=(29.705,52.635,2500),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(29.0,52.0,0.0))),
    Group(DEF='Top',
      children=[
      Inline(url=["N2942E5237DTED2.x3d","https://savage.nps.edu/Savage/Tools/Terrain/N2942E5237DTED2.x3d","N2942E5237DTED2.wrl","https://savage.nps.edu/Savage/Tools/Terrain/N2942E5237DTED2.wrl"]),
      Inline(url=["N2942E5238DTED2.x3d","https://savage.nps.edu/Savage/Tools/Terrain/N2942E5238DTED2.x3d","N2942E5238DTED2.wrl","https://savage.nps.edu/Savage/Tools/Terrain/N2942E5238DTED2.wrl"]),
      Inline(url=["N2942E5239DTED2.x3d","https://savage.nps.edu/Savage/Tools/Terrain/N2942E5239DTED2.x3d","N2942E5239DTED2.wrl","https://savage.nps.edu/Savage/Tools/Terrain/N2942E5239DTED2.wrl"]),
      Inline(url=["N2942E5240DTED2.x3d","https://savage.nps.edu/Savage/Tools/Terrain/N2942E5240DTED2.x3d","N2942E5240DTED2.wrl","https://savage.nps.edu/Savage/Tools/Terrain/N2942E5240DTED2.wrl"]),
      Inline(url=["N2943E5237DTED2.x3d","https://savage.nps.edu/Savage/Tools/Terrain/N2943E5237DTED2.x3d","N2943E5237DTED2.wrl","https://savage.nps.edu/Savage/Tools/Terrain/N2943E5237DTED2.wrl"]),
      Inline(url=["N2943E5238DTED2.x3d","https://savage.nps.edu/Savage/Tools/Terrain/N2943E5238DTED2.x3d","N2943E5238DTED2.wrl","https://savage.nps.edu/Savage/Tools/Terrain/N2943E5238DTED2.wrl"]),
      Inline(url=["N2943E5239DTED2.x3d","https://savage.nps.edu/Savage/Tools/Terrain/N2943E5239DTED2.x3d","N2943E5239DTED2.wrl","https://savage.nps.edu/Savage/Tools/Terrain/N2943E5239DTED2.wrl"]),
      Inline(url=["N2943E5240DTED2.x3d","https://savage.nps.edu/Savage/Tools/Terrain/N2943E5240DTED2.x3d","N2943E5240DTED2.wrl","https://savage.nps.edu/Savage/Tools/Terrain/N2943E5240DTED2.wrl"]),
      Inline(url=["N2944E5237DTED2.x3d","https://savage.nps.edu/Savage/Tools/Terrain/N2944E5237DTED2.x3d","N2944E5237DTED2.wrl","https://savage.nps.edu/Savage/Tools/Terrain/N2944E5237DTED2.wrl"]),
      Inline(url=["N2944E5238DTED2.x3d","https://savage.nps.edu/Savage/Tools/Terrain/N2944E5238DTED2.x3d","N2944E5238DTED2.wrl","https://savage.nps.edu/Savage/Tools/Terrain/N2944E5238DTED2.wrl"]),
      Inline(url=["N2944E5239DTED2.x3d","https://savage.nps.edu/Savage/Tools/Terrain/N2944E5239DTED2.x3d","N2944E5239DTED2.wrl","https://savage.nps.edu/Savage/Tools/Terrain/N2944E5239DTED2.wrl"]),
      Inline(url=["N2944E5240DTED2.x3d","https://savage.nps.edu/Savage/Tools/Terrain/N2944E5240DTED2.x3d","N2944E5240DTED2.wrl","https://savage.nps.edu/Savage/Tools/Terrain/N2944E5240DTED2.wrl"]),
      Inline(url=["N2945E5237DTED2.x3d","https://savage.nps.edu/Savage/Tools/Terrain/N2945E5237DTED2.x3d","N2945E5237DTED2.wrl","https://savage.nps.edu/Savage/Tools/Terrain/N2945E5237DTED2.wrl"]),
      Inline(url=["N2945E5238DTED2.x3d","https://savage.nps.edu/Savage/Tools/Terrain/N2945E5238DTED2.x3d","N2945E5238DTED2.wrl","https://savage.nps.edu/Savage/Tools/Terrain/N2945E5238DTED2.wrl"]),
      Inline(url=["N2945E5239DTED2.x3d","https://savage.nps.edu/Savage/Tools/Terrain/N2945E5239DTED2.x3d","N2945E5239DTED2.wrl","https://savage.nps.edu/Savage/Tools/Terrain/N2945E5239DTED2.wrl"]),
      Inline(url=["N2945E5240DTED2.x3d","https://savage.nps.edu/Savage/Tools/Terrain/N2945E5240DTED2.x3d","N2945E5240DTED2.wrl","https://savage.nps.edu/Savage/Tools/Terrain/N2945E5240DTED2.wrl"])]),
    ProtoInstance(DEF='UNITLOC',name='GeoLocation3',
      fieldValue=[
      fieldValue(name='debug',value=True),
      fieldValue(name='children',
        children=[
        Transform(rotation=(0.0,1.0,0.0,0.7854),scale=(10.0,10.0,10.0),translation=(0.0,15.0,0.0),
          children=[
          Inline(url=["../../GroundVehicles/M1A1/M1A1.x3d","https://savage.nps.edu/Savage/GroundVehicles/M1A1/M1A1.x3d","../../GroundVehicles/M1A1/M1A1.wrl","https://savage.nps.edu/Savage/GroundVehicles/M1A1/M1A1.wrl"])])]),
      fieldValue(name='geoCoords',value='29.7118644 52.6271186 0'),
      fieldValue(name='geoOrigin',
        children=[
        GeoOrigin(USE='ORIGIN')]),
      fieldValue(name='autoSurfaceOrientation',value=True),
      fieldValue(name='autoElevation',value=True),
      fieldValue(name='geoSystem',value=["GD","WE"])]),
    GeoPositionInterpolator(DEF='Interpolator',key=[0.0,0.99],keyValue=[(29.711865,52.62712,0.0),(29.762711,52.677966,0.0)],
      geoOrigin=GeoOrigin(USE='ORIGIN')),
    TimeSensor(DEF='Clock',cycleInterval=100.0,loop=True),
    ROUTE(fromField='fraction_changed',fromNode='Clock',toField='set_fraction',toNode='Interpolator'),
    ROUTE(fromField='geovalue_changed',fromNode='Interpolator',toField='set_geoCoords',toNode='UNITLOC')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for DTEDMultiGrid.py")
