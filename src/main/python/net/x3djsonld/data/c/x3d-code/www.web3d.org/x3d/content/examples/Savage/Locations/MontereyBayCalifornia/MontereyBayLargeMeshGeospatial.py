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

newModel=X3D(profile='Interactive',version='3.3',
  head=head(
    children=[
    component(level=1,name='Geospatial'),
    meta(content='MontereyBayLargeMeshGeospatial.x3d',name='title'),
    meta(content='Geolocated view of Monterey Bay shoreline and canyon using Monterey Canyon imagery.',name='description'),
    meta(content='Jeffrey Weekley',name='creator'),
    meta(content='10 May 2007',name='created'),
    meta(content='9 July 2018',name='modified'),
    meta(content='MontereyCanyon.png',name='Image'),
    meta(content='Monterey Bay, Monterey Canyon',name='subject'),
    meta(content='RawKee (version 1.0.3): an open source X3D plug-in for Maya',name='generator'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='https://savage.nps.edu/Savage/Locations/MontereyBayCalifornia/MontereyBayLargeMeshGeospatial.x3d',name='identifier'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    GeoLocation(geoCoords=(36.607,-121.885,0.0),
      children=[
      Inline(url=["MontereyBayLargeMesh.x3d","https://savage.nps.edu/Savage/Locations/MontereyBayCalifornia/MontereyBayLargeMesh.x3d"])],
      geoOrigin=GeoOrigin(DEF='DEPRECATED',geoCoords=(36.607,-121.885,0.0),geoSystem=["GD"]))])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for MontereyBayLargeMeshGeospatial.py")
