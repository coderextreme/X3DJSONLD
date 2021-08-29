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
    GeoLOD(center=(41.669870498763935,-71.24158699571478,0.0),range=6150.5674,child1Url=['../../tiles/5/newport22-24.x3d'],child2Url=['../../tiles/5/newport22-25.x3d'],child3Url=['../../tiles/5/newport23-24.x3d'],child4Url=['../../tiles/5/newport23-25.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport11-12.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.64568042259594,-71.26357234975819,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[0,0,0,1,15,28,28,23,13,4,2,5,2,1,1,1,1,1,1,1,1,1,0,0,0,0,6,18,24,19,11,2,1,3,5,1,1,1,1,1,1,4,1,1,0,0,0,0,0,5,11,16,10,2,1,1,1,2,2,2,4,1,1,1,1,1,0,0,0,0,0,0,1,6,6,2,1,1,3,2,3,3,3,3,1,1,3,4,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,4,5,4,2,2,4,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,5,6,7,6,5,8,22,25,2,0,0,0,0,1,1,1,1,1,1,1,1,1,1,2,3,3,5,29,42,34,24,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,3,8,32,39,35,29,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,4,27,29,27,20,9,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,3,3,18,24,19,15,7,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,16,21,20,13,9,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,8,16,15,16,10,3,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,4,12,15,19,15,8,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,4,15,21,19,15,6,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,5,15,26,25,20,11,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,8,16,22,24,23,16,16,10,4,1,1,4,14,3,1,1,1,1,1,1,1,1,13,16,24,28,31,22,22,16,11,4,3,20,28,2,1,1,1,1,1,1,1,1,22,24,28,36,48,34,21,24,15,10,11,44,43,11,1,1,1,1,1,1,1,1,30,30,31,39,47,36,28,27,20,19,17,43,44,17,1,1,1,1,1,1,1,1,32,37,40,51,46,42,34,27,19,15,19,32,29,14,1,1,1,1,1,1,1,1,34,38,42,53,46,42,33,28,19,15,19,31,29,14,1,1,1,1,1,1,1,1],
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
