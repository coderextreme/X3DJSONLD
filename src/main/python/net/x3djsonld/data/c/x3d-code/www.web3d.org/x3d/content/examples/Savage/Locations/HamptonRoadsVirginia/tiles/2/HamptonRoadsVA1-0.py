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

newModel=X3D(profile='Immersive',version='3.2',
  head=head(
    children=[
    component(name='Geospatial',level=1)]),
  Scene=Scene(
    children=[
    GeoViewpoint(description='GeoViewpoint_2_10',position=(36.299270811100776,-76.70343749539828,15863.75038413098),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(36.21958330917119,-76.51374999080511,0))),
    GeoLOD(center=(36.299270811100776,-76.70343749539828,0.0),range=19036.5,child1Url=['../../tiles/3/HamptonRoadsVA2-0.x3d'],child2Url=['../../tiles/3/HamptonRoadsVA2-1.x3d'],child3Url=['../../tiles/3/HamptonRoadsVA3-0.x3d'],child4Url=['../../tiles/3/HamptonRoadsVA3-1.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/2/HamptonRoadsVA1-0.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.21958330917119,-76.766666663596,0.0),normalPerVertex=False,xDimension=23,xSpacing=0.005748106,zDimension=23,zSpacing=0.0072443183,height=[35,31,33,35,39,37,21,27,23,29,21,29,23,22,38,30,18,31,29,26,35,26,24,35,33,34,38,37,38,29,26,22,25,29,34,31,28,22,35,20,20,15,28,25,26,23,43,36,30,37,30,27,29,34,44,20,30,30,36,33,20,23,35,27,23,21,16,28,17,32,29,34,35,32,37,26,37,23,34,28,39,32,22,23,30,29,21,22,23,17,18,29,30,25,30,32,33,31,30,30,33,33,24,36,22,21,25,28,37,35,27,21,33,27,22,29,37,37,25,31,29,32,23,20,24,25,31,26,27,30,23,33,34,28,26,21,16,33,32,29,31,38,29,35,31,24,28,20,27,21,28,29,27,16,31,16,22,24,21,21,17,35,36,26,22,25,30,25,29,31,24,24,24,21,19,18,24,18,15,20,21,29,20,28,43,27,23,35,32,25,25,25,35,22,24,29,17,38,18,21,22,21,16,21,14,16,23,37,24,23,13,19,30,35,34,28,22,35,21,26,22,28,32,26,28,19,21,25,29,21,39,25,32,37,20,28,33,38,41,29,35,43,24,20,25,29,22,30,22,23,16,18,17,36,33,40,40,28,27,27,27,44,40,32,26,25,26,26,25,20,32,25,32,31,17,33,38,36,39,40,43,32,28,31,31,33,36,20,24,16,16,27,27,23,25,21,24,25,35,31,35,32,25,26,25,34,32,25,29,43,37,34,32,33,20,25,22,27,33,26,24,28,33,38,34,30,27,23,33,30,33,30,37,32,20,18,26,23,36,19,21,29,31,23,29,37,34,25,28,29,29,29,27,25,21,13,19,29,23,29,23,21,18,24,11,33,9,20,25,38,44,30,30,37,25,23,36,27,28,26,24,25,24,22,26,18,22,24,32,16,33,25,43,42,36,28,28,35,30,33,26,22,25,23,25,26,34,33,27,22,35,38,33,22,21,38,44,32,37,30,34,22,22,33,30,28,30,28,21,27,22,19,19,28,27,22,25,26,37,23,23,31,24,22,23,21,25,28,28,35,23,26,34,29,25,29,26,33,25,23,40,35,26,38,36,35,23,34,32,36,39,32,34,23,25,38,33,30,31,27,20,9,9,23,26,28,37,47,40,32,37,38,38,29,32,22,36,35,29,31,32,24,17,26,27,22,23,30,27,26,36,29,31,38,40,40,35,36,24,28,33,24,24,22,37,20,17,27,27],
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
