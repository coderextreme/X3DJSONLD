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
    GeoLOD(center=(41.76663080343592,-71.2855577038016,0.0),range=6150.5674,child1Url=['../../tiles/5/newport26-22.x3d'],child2Url=['../../tiles/5/newport26-23.x3d'],child3Url=['../../tiles/5/newport27-22.x3d'],child4Url=['../../tiles/5/newport27-23.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport13-11.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.742440727267926,-71.30754305784501,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[10,7,12,14,9,5,3,6,3,0,0,4,6,7,11,10,12,9,9,4,3,3,17,15,11,15,13,8,6,5,6,5,0,5,8,10,6,7,7,6,13,11,7,7,9,6,8,13,10,8,8,9,6,5,0,8,13,13,5,5,6,10,15,12,6,7,4,7,8,13,13,11,8,4,2,0,0,6,12,10,4,1,3,2,8,6,4,2,8,4,6,11,11,7,2,0,1,0,4,8,12,7,1,1,1,3,5,10,5,5,9,6,7,9,9,7,0,6,7,0,7,11,5,1,1,3,4,3,14,12,7,6,5,4,7,7,9,1,1,8,4,1,0,1,1,1,1,1,4,3,10,16,13,13,7,13,0,1,2,1,6,7,6,1,1,1,1,1,3,2,1,7,2,13,16,17,1,1,1,1,2,4,5,4,6,3,1,1,1,1,1,1,3,5,10,11,20,20,1,1,1,3,5,5,8,4,4,1,1,1,1,1,3,2,6,10,7,16,13,16,2,1,1,3,6,4,6,4,4,1,1,1,1,1,4,10,11,3,4,6,12,10,3,3,4,5,3,4,3,4,3,1,0,0,0,0,2,5,8,8,6,8,9,10,4,4,4,4,4,3,3,3,3,1,0,0,0,1,2,4,5,11,10,8,8,9,3,3,3,3,3,3,2,3,3,1,0,0,0,0,3,3,6,15,14,10,7,6,3,3,3,3,3,3,2,3,3,2,1,0,0,1,2,2,6,14,17,13,7,8,0,0,0,0,3,3,2,5,2,2,1,0,0,1,2,2,2,9,15,12,10,10,0,0,0,0,3,3,3,3,2,2,1,0,0,0,0,2,2,3,11,8,11,12,0,0,0,0,3,4,3,3,2,2,2,0,0,0,0,2,2,3,6,8,8,8,1,0,1,2,4,5,3,2,2,2,2,1,0,1,2,2,1,2,3,4,6,7,2,1,2,2,2,3,2,2,2,2,2,2,0,1,2,3,3,4,2,7,11,11,4,2,3,2,3,4,3,2,2,2,2,2,1,1,2,4,6,7,8,9,8,8,4,2,3,2,3,4,3,2,2,2,2,2,1,1,2,4,6,8,8,9,8,8],
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
