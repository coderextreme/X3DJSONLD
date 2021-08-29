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
    meta(content='NarragansettBayGeospatialCoordinateAxesNsew.x3d',name='title'),
    meta(content='Byounghyun Yoo, Don Brutzman',name='creator'),
    meta(content='16 June 2008',name='created'),
    meta(content='9 July 2018',name='modified'),
    meta(content='X Y Z axis arrows and labels in Geospatial coordinate system, confirming correct NSEW alignment of terrain + bathymetry tiles.',name='description'),
    meta(content='https://savage.nps.edu/Savage/Locations/NarragansettBayRhodeIslandSmall/NarragansettBayGeospatialCoordinateAxesNsew.x3d',name='identifier'),
    meta(content='X3D-Edit, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Inline(DEF='NarragansettBaySmall',url=["NarragansettBaySmall.x3d","https://savage.nps.edu/Savage/Locations/NarragansettBayRhodeIslandSmall/NarragansettBaySmall.x3d"]),
    #  This GeoLocation block shows how to geospatially reference regular nongeospatial shapes 
    GeoLocation(geoCoords=(41.56722223554018,-71.30572987125981,0),
      children=[
      Transform(scale=(1000,1000,1000),
        children=[
        Inline(DEF='CoordinateAxesNSEW',url=["../../Basic/course/CoordinateAxesNSEW.x3d","CoordinateAxesNSEW.x3d","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d"])])],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=["GD"]))])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for NarragansettBayGeospatialCoordinateAxesNsew.py")
