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
    GeoViewpoint(description='GeoViewpoint_3_35',geoSystem=['GDC'],position=(-0.6602065014657861,103.92975052808853,224011.88563999312),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(0.3471685463819618,100.89750038406439,0),geoSystem=['GDC'])),
    GeoLOD(center=(-0.6602065014657861,103.92975052808853,0.0),range=268814.25,child1Url=['../../tiles/4/Malacca6-10.x3d'],child2Url=['../../tiles/4/Malacca6-11.x3d'],child3Url=['../../tiles/4/Malacca7-10.x3d'],child4Url=['../../tiles/4/Malacca7-11.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/Malacca3-5.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(-1.6675815493135309,102.91900048008048,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.09626191,zDimension=22,zSpacing=0.09594048,height=[27,26,20,33,28,72,41,43,32,23,16,31,29,27,20,4,4,1,2,1,1,2,49,30,33,69,23,11,37,13,9,13,27,26,33,30,29,14,1,0,1,2,1,0,53,65,95,69,17,22,14,18,16,10,10,11,22,30,31,29,1,2,1,1,2,2,81,59,101,77,72,39,28,14,8,12,5,13,29,4,25,6,2,3,2,1,1,1,62,63,23,71,75,41,28,23,4,14,8,7,9,27,28,9,3,3,2,2,2,1,75,62,34,82,39,50,20,28,2,20,6,4,4,6,30,3,2,3,3,1,2,2,212,75,15,25,15,21,3,23,4,3,5,3,4,5,4,1,2,4,4,4,2,2,13,12,24,25,15,13,11,5,6,1,6,3,1,1,1,1,0,2,2,4,3,4,27,12,24,14,7,8,5,3,1,3,0,0,2,0,2,3,2,0,1,2,4,4,8,25,2,6,3,5,5,2,3,2,2,1,3,2,3,3,3,4,1,2,3,3,10,3,11,10,11,-2,0,1,1,2,4,1,1,1,3,3,5,3,3,3,3,3,5,8,9,9,7,5,0,0,0,2,2,3,2,1,2,5,2,6,3,3,3,2,6,9,5,5,5,8,9,0,2,2,2,2,2,3,15,59,67,5,3,4,3,2,26,8,4,8,6,4,6,-2,2,2,1,2,1,8,5,4,35,1,2,4,4,5,22,4,8,1,4,12,9,10,14,1,2,2,2,2,3,47,2,2,0,2,-3,0,28,22,9,6,6,3,13,2,4,2,1,1,1,2,2,1,231,11,32,5,4,9,14,20,9,4,8,7,18,3,2,2,2,2,2,1,2,1,1,48,2,4,7,5,29,28,21,23,6,3,5,9,5,6,2,3,2,1,3,0,2,7,5,10,2,3,24,17,6,8,23,5,22,4,3,3,3,2,3,2,2,15,-2,3,3,4,5,4,8,8,4,3,7,5,3,5,2,4,3,3,6,3,0,2,-1,4,3,2,2,4,11,9,10,9,7,6,5,2,13,1,0,3,2,6,5,6,2,3,6,2,3,3,10,9,10,10,8,5,8,3,10,1,0,3,0,6,5,27,3,1,1,4,3,2],
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
