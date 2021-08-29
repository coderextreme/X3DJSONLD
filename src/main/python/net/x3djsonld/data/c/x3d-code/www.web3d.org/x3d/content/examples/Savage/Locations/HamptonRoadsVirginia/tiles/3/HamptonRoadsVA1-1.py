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
    GeoViewpoint(description='GeoViewpoint_3_11',position=(36.41880206399515,-76.67182291129942,7931.87519206549),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(36.21958330917119,-76.51374999080511,0))),
    GeoLOD(center=(36.41880206399515,-76.67182291129942,0.0),range=9518.25,child1Url=['../../tiles/4/HamptonRoadsVA2-2.x3d'],child2Url=['../../tiles/4/HamptonRoadsVA2-3.x3d'],child3Url=['../../tiles/4/HamptonRoadsVA3-2.x3d'],child4Url=['../../tiles/4/HamptonRoadsVA3-3.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/HamptonRoadsVA1-1.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.37895831303036,-76.70343749539828,0.0),normalPerVertex=False,xDimension=26,xSpacing=0.0025291666,zDimension=25,zSpacing=0.0033203126,height=[30,18,14,22,19,26,28,22,22,38,28,31,31,37,26,29,28,22,21,25,27,26,35,31,37,21,10,31,21,30,25,25,21,29,29,38,29,36,22,20,28,23,16,30,22,25,27,26,32,34,31,21,35,31,25,33,29,29,31,34,30,27,31,38,34,21,25,27,27,42,32,31,39,36,31,29,31,35,31,37,41,34,29,31,29,30,31,25,28,24,19,23,23,25,16,20,25,22,24,26,21,23,33,21,28,29,25,33,36,28,28,30,29,29,33,33,30,22,27,25,25,32,30,26,30,18,21,22,32,21,29,32,27,32,31,33,28,24,20,20,27,28,31,25,28,30,23,21,20,16,16,30,30,29,22,14,29,28,39,32,22,27,30,30,28,20,37,28,29,15,28,32,30,21,29,31,30,22,36,25,30,10,40,32,30,26,31,31,28,33,33,33,16,21,23,21,25,20,27,30,32,27,22,28,20,17,19,25,21,21,21,27,27,31,33,23,23,22,21,23,24,21,24,26,32,28,20,19,25,22,18,20,15,10,21,19,34,21,29,20,23,20,24,22,17,30,24,28,21,21,24,23,26,27,21,37,24,16,26,24,23,22,23,32,37,30,32,33,30,31,33,27,33,36,32,34,33,20,20,25,23,22,25,16,28,20,22,26,33,34,35,38,32,31,32,27,28,32,29,26,37,33,32,34,21,26,19,29,16,19,23,21,26,26,35,34,36,35,40,32,25,28,26,37,36,34,41,39,36,32,28,25,24,21,21,21,17,24,29,36,21,27,25,33,32,30,23,17,22,20,30,21,20,32,37,30,31,26,25,27,24,26,24,26,30,22,22,22,35,37,31,27,25,25,28,22,26,24,18,23,33,30,30,33,17,26,24,25,22,24,25,38,32,30,35,36,32,33,26,25,22,23,30,24,28,29,19,33,21,29,31,29,28,22,23,25,30,34,26,37,36,32,34,34,29,30,24,29,25,17,27,22,24,24,37,30,26,20,22,26,24,21,31,38,37,35,34,33,37,35,37,27,28,17,23,24,29,26,25,21,32,31,33,24,29,21,21,24,39,34,36,34,33,41,39,38,41,33,33,34,34,31,31,26,35,27,24,25,30,23,22,26,24,23,42,31,32,32,35,37,33,27,30,27,23,32,24,24,31,22,23,24,31,30,31,23,28,27,25,28,35,29,31,30,31,30,25,30,28,21,26,25,23,34,22,30,17,28,22,26,36,30,28,27,32,28,19,33,32,30,35,31,22,35,39,35,30,22,28,27,25,22,24,28,26,29,21,28,23,24,33,21,32,32,30,26,28,29,24,24,35,29,44,25,20,25,19,24,26,16,23,22,29,31,30,31,28,25,23,23,31,34,29,29,29,31,36,35,26,21,19,23,25,27,16,20,22,23,32,34,25,23,27,22,16,24,32,40,25,22,29,29,34,21,19,26,19,25,27,19,19,23,21,20,27,31,30,31,32,23],
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
