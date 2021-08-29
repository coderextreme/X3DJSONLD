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
    component(level=2,name='Geospatial'),
    meta(content='NarragansettBayMerged.x3d',name='title'),
    meta(content='Byounghyun Yoo, Don Brutzman',name='creator'),
    meta(content='16 June 2008',name='created'),
    meta(content='9 July 2018',name='modified'),
    meta(content='Merged bathymetry + large-area terrain tiles + coordinate axes.',name='description'),
    meta(content='https://savage.nps.edu/Savage/Locations/NarragansettBayRhodeIslandBathymetry/NarragansettBayMerged.x3d',name='identifier'),
    meta(content='X3D-Edit, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    #  make bathymetry 3m lower than actual, pending TODO ceiling adjustment by Rez within tiles when generating ocean surface 
    children=[
    Switch(whichChoice=-1,
      children=[
      GeoViewpoint(description='Default Viewpoint NarragansettBayBathymetry',orientation=(-1,0,0,1.57),position=(41.500539965587954,-71.43945518210546,82007.5640554569),
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=["GD"])),
      #  TODO: Determine why a GeoTransform and not a GeoLocation node 
      GeoTransform(geoCenter=(41.487,-71.339,0),translation=(0,-3,0),
        geoOrigin=GeoOrigin(USE='ORIGIN'),
        #  local bathymetry archive 
        #  local bathymetry 
        children=[
        Inline(url=["./tiles/0/newport0-0.x3d","https://savage.nps.edu/Savage/Locations/NarragansettBayRhodeIslandBathymetry/tiles/0/newport0-0.x3d"])])]),
    #  also add separate terrain archive, unmodified 
    Inline(DEF='NarragansettBayRhodeIslandLarge',url=["../NarragansettBayRhodeIslandLarge/tiles/0/newport0-0.x3d","https://savage.nps.edu/Savage/Locations/NarragansettBayRhodeIslandLarge/tiles/0/newport0-0.x3d"]),
    #  This GeoLocation block shows how to geospatially reference regular nongeospatial shapes 
    #  Only required to geo-reference a scene 
    #  GeoLocation geoCoords='41.487 -71.339 0' geoSystem='"GD" "WE"'> <Transform scale='100 100 100'> <Inline DEF='CoordinateAxesNSEW' url='"../../Basic/course/CoordinateAxesNSEW.x3d" "CoordinateAxesNSEW.x3d" "http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d"'/> </Transform> note: using the same GeoOrigin throughout all three file sets, to avoid Xj3D problem <GeoOrigin USE='ORIGIN'/> </GeoLocation 
    #  TODO experiment: replace PointLights with single geospatially referenced DirectionalLight 
    Switch(DEF='LightSwitch',whichChoice=1,
      children=[
      Group(DEF='PointLights',
        children=[
        PointLight(location=(10000000000,0,0),radius=100000000000000),
        PointLight(location=(-10000000000,0,0),radius=100000000000000),
        PointLight(location=(0,10000000000,0),radius=100000000000000),
        PointLight(location=(0,-10000000000,0),radius=100000000000000),
        PointLight(location=(0,0,10000000000),radius=100000000000000),
        PointLight(location=(0,0,-10000000000),radius=100000000000000)]),
      Transform(DEF='DirectionalLights',rotation=(1,0,0,0.78),
        children=[
        DirectionalLight(),
        DirectionalLight(direction=(0,1,0)),
        DirectionalLight(direction=(0,0,1)),
        DirectionalLight(direction=(-1,0,0)),
        DirectionalLight(direction=(0,-1,0)),
        DirectionalLight(),]),
      GeoLocation(geoCoords=(41.56722223554018,-71.30572987125981,0),
        children=[
        DirectionalLight(direction=(0,-1,0),global_=True)],
        geoOrigin=GeoOrigin(USE='ORIGIN'))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for NarragansettBayMerged.py")
