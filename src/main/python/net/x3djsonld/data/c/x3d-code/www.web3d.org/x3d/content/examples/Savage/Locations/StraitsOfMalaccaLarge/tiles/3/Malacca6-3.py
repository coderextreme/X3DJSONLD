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
    GeoViewpoint(description='GeoViewpoint_3_63',geoSystem=['GDC'],position=(5.384043785620683,99.88675033605634,224011.88563999312),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(0.3471685463819618,100.89750038406439,0),geoSystem=['GDC'])),
    GeoLOD(center=(5.384043785620683,99.88675033605634,0.0),range=268814.25,child1Url=['../../tiles/4/Malacca12-6.x3d'],child2Url=['../../tiles/4/Malacca12-7.x3d'],child3Url=['../../tiles/4/Malacca13-6.x3d'],child4Url=['../../tiles/4/Malacca13-7.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/Malacca6-3.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(4.376668737772938,98.87600028804829,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.09626191,zDimension=22,zSpacing=0.09594048,height=[2,0,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,2,2,0,0,-2,0,3,19,15,23,0,0,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,0,0,0,0,0,0,82,19,17,24,0,1,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,1,0,0,1,1,1,8,26,64,29,1,1,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,2,0,0,0,0,3,15,499,40,42,0,2,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,1,0,0,1,1,0,6,678,504,210,2,1,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,0,0,5,2,0,9,8,357,97,76,0,-1,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-2,2,3,3,0,8,11,561,684,275,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,0,0,4,2,6,3,11,28,806,856,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-3,0,4,4,4,14,46,49,436,777,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,2,0,2,2,13,320,12,46,1103,1444,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-3,6,7,0,6,192,131,51,1005,853,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,1,0,139,7,10,71,54,87,1104,900,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,2,1,1,2,16,35,26,103,838,896,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,0,1,7,4,19,27,26,37,78,178,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,3,1,2,3,13,51,43,55,187,88,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,1,0,2,2,128,35,52,133,279,107,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,2,5,0,4,4,72,71,185,477,235,-99,-99,1,2,2,1,0,3,1,1,1,1,2,5,5,4,4,31,241,160,161,350,-99,-99,0,1,2,2,1,2,1,3,2,2,1,4,4,8,4,15,55,142,235,144,-99,-99,0,2,1,3,3,4,0,2,1,2,0,4,3,4,62,90,38,206,295,277,-99,-99,1,1,4,4,6,2,2,155,1,1,0,3,4,15,37,32,38,225,293,173,-99,-99,0,1,3,3,5,3,2,142,6,0,2,4,4,18,43,35,38,241,265,201],
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
