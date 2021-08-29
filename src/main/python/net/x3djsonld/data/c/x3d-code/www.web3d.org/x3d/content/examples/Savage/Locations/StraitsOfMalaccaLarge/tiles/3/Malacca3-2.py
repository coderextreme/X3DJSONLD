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
    GeoViewpoint(description='GeoViewpoint_3_32',geoSystem=['GDC'],position=(-0.6602065014657861,97.86525024004024,224011.88563999312),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(0.3471685463819618,100.89750038406439,0),geoSystem=['GDC'])),
    GeoLOD(center=(-0.6602065014657861,97.86525024004024,0.0),range=268814.25,child1Url=['../../tiles/4/Malacca6-4.x3d'],child2Url=['../../tiles/4/Malacca6-5.x3d'],child3Url=['../../tiles/4/Malacca7-4.x3d'],child4Url=['../../tiles/4/Malacca7-5.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/Malacca3-2.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(-1.6675815493135309,96.85450019203219,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.09626191,zDimension=22,zSpacing=0.09594048,height=[-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,8,6,4,0,0,0,0,11,0,4,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,7,4,0,17,6,0,10,4,49,26,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,6,1,0,-4,0,6,6,13,90,149,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,1,9,6,8,5,6,13,109,59,94,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,2,1,4,3,4,5,11,97,174,172,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,0,2,7,4,4,5,86,75,47,151,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,1,2,5,3,0,9,12,146,74,72,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,1,2,2,5,10,3,0,61,22,73,-99,-99,1,0,0,0,0,1,1,1,0,0,2,1,1,2,3,0,4,5,-3,1,-99,-99,0,0,0,1,1,1,0,0,0,1,0,1,2,2,3,0,5,-3,3,6,-99,-99,0,1,0,1,1,1,0,2,3,1,3,2,2,2,2,0,4,2,1,2,-99,-99,1,0,0,1,0,0,0,0,3,1,0,0,2,1,4,4,2,2,0,0,-99,-99,1,0,1,1,1,1,2,0,1,1,2,0,1,21,45,0,0,1,2,0,-99,-99,1,1,1,3,1,1,1,0,1,0,0,0,0,1,125,0,2,1,3,0,-99,-99,1,1,1,2,0,1,0,1,0,0,2,0,1,1,39,60,2,1,2,1,-99,-99,2,2,1,2,1,2,0,1,0,11,3,0,2,2,113,2,2,1,2,2,-99,-99,3,2,2,2,2,1,0,6,1,0,2,0,1,-1,22,3,3,2,3,0,-99,-99,2,1,2,0,1,0,2,0,0,4,-6,10,-3,38,1,6,3,2,3,2,-99,-99,1,1,2,1,0,1,3,3,2,0,0,0,1,1,3,13,74,43,16,1,-99,-99,2,1,2,4,3,3,4,1,4,4,2,2,7,3,1,2,5,6,1,1,-99,-99,6,6,0,3,3,2,4,3,4,1,1,2,3,5,1,2,4,0,0,0,-99,-99,4,5,0,2,4,3,5,3,3,1,3,1,5,2,2,1,4,0,0,0],
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
