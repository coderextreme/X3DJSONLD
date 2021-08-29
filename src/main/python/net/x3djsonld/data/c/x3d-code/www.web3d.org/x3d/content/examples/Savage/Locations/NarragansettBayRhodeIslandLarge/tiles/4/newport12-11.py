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
    GeoLOD(center=(41.71825065109993,-71.2855577038016,0.0),range=6150.5674,child1Url=['../../tiles/5/newport24-22.x3d'],child2Url=['../../tiles/5/newport24-23.x3d'],child3Url=['../../tiles/5/newport25-22.x3d'],child4Url=['../../tiles/5/newport25-23.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport12-11.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.69406057493193,-71.30754305784501,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[0,0,0,5,10,1,1,0,4,2,0,0,0,0,0,5,1,6,16,27,32,34,0,0,0,13,5,1,1,1,9,4,0,0,0,2,7,6,2,5,19,38,43,44,0,0,0,0,0,5,7,8,9,11,7,0,6,5,13,8,0,5,19,35,44,46,0,0,0,0,0,0,1,4,5,8,6,5,3,18,15,6,6,7,20,28,32,33,0,0,0,0,0,0,0,0,6,9,7,8,21,22,18,9,11,16,18,24,25,26,0,0,0,0,0,0,0,0,4,8,14,22,28,26,18,17,18,17,19,19,22,24,0,0,0,0,0,0,0,0,6,19,22,26,30,30,20,19,21,27,24,24,21,22,0,0,0,0,0,0,0,0,10,26,34,35,31,29,24,20,26,32,29,21,27,27,0,0,0,0,0,0,0,0,9,24,33,31,36,32,27,30,35,38,32,26,25,26,0,0,0,0,0,0,0,0,6,18,31,29,31,35,33,39,44,45,38,33,30,32,0,0,0,0,0,0,0,0,1,16,29,38,39,42,40,38,44,42,39,39,33,35,0,0,0,0,0,0,0,0,0,13,24,34,42,48,44,40,36,33,37,39,36,33,0,0,0,0,0,0,0,0,0,2,10,19,35,43,36,28,28,27,31,38,43,46,0,0,2,3,1,0,0,0,0,3,5,12,27,34,29,21,21,30,32,38,44,44,0,0,7,5,4,0,0,0,0,4,6,10,20,21,22,20,21,28,37,38,43,45,0,8,10,9,9,0,0,0,0,3,1,10,15,14,17,19,25,27,34,40,45,46,0,4,10,10,4,0,0,0,0,0,0,1,9,19,22,23,24,30,35,39,49,50,0,0,13,13,3,0,0,0,0,0,0,0,6,15,19,19,23,27,34,34,36,33,0,0,10,14,8,0,0,4,0,0,0,0,6,12,14,15,16,21,19,23,22,19,0,4,8,12,8,0,3,3,0,0,0,0,4,14,13,14,14,11,14,12,8,6,10,5,12,14,9,3,2,6,3,0,0,4,5,9,8,11,12,9,10,6,2,1,10,7,12,14,9,5,3,6,3,0,0,4,6,7,11,10,12,9,9,4,3,3],
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
