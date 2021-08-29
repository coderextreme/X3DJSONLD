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
    GeoViewpoint(description='GeoViewpoint_3_01',position=(36.498489565924736,-76.67182291129942,7931.87519206549),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(36.21958330917119,-76.51374999080511,0))),
    GeoLOD(center=(36.498489565924736,-76.67182291129942,0.0),range=9518.25,child1Url=['../../tiles/4/HamptonRoadsVA0-2.x3d'],child2Url=['../../tiles/4/HamptonRoadsVA0-3.x3d'],child3Url=['../../tiles/4/HamptonRoadsVA1-2.x3d'],child4Url=['../../tiles/4/HamptonRoadsVA1-3.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/HamptonRoadsVA0-1.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.458645814959944,-76.70343749539828,0.0),normalPerVertex=False,xDimension=26,xSpacing=0.0025291666,zDimension=25,zSpacing=0.0033203126,height=[26,22,24,25,22,20,22,30,27,27,28,14,17,29,30,32,18,13,17,21,26,18,12,14,16,19,22,23,23,22,20,22,26,26,16,33,29,15,19,20,20,29,35,23,16,14,15,17,21,26,17,27,27,28,25,30,28,31,23,22,22,23,20,21,15,20,20,21,31,21,19,18,21,22,21,19,22,15,32,30,27,34,35,33,34,28,25,32,23,31,24,21,21,24,23,21,19,21,24,25,26,26,23,24,26,30,30,36,38,36,32,29,34,38,35,25,28,19,23,15,19,22,27,22,18,18,25,22,18,24,37,35,34,34,35,36,29,32,29,29,33,22,23,28,26,25,28,22,22,21,21,24,25,26,29,39,36,35,36,36,35,33,34,31,40,38,33,38,34,29,29,24,25,21,22,21,23,25,25,33,26,19,37,33,37,35,32,32,34,38,33,38,33,40,35,32,32,23,24,35,26,25,24,20,27,24,22,22,36,31,29,24,25,30,29,34,32,32,35,32,32,36,31,26,32,20,39,18,23,32,35,32,28,29,29,26,30,29,27,24,24,25,32,32,30,36,30,33,34,20,20,31,30,32,28,31,29,30,35,39,25,22,24,24,28,28,24,31,30,25,19,23,34,22,33,36,32,27,31,34,36,31,37,35,28,30,23,23,18,30,24,24,26,26,21,24,23,23,22,17,26,26,26,38,32,37,37,38,35,34,32,21,23,23,23,33,22,23,24,35,27,25,21,26,18,25,35,37,36,36,35,39,34,41,27,32,30,21,26,18,23,28,28,23,25,33,28,30,29,24,22,24,24,36,34,41,39,35,37,34,29,26,29,32,26,28,19,25,15,23,27,31,20,21,22,22,25,25,25,28,25,35,34,33,29,32,32,32,33,27,35,25,26,23,31,15,22,23,25,23,26,22,29,20,26,29,28,27,31,29,32,31,32,29,31,30,28,18,20,10,21,19,17,17,22,27,28,25,34,18,25,24,27,24,30,22,28,27,24,35,19,25,17,18,15,16,17,28,29,35,27,27,27,26,23,23,26,25,33,27,22,35,23,24,28,21,16,17,21,28,29,22,30,33,26,33,36,25,29,26,35,23,31,25,32,33,26,30,34,30,25,20,24,21,19,24,20,19,29,30,41,36,35,34,37,26,24,24,26,28,27,24,30,33,35,33,31,22,23,21,23,18,18,25,26,26,39,37,36,30,39,38,27,31,35,37,26,24,23,31,37,22,19,26,25,20,20,18,22,28,20,26,27,28,32,34,35,24,40,37,35,35,32,32,26,30,38,24,32,28,25,24,16,19,20,19,20,18,27,31,24,28,21,26,37,34,36,32,33,38,33,31,34,34,36,27,27,25,35,13,16,19,21,16,25,25,19,38,34,32,30,33,29,32,28,24,26,26,31,32,32,35,32,24,30,18,14,22,19,26,28,22,22,38,28,31,31,37,26,29,28,22,21,25,27,26,35,31,37,21],
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
