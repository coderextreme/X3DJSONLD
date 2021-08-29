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
    GeoLOD(center=(41.71825065109993,-71.24158699571478,0.0),range=6150.5674,child1Url=['../../tiles/5/newport24-24.x3d'],child2Url=['../../tiles/5/newport24-25.x3d'],child3Url=['../../tiles/5/newport25-24.x3d'],child4Url=['../../tiles/5/newport25-25.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport12-12.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.69406057493193,-71.26357234975819,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[34,38,42,53,46,42,33,28,19,15,19,31,29,14,1,1,1,1,1,1,1,1,44,55,54,54,50,46,35,25,20,15,16,24,23,12,1,1,1,1,1,1,1,1,46,45,51,54,47,43,35,27,18,14,14,20,17,1,1,1,1,1,1,1,1,1,33,38,46,46,48,45,37,27,20,14,12,14,1,1,1,1,1,1,1,1,1,1,26,37,41,46,50,45,34,27,21,17,11,5,1,1,1,1,1,1,1,1,1,1,24,33,47,45,50,49,36,27,22,17,6,1,1,1,1,1,1,1,1,1,1,1,22,29,45,46,43,40,32,21,20,15,1,1,1,1,1,1,1,1,1,1,1,1,27,33,35,35,30,22,21,19,17,9,1,1,1,1,1,1,1,1,1,1,1,1,26,32,37,37,33,26,19,18,17,3,1,1,1,1,1,1,1,1,1,1,1,1,32,35,43,42,40,30,25,20,12,4,1,4,1,1,1,1,1,1,1,1,1,1,35,40,44,50,40,32,22,9,6,3,1,4,10,9,3,1,1,1,1,1,1,1,33,54,49,49,41,32,17,3,3,2,1,8,8,1,3,5,1,1,1,1,1,1,46,47,54,49,41,25,11,2,1,1,1,1,4,1,4,5,3,2,1,1,1,1,44,50,49,39,28,13,1,1,1,1,1,1,6,5,8,8,9,8,2,1,1,1,45,47,34,22,8,1,1,1,1,1,1,1,12,10,14,12,12,9,2,1,1,1,46,43,28,7,1,1,1,1,1,1,1,5,17,17,17,14,15,9,2,1,1,1,50,40,22,2,1,1,1,1,1,0,1,14,22,21,19,16,16,9,4,1,1,1,33,25,7,1,1,1,1,1,1,8,3,20,26,24,20,21,16,7,5,1,1,1,19,9,0,1,1,4,1,0,8,18,8,21,25,26,22,23,13,5,4,1,1,1,6,2,1,1,1,2,3,6,11,15,14,20,21,23,22,21,8,4,4,1,1,1,1,1,1,1,1,5,10,8,12,15,14,16,18,19,19,14,6,4,2,1,1,1,3,1,1,1,1,5,10,8,11,15,14,16,18,19,18,14,6,4,2,1,1,1],
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
