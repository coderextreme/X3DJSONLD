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
    GeoViewpoint(description='GeoViewpoint_3_53',geoSystem=['GDC'],position=(3.3692936899251933,99.88675033605634,224011.88563999312),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(0.3471685463819618,100.89750038406439,0),geoSystem=['GDC'])),
    GeoLOD(center=(3.3692936899251933,99.88675033605634,0.0),range=268814.25,child1Url=['../../tiles/4/Malacca10-6.x3d'],child2Url=['../../tiles/4/Malacca10-7.x3d'],child3Url=['../../tiles/4/Malacca11-6.x3d'],child4Url=['../../tiles/4/Malacca11-7.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/Malacca5-3.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(2.3619186420774487,98.87600028804829,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.09626191,zDimension=22,zSpacing=0.09594048,height=[1426,1547,1214,1333,1226,913,462,400,77,39,15,10,4,8,18,24,0,-1,0,-1,0,0,906,908,904,924,1858,1368,261,334,159,15,12,8,1,4,24,0,0,0,3,0,1,1,1294,1024,1073,1567,1005,846,150,45,27,6,2,1,2,-6,19,-1,1,4,2,1,0,2,1552,1288,2147,1554,658,240,226,45,22,17,4,1,2,9,7,0,0,0,3,1,1,1,913,1283,1094,684,300,148,80,30,15,8,7,0,1,3,0,2,0,0,0,0,0,5,1120,935,629,376,241,139,103,49,17,6,7,2,0,0,1,1,0,2,0,0,1,-2,953,676,435,253,134,108,66,31,20,5,8,9,0,1,2,0,2,1,0,0,-2,-3,1005,722,309,205,130,90,53,31,24,5,0,0,0,0,1,1,1,0,2,-2,0,-3,382,216,187,135,84,72,35,13,2,8,0,2,3,1,2,3,1,3,-2,8,-1,-1,192,127,94,80,53,35,18,3,0,1,0,0,1,2,1,1,1,2,1,2,-1,0,109,83,38,39,37,11,1,0,0,2,0,2,1,2,1,0,1,1,2,2,1,2,79,50,32,11,3,2,0,3,0,0,1,0,1,1,2,2,0,2,1,1,3,1,24,29,15,3,2,2,2,1,1,0,0,1,0,0,1,0,0,1,1,2,2,2,12,10,2,2,2,0,3,0,0,1,0,1,0,0,0,1,1,0,3,1,1,1,3,0,0,1,0,0,0,1,0,1,2,1,0,1,1,0,1,1,1,1,0,0,0,0,0,0,0,0,0,0,3,2,2,1,0,1,0,0,2,1,0,0,5,7,2,0,0,0,1,0,1,2,2,1,2,1,0,0,0,0,0,2,2,7,5,4,1,0,-17,-18,-18,-17,-17,-17,-16,-19,-18,-17,0,2,1,1,0,0,0,4,7,4,4,3,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,1,1,1,0,5,-1,0,7,8,4,4,0,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,2,2,2,0,0,146,6,20,14,13,2,0,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,2,1,0,0,-1,0,2,19,13,25,2,0,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,2,2,0,0,-2,0,3,19,15,23],
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
