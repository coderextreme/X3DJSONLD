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
    GeoViewpoint(description='GeoViewpoint_2_20',position=(36.13989580724161,-76.70343749539828,15863.75038413098),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(36.21958330917119,-76.51374999080511,0))),
    GeoLOD(center=(36.13989580724161,-76.70343749539828,0.0),range=19036.5,child1Url=['../../tiles/3/HamptonRoadsVA4-0.x3d'],child2Url=['../../tiles/3/HamptonRoadsVA4-1.x3d'],child3Url=['../../tiles/3/HamptonRoadsVA5-0.x3d'],child4Url=['../../tiles/3/HamptonRoadsVA5-1.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/2/HamptonRoadsVA2-0.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.060208305312024,-76.766666663596,0.0),normalPerVertex=False,xDimension=23,xSpacing=0.005748106,zDimension=23,zSpacing=0.0072443183,height=[23,30,27,26,36,29,31,38,40,40,35,36,24,28,33,24,24,22,37,20,17,27,27,32,31,27,25,29,21,39,35,32,34,32,33,33,36,24,26,32,24,22,16,26,26,27,16,28,20,37,29,33,30,30,32,25,23,24,22,40,27,18,21,15,24,24,15,20,19,26,41,23,29,22,32,23,36,31,29,32,33,15,24,26,31,17,15,17,19,17,29,24,27,27,33,33,33,23,38,39,33,20,23,22,23,31,20,28,26,26,21,33,24,24,30,36,24,31,34,32,34,32,33,37,27,25,31,21,22,21,25,29,26,26,32,36,26,23,26,37,37,26,33,33,27,31,35,28,26,30,15,17,23,27,24,26,28,27,24,32,25,27,27,26,27,33,41,32,28,25,29,17,29,24,25,24,21,33,34,24,30,26,24,27,37,28,31,28,31,40,37,33,30,26,23,21,24,28,26,18,24,19,17,20,21,25,17,25,23,32,35,31,41,31,31,20,22,29,25,26,27,27,24,25,32,19,6,21,11,12,26,28,33,39,41,30,27,26,26,32,24,28,30,35,31,26,18,17,15,18,18,24,28,25,27,39,41,40,32,35,26,29,24,21,31,32,25,24,24,22,19,19,24,23,14,24,33,43,26,33,34,25,25,27,26,24,32,28,31,24,19,18,22,26,26,35,22,20,28,28,25,31,21,26,25,29,29,31,30,31,27,18,21,25,24,23,24,25,26,22,24,19,27,19,33,24,24,25,28,28,32,34,38,24,26,26,25,26,31,26,30,31,26,31,19,20,21,25,25,22,24,25,21,22,27,35,34,37,27,30,17,26,28,29,36,26,16,11,21,23,32,32,25,24,23,33,28,30,27,25,25,37,30,19,27,12,22,22,19,13,8,14,23,26,23,24,24,27,23,19,30,27,23,31,37,24,28,24,19,19,13,24,11,8,23,21,27,25,25,31,25,27,27,34,36,32,35,22,24,21,24,21,16,3,15,3,4,27,25,22,33,20,24,25,28,29,29,28,24,25,23,17,20,25,20,18,16,6,10,13,23,26,23,25,23,36,16,25,25,33,25,25,31,24,24,26,18,12,10,10,22,17,15,31,34,31,24,35,35,27,29,25,24,33,26,28,29,29,28,19,25,6,6,24,17,14,27,29,30,26,27,30,27,24,25,22,31,25,27,29,24,23,17,15,14,11,24,18,15],
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
