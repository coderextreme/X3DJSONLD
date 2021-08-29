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

newModel=X3D(profile='Immersive',version='3.1',
  head=head(
    children=[
    component(name='Geospatial',level=1)]),
  Scene=Scene(
    children=[
    GeoViewpoint(description='GeoViewpoint_3_42',geoSystem=['GDC'],position=(1.3545435942297035,97.86525024004024,224011.88563999312),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(0.3471685463819618,100.89750038406439,0),geoSystem=['GDC'])),
    GeoLOD(center=(1.3545435942297035,97.86525024004024,0.0),range=268814.25,child1Url=['../../tiles/4/Malacca8-4.x3d'],child2Url=['../../tiles/4/Malacca8-5.x3d'],child3Url=['../../tiles/4/Malacca9-4.x3d'],child4Url=['../../tiles/4/Malacca9-5.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/Malacca4-2.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(0.3471685463819587,96.85450019203219,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.09626191,zDimension=22,zSpacing=0.09594048,height=[-99,-99,4,5,0,2,4,3,5,3,3,1,3,1,5,2,2,1,4,0,0,0,-99,-99,7,1,5,3,4,4,5,6,1,2,1,1,2,2,1,5,1,0,0,0,-99,-99,3,9,2,2,2,3,3,0,0,1,0,0,1,4,3,1,2,0,2,1,-99,-99,-2,1,2,1,1,3,0,132,76,0,1,1,1,6,1,2,4,1,0,0,-99,-99,0,2,0,5,4,3,5,136,161,2,1,2,3,4,1,4,2,22,0,0,-99,-99,-1,5,7,0,7,2,153,215,160,8,3,3,4,3,3,2,3,6,0,0,-99,-99,0,4,0,0,3,6,328,422,179,0,3,3,2,4,2,2,0,1,1,1,-99,-99,0,2,2,14,62,214,479,328,19,3,4,3,3,3,2,1,2,3,1,1,-99,-99,10,-11,1,-2,123,42,249,22,3,1,1,3,2,2,2,1,0,2,4,4,-99,-99,0,2,1,17,174,185,39,1,3,2,3,1,3,0,0,2,2,4,4,1,-99,-99,2,1,46,28,105,237,4,1,2,1,0,1,2,1,0,2,2,1,9,29,-99,-99,2,39,11,19,31,3,2,2,3,3,1,2,1,1,2,1,4,3,32,65,-99,-99,2,3,0,2,2,3,4,3,2,2,2,0,2,2,3,4,3,1,63,143,-99,-99,0,0,0,0,1,3,3,3,3,4,1,1,1,2,3,4,1,3,5,14,-99,-99,-4,0,-1,4,10,2,3,3,4,5,2,1,3,4,1,1,1,1,10,77,-99,-99,5,0,0,3,1,2,3,3,3,2,4,1,2,2,2,1,21,11,509,662,-99,-99,5,1,1,1,2,3,3,3,2,5,4,5,0,2,1,1,12,284,722,1038,-99,-99,4,4,5,4,2,2,1,4,3,4,2,2,5,2,6,778,168,549,989,1034,-6,0,2,4,3,11,2,3,1,2,3,3,4,6,6,41,472,789,1176,1136,1428,1370,-2,9,4,2,92,3,4,3,5,2,4,2,5,8,112,546,472,783,1328,1448,1369,1255,0,0,3,5,3,2,3,4,3,17,4,9,27,157,535,298,695,1024,1494,1426,1422,1427,0,2,3,4,4,2,3,4,3,13,8,17,36,189,627,279,702,1021,1493,1427,1424,1426],
            geoOrigin=GeoOrigin(USE='ORIGIN')))])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful")
