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
    GeoLOD(center=(41.47634988941996,-71.2855577038016,0.0),range=6150.5674,child1Url=['../../tiles/5/newport14-22.x3d'],child2Url=['../../tiles/5/newport14-23.x3d'],child3Url=['../../tiles/5/newport15-22.x3d'],child4Url=['../../tiles/5/newport15-23.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport7-11.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.45215981325196,-71.30754305784501,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,9,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,9,11,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,7,9,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,7,10,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,8,12,11,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,13,14,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,14,14,7,8,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,12,15,17,9,13,13,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,16,15,15,12,17,9,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,16,18,15,13,15,12,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,18,18,21,17,21,17,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,19,20,20,19,22,16,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,21,20,18,21,25,16,0,0,0,0,0,0,0,0,0,12,15,3,0,0,0,0,25,21,18,22,21,13,0,0,0,0,0,0,0,0,5,16,21,14,9,0,0,0,27,25,24,26,17,6,0,0,0,0,0,0,0,2,9,18,24,21,16,1,0,0,24,27,28,27,18,1,0,0,0,0,0,0,2,7,13,23,31,29,23,5,0,0,23,27,28,27,17,0,0,0,0,0,0,0,2,8,13,24,32,29,24,5,0,0],
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
