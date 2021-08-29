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
    GeoViewpoint(description='GeoViewpoint_1_11',geoSystem=['GDC'],position=(4.376668737772939,104.94050057609658,896047.5425599725),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(0.3471685463819618,100.89750038406439,0),geoSystem=['GDC'])),
    GeoLOD(center=(4.376668737772939,104.94050057609658,0.0),range=1075257.0,child1Url=['../../tiles/2/Malacca2-2.x3d'],child2Url=['../../tiles/2/Malacca2-3.x3d'],child3Url=['../../tiles/2/Malacca3-2.x3d'],child4Url=['../../tiles/2/Malacca3-3.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/1/Malacca1-1.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(0.34716854638196004,100.89750038406439,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.38504764,zDimension=22,zSpacing=0.3837619,height=[62,27,30,48,24,3,8,0,4,1,3,-99,-99,3,1,1,1,2,-1,1,6,9,34,40,20,34,20,6,5,0,3,-4,0,-99,-99,1,1,1,0,1,1,1,13,11,38,64,38,3,2,3,5,2,21,26,3,-99,-99,2,2,2,0,0,0,0,1,1,11,16,40,34,3,3,2,43,13,3,1,-99,-99,0,2,0,0,1,0,1,4,4,7,5,7,2,4,11,58,59,1,3,4,-99,-99,2,0,2,0,1,0,2,4,3,-2,13,2,28,21,24,67,33,3,4,4,0,1,1,1,3,0,4,0,1,1,5,3,1,20,181,91,49,74,4,105,4,2,3,0,1,1,2,0,2,2,3,4,3,7,1,50,924,36,114,35,3,-99,-99,-99,3,3,1,2,1,2,2,2,2,3,1,2,18,639,98,57,29,18,5,-99,-99,-99,0,2,2,1,1,0,1,1,3,0,4,5,78,637,327,81,776,30,4,-99,-99,-99,2,4,1,2,2,0,4,30,0,1,1,22,1266,236,127,384,295,19,6,-99,-99,-99,-99,-99,-99,-99,-99,1,1,0,1,-1,0,124,1100,428,1016,160,1157,49,6,-99,-99,-99,-99,-99,-99,-99,-99,1,0,1,0,0,2,161,1348,535,104,392,35,7,7,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,91,299,874,155,38,6,4,5,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,533,306,166,16,5,6,8,7,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,366,54,34,6,5,7,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,30,13,4,4,3,8,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,6,4,2,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,3,3,4,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,2,3,2,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,2,-99,-99,-99,-99,-99,-99,-99,1,3,3,4,3,3,2,2,-99,-99,-99,-99,-99,-99,1,-99,-99,-99,-99,-99,-99,-99,1,2,4,3,2,3,2,3,-99,-99,-99,-99,-99,-99],
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
