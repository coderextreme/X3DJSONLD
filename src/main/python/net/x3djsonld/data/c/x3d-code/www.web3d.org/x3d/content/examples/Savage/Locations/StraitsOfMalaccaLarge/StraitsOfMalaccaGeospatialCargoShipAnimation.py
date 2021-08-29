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
    component(level=2,name='Geospatial'),
    meta(content='StraitsOfMalaccaGeospatialCargoShipAnimation.x3d',name='title'),
    meta(content='Byounghyun Yoo',name='creator'),
    meta(content='17 July 2008',name='created'),
    meta(content='23 June 2014',name='modified'),
    meta(content='Cargo Ship Animation through Waypoints in Geospatial coordinate system.',name='description'),
    meta(content='http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d',name='reference'),
    meta(content='https://savage.nps.edu/Savage/Locations/StraitsOfMalaccaLarge/StraitsOfMalaccaGeospatialCargoShipAnimation.x3d',name='identifier'),
    meta(content='X3D-Edit, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Background(skyColor=[(0.3,0.3,0.9)]),
    Inline(DEF='StraitsOfMalaccaLarge',url=["StraitsOfMalaccaLarge.x3d","https://savage.nps.edu/Savage/Locations/StraitsOfMalaccaLarge/StraitsOfMalaccaLarge.x3d"]),
    Inline(DEF='StraitsOfMalaccaWayPoints',url=["StraitsOfMalaccaWayPoints.x3d","https://savage.nps.edu/Savage/Locations/StraitsOfMalaccaLarge/StraitsOfMalaccaWayPoints.x3d"]),
    Group(
      children=[
      GeoLocation(geoCoords=(0.3471685463819618,100.89750038406439,0),
        children=[
        Transform(DEF='CoordinateAxes',scale=(50000,50000,50000),
          children=[
          Inline(url=["../../Tools/Authoring/CoordinateAxesNSEW.x3d","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.x3d"])])],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(0.3471685463819618,100.89750038406439,0),geoSystem=["GD"]))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for StraitsOfMalaccaGeospatialCargoShipAnimation.py")
