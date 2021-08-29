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
    GeoLOD(center=(41.42796973708396,-71.68129407658296,0.0),range=6150.5674,child1Url=['../../tiles/5/newport12-4.x3d'],child2Url=['../../tiles/5/newport12-5.x3d'],child3Url=['../../tiles/5/newport13-4.x3d'],child4Url=['../../tiles/5/newport13-5.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport6-2.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.403779660915966,-71.70327943062637,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[16,20,21,28,22,18,20,24,34,31,33,37,36,30,22,17,22,24,16,16,16,18,24,34,36,34,21,23,37,35,42,42,33,35,30,24,19,20,19,16,16,19,22,18,23,37,42,41,33,35,37,46,46,48,39,37,30,20,16,16,16,16,17,17,19,19,41,44,48,48,40,44,42,51,58,53,41,37,28,19,16,17,16,16,16,17,21,25,53,54,55,58,52,52,58,55,49,47,39,41,34,26,18,16,17,16,16,17,24,27,47,54,57,61,62,56,57,53,54,41,32,24,27,19,16,16,16,16,16,16,25,32,54,62,68,67,64,61,47,46,40,34,27,17,16,16,16,16,16,16,17,29,32,37,48,61,61,62,56,49,39,30,16,16,16,16,16,16,16,16,16,16,16,31,45,45,43,38,44,53,47,50,42,39,19,16,16,16,16,16,16,16,16,16,16,26,35,38,35,29,31,33,36,43,48,44,22,16,16,16,16,16,16,16,16,16,16,21,31,36,41,35,25,26,35,43,44,40,28,16,16,16,16,16,16,16,16,16,20,18,25,30,54,38,26,29,33,34,30,17,16,16,16,16,16,16,16,16,16,16,21,18,26,30,53,37,24,24,26,21,16,13,14,17,16,16,16,16,16,16,16,16,19,26,22,20,45,32,23,16,15,14,12,14,17,16,15,17,19,18,16,16,17,18,21,23,22,20,35,24,14,13,13,16,16,12,15,15,13,16,20,20,27,23,20,18,21,23,21,20,21,15,16,14,15,15,16,17,17,20,19,19,18,20,39,46,34,27,20,22,20,20,18,19,17,16,16,16,16,15,19,20,21,19,20,19,31,42,45,36,28,22,24,24,22,21,21,20,16,18,15,15,16,21,21,24,25,24,26,41,48,45,42,42,34,32,20,22,22,21,22,20,16,16,17,17,21,23,24,24,22,39,55,47,42,52,44,40,20,24,23,20,22,22,16,19,17,16,25,22,24,22,25,33,49,54,51,52,51,49,25,24,24,25,22,25,16,20,21,18,22,18,30,35,25,29,40,48,35,48,58,52,25,24,24,25,22,25,16,20,21,18,21,18,30,36,25,29,39,46,35,47,55,50],
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
