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
    GeoLOD(center=(41.71825065109993,-71.37349911997524,0.0),range=6150.5674,child1Url=['../../tiles/5/newport24-18.x3d'],child2Url=['../../tiles/5/newport24-19.x3d'],child3Url=['../../tiles/5/newport25-18.x3d'],child4Url=['../../tiles/5/newport25-19.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport12-9.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.69406057493193,-71.39548447401864,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[0,0,0,7,18,24,28,35,31,25,20,6,2,0,0,0,0,0,0,0,0,0,0,0,0,9,20,22,23,32,36,32,19,3,2,0,0,0,0,0,0,0,0,0,0,0,0,2,13,16,25,32,40,38,22,10,2,0,0,0,0,0,0,0,0,0,4,2,0,0,3,13,20,36,47,41,35,23,2,0,0,0,0,0,0,0,0,0,5,4,0,0,5,13,18,37,47,38,30,18,6,0,0,0,0,0,0,0,0,0,8,2,0,1,8,19,21,39,42,32,21,15,11,5,15,0,0,0,0,0,0,0,7,4,0,0,5,12,20,34,37,26,24,20,17,14,7,1,0,0,0,0,0,0,7,0,2,0,0,2,12,26,27,22,19,18,26,20,3,0,0,0,0,0,0,0,2,2,0,0,0,0,5,10,13,17,15,18,22,20,7,0,0,0,0,0,0,0,9,8,7,6,4,2,0,0,11,14,13,17,20,15,6,0,0,0,0,0,0,0,13,13,10,11,10,7,8,11,17,18,20,20,20,14,5,0,0,0,0,0,0,0,11,11,9,9,8,10,10,10,14,20,20,23,21,16,8,0,0,0,0,0,0,0,13,11,9,10,8,9,10,8,14,21,21,19,16,14,3,0,0,0,0,0,0,0,12,12,12,10,10,11,11,6,8,12,21,20,14,7,3,0,0,0,0,0,0,0,14,13,14,12,11,7,8,8,7,6,12,13,10,6,1,0,0,0,0,0,0,0,11,10,10,7,3,4,8,8,6,2,2,2,1,5,0,0,0,0,0,0,0,0,9,9,6,9,9,9,11,10,8,7,8,5,4,1,3,1,1,0,0,0,0,0,14,12,14,16,15,15,13,11,12,11,7,9,6,4,1,0,0,0,0,0,0,0,14,13,14,13,13,10,11,10,10,8,6,3,1,0,0,0,0,0,0,0,0,0,13,12,12,10,11,10,10,11,10,3,0,0,1,0,0,0,0,0,0,0,0,0,10,11,11,13,13,14,15,14,5,0,0,0,0,0,0,0,0,0,0,0,0,0,11,11,12,13,14,15,14,14,3,0,0,0,0,0,0,0,0,0,0,0,0,0],
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
