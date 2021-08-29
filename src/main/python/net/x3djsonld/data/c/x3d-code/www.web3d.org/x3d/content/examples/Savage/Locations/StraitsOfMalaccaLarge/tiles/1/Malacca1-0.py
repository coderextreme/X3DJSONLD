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
    GeoViewpoint(description='GeoViewpoint_1_10',geoSystem=['GDC'],position=(4.376668737772939,96.85450019203219,896047.5425599725),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(0.3471685463819618,100.89750038406439,0),geoSystem=['GDC'])),
    GeoLOD(center=(4.376668737772939,96.85450019203219,0.0),range=1075257.0,child1Url=['../../tiles/2/Malacca2-0.x3d'],child2Url=['../../tiles/2/Malacca2-1.x3d'],child3Url=['../../tiles/2/Malacca3-0.x3d'],child4Url=['../../tiles/2/Malacca3-1.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/1/Malacca1-0.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(0.34716854638196004,92.8115,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.38504764,zDimension=22,zSpacing=0.3837619,height=[-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,2,6,4,1,0,192,187,241,372,61,62,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,7,84,3,2,0,964,533,412,74,39,34,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,0,116,2,0,3,284,387,88,36,34,38,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,0,2,3,4,11,1314,97,101,34,15,11,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,3,3,5,1,948,1287,259,37,20,9,7,-99,-99,-99,-99,-99,-99,2,1,3,23,1,4,5,64,937,909,1264,184,2,0,-2,-2,-99,-99,-99,-99,-99,-99,4,1,69,-4,2,2,24,179,1393,1331,256,10,0,0,0,3,-99,-99,-99,-99,-99,-99,1,-1,0,1,1,6,1678,176,1271,303,85,1,2,2,8,7,-99,-99,-99,-99,-99,-99,0,0,0,3,3,1268,951,413,61,15,3,0,2,2,1,2,-99,-99,-99,-99,-99,-99,1,0,0,18,846,2539,1137,44,1,2,1,3,1,1,3,5,-99,-99,-99,-99,-99,-99,0,1,25,403,1762,1028,333,8,3,1,-99,-99,1,0,22,22,-99,-99,-99,-99,-99,-99,2,37,793,521,1603,295,97,2,3,2,-99,-99,0,0,257,124,-99,-99,-99,1,1,-2,-5,1588,473,61,54,6,1,-99,-99,-99,-99,-99,0,8,160,161,-99,-99,-99,3,1,2,11,147,3,1,1,0,2,-99,-99,-99,-99,-99,1,5,101,91,-99,-99,-99,0,2,2,2,4,0,1,0,1,2,-99,-99,-99,-99,-99,3,27,608,533,-99,3,3,-99,-99,-99,1,3,-99,-99,-99,-99,-99,-99,-99,-99,2,0,1,120,403,366,-99,3,4,-99,-99,-99,3,3,-99,-99,-99,-99,-99,-99,-99,-99,3,0,40,77,32,30,-99,4,0,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,2,3,4,3,6,99,1,9,6,-99,2,1,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,1,2,3,2,26,11,1,2,3,-99,0,1,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,1,4,5,200,53,4,2,2,2,3,3,3,-99,-99,-99,-99,-99,-99,-99,-99,0,3,1,8,118,44,591,4,1,1,2,1,2,4,-99,-99,-99,-99,-99,-99,-99,-99,0,3,2,9,114,39,612,3,1,1,1],
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
