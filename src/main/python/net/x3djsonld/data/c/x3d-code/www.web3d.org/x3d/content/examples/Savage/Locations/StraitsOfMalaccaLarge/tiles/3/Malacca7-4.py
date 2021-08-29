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
    GeoViewpoint(description='GeoViewpoint_3_74',geoSystem=['GDC'],position=(7.398793881316173,101.90825043207244,224011.88563999312),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(0.3471685463819618,100.89750038406439,0),geoSystem=['GDC'])),
    GeoLOD(center=(7.398793881316173,101.90825043207244,0.0),range=268814.25,child1Url=['../../tiles/4/Malacca14-8.x3d'],child2Url=['../../tiles/4/Malacca14-9.x3d'],child3Url=['../../tiles/4/Malacca15-8.x3d'],child4Url=['../../tiles/4/Malacca15-9.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/Malacca7-4.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(6.391418833468428,100.89750038406439,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.09626191,zDimension=22,zSpacing=0.09594048,height=[201,350,337,261,66,678,40,645,39,12,8,8,5,5,6,5,4,3,5,7,7,6,300,194,125,98,75,181,44,288,19,10,10,5,4,4,6,5,4,6,5,4,4,4,181,42,54,63,32,19,28,590,4,5,6,3,5,4,4,5,5,5,4,4,5,4,31,114,622,71,22,34,16,18,8,3,4,4,4,4,5,5,4,5,6,5,3,6,47,76,26,7,15,7,173,13,4,4,4,3,4,4,4,4,6,4,4,7,7,5,25,11,10,3,10,6,7,4,3,4,4,5,4,4,4,4,4,3,4,5,5,6,6,1,4,2,2,4,4,4,3,5,4,5,5,4,4,3,3,4,4,5,6,5,5,4,3,2,3,3,4,4,3,2,6,5,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,5,5,3,3,2,3,4,4,3,3,4,4,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,4,4,4,4,3,3,3,3,5,4,4,3,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,4,4,4,4,4,3,4,4,4,3,3,4,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,3,2,3,2,5,4,3,4,3,4,3,3,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,3,1,3,4,4,3,3,4,5,4,3,2,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,1,2,2,2,3,3,4,3,3,3,4,3,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,2,2,3,3,3,3,2,3,3,3,5,3,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,2,3,2,1,3,2,2,2,3,3,3,3,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,2,2,2,1,1,1,3,2,1,3,3,4,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,1,1,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,2,2,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,1,1,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,2,2,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,1,2,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99],
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
