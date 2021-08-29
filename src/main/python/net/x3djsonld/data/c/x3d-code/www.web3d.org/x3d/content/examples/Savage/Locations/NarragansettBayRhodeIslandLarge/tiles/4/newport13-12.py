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
    GeoLOD(center=(41.76663080343592,-71.24158699571478,0.0),range=6150.5674,child1Url=['../../tiles/5/newport26-24.x3d'],child2Url=['../../tiles/5/newport26-25.x3d'],child3Url=['../../tiles/5/newport27-24.x3d'],child4Url=['../../tiles/5/newport27-25.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport13-12.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.742440727267926,-71.26357234975819,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[3,1,1,1,1,5,10,8,11,15,14,16,18,19,18,14,6,4,2,1,1,1,7,1,5,4,5,8,11,8,13,14,13,14,16,19,16,13,3,2,1,1,1,1,7,2,1,10,11,10,9,16,17,15,13,13,14,13,9,4,2,5,2,1,1,1,2,6,7,12,13,10,15,16,20,17,13,12,12,11,5,5,5,12,4,1,5,4,5,9,10,10,10,12,16,19,23,18,13,12,12,10,7,6,6,14,11,10,15,15,6,5,10,8,2,9,17,20,22,15,11,11,12,12,9,7,8,16,13,17,19,18,13,7,2,1,2,2,13,17,17,11,8,12,12,12,12,13,9,13,16,19,21,18,17,9,3,2,2,2,9,13,12,10,8,12,13,15,17,17,11,11,14,19,22,20,20,9,1,3,2,5,20,10,9,9,8,11,13,18,22,18,12,12,14,19,20,20,16,11,3,2,4,8,1,0,6,7,8,10,13,20,26,20,12,13,16,23,21,20,10,7,5,1,5,0,0,3,6,9,8,11,13,20,31,22,13,13,19,25,23,22,10,8,5,4,3,2,2,5,7,8,9,11,13,21,30,15,13,17,23,24,24,23,9,6,8,4,3,4,6,8,8,10,12,10,12,18,23,13,18,19,22,27,21,20,6,11,11,6,6,8,10,8,8,13,11,11,12,14,15,13,19,19,22,27,29,25,8,8,14,12,9,4,5,4,8,11,12,12,13,13,13,14,19,19,23,31,25,20,10,8,13,15,11,8,4,8,12,14,12,12,13,14,14,13,19,21,22,31,27,25,12,11,13,21,10,8,4,6,10,11,14,14,14,13,15,13,19,20,24,29,30,29,8,13,14,16,17,13,9,6,11,11,11,12,14,14,18,16,17,20,24,27,29,30,7,11,18,16,14,15,14,12,9,10,11,13,15,16,19,18,18,18,24,29,31,32,11,14,17,24,15,14,16,17,15,10,12,12,15,17,24,21,18,18,22,28,33,33,8,9,14,19,19,15,9,11,11,14,14,12,11,16,24,21,18,18,22,29,35,36,8,9,14,18,19,16,9,11,11,13,14,12,10,17,24,21,18,18,22,29,35,36],
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
