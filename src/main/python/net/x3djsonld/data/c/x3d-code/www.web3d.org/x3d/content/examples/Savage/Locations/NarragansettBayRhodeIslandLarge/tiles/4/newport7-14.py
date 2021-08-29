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
    GeoLOD(center=(41.47634988941996,-71.15364557954115,0.0),range=6150.5674,child1Url=['../../tiles/5/newport14-28.x3d'],child2Url=['../../tiles/5/newport14-29.x3d'],child3Url=['../../tiles/5/newport15-28.x3d'],child4Url=['../../tiles/5/newport15-29.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport7-14.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.45215981325196,-71.17563093358456,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,3,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,8,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,7,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,3,8,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,6,5,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,7,5,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,8,8,5,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,7,8,0,4,0,0,0,0,1,2,2,5,1,1,0,0,0,0,0,0,0,5,6,3,0,0,0,0,0,0,4,7,6,6,8,5,0,0,0,0,0,0,0,4,4,3,6,4,0,0,5,8,7,10,11,8,8,1,2,4,1,0,0,0,0,4,4,4,7,2,1,9,12,8,12,14,14,11,5,2,9,13,8,0,0,0,0,4,5,4,4,3,8,13,10,11,17,19,13,7,8,10,16,13,0,0,0,0,0,4,5,5,5,5,9,11,11,17,22,19,12,14,14,19,16,10,0,0,0,0,0,4,6,5,5,5,9,10,11,18,22,18,13,14,15,19,15,10,0,0,0,0,0],
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
