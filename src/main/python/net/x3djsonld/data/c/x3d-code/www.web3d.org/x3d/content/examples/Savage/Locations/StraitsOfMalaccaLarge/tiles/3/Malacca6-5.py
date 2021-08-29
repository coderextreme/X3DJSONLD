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
    GeoViewpoint(description='GeoViewpoint_3_65',geoSystem=['GDC'],position=(5.384043785620683,103.92975052808853,224011.88563999312),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(0.3471685463819618,100.89750038406439,0),geoSystem=['GDC'])),
    GeoLOD(center=(5.384043785620683,103.92975052808853,0.0),range=268814.25,child1Url=['../../tiles/4/Malacca12-10.x3d'],child2Url=['../../tiles/4/Malacca12-11.x3d'],child3Url=['../../tiles/4/Malacca13-10.x3d'],child4Url=['../../tiles/4/Malacca13-11.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/Malacca6-5.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(4.376668737772938,102.91900048008048,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.09626191,zDimension=22,zSpacing=0.09594048,height=[1079,122,213,40,9,6,6,6,6,4,7,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,243,384,310,59,32,34,6,6,7,5,6,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,154,183,226,208,67,252,5,5,6,8,6,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,764,83,93,37,34,12,7,4,6,4,6,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,563,138,138,17,70,305,6,6,4,4,4,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,1127,92,57,23,11,19,4,5,6,5,6,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,570,88,60,22,12,6,6,6,6,4,5,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,407,51,368,26,4,6,7,8,8,7,6,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,29,21,15,44,6,5,5,6,8,7,6,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,188,16,11,4,6,6,7,5,6,6,8,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,18,33,8,4,4,6,6,7,5,4,5,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,13,31,4,4,5,5,5,7,6,7,8,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,6,6,6,4,4,5,4,3,5,7,6,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,5,6,7,5,5,5,5,4,5,5,13,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,6,7,5,6,6,6,5,4,4,4,5,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,5,163,7,6,7,7,6,5,6,5,3,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,5,5,5,6,5,7,6,7,6,6,5,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,3,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,4,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,6,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,5,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,6,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99],
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
