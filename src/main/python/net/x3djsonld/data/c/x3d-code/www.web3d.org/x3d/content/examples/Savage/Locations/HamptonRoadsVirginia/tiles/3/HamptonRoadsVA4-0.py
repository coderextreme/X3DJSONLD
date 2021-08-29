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
    GeoViewpoint(description='GeoViewpoint_3_40',position=(36.1797395582064,-76.73505207949714,7931.87519206549),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(36.21958330917119,-76.51374999080511,0))),
    GeoLOD(center=(36.1797395582064,-76.73505207949714,0.0),range=9518.25,child1Url=['../../tiles/4/HamptonRoadsVA8-0.x3d'],child2Url=['../../tiles/4/HamptonRoadsVA8-1.x3d'],child3Url=['../../tiles/4/HamptonRoadsVA9-0.x3d'],child4Url=['../../tiles/4/HamptonRoadsVA9-1.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/HamptonRoadsVA4-0.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.13989580724161,-76.766666663596,0.0),normalPerVertex=False,xDimension=26,xSpacing=0.0025291666,zDimension=25,zSpacing=0.0033203126,height=[33,36,37,25,24,21,27,23,31,37,36,38,35,30,25,33,31,34,34,31,30,38,35,39,31,35,20,19,39,32,31,37,34,39,46,38,38,36,39,41,38,40,35,37,38,33,40,35,32,40,37,32,23,21,21,35,35,29,22,26,36,36,39,29,26,35,31,36,41,36,41,38,35,40,36,34,36,32,33,34,25,30,36,36,33,33,26,40,31,33,30,36,35,41,39,32,33,31,36,33,39,32,36,34,33,30,30,27,25,28,32,24,26,27,36,31,27,24,37,21,38,35,34,29,34,37,33,34,40,37,37,28,33,25,29,29,28,32,44,27,26,27,24,39,23,28,35,35,33,34,34,29,31,30,33,34,24,24,28,22,23,21,23,32,28,31,31,25,24,35,28,32,29,35,34,29,27,24,34,34,35,41,17,20,20,33,19,25,36,20,25,34,32,27,34,38,34,27,26,30,37,29,21,22,19,25,25,36,20,30,32,20,29,31,31,31,23,31,25,24,24,30,29,33,19,30,30,27,24,24,24,24,23,22,30,36,24,22,28,34,27,24,38,30,32,24,24,34,24,30,35,34,31,33,31,31,30,31,33,35,42,22,34,31,26,29,36,30,25,30,24,23,20,28,38,40,32,33,29,35,38,31,29,26,20,21,27,25,28,27,30,39,28,33,27,21,35,26,30,37,38,41,35,40,39,32,22,20,23,19,25,32,17,28,31,26,25,21,29,25,31,33,28,33,36,34,38,34,40,30,28,23,25,23,20,24,25,20,39,29,27,24,31,33,30,30,24,26,30,44,35,36,26,32,36,24,23,33,34,32,27,23,25,27,31,21,24,23,34,26,20,22,26,26,27,39,33,41,38,34,32,30,26,30,23,19,28,30,30,31,24,20,22,24,36,34,34,28,26,26,28,23,32,36,29,32,31,34,35,26,22,30,29,27,40,35,22,26,26,24,23,31,30,30,30,31,32,30,33,36,31,34,25,30,27,27,25,23,36,26,29,28,26,28,35,28,28,31,32,34,30,34,36,31,32,28,33,29,31,41,37,34,36,28,28,39,25,14,29,23,27,22,28,29,19,26,21,29,31,38,40,25,35,30,26,31,26,25,33,33,24,25,18,28,18,27,23,26,24,22,23,21,29,31,39,31,33,31,28,42,34,33,23,23,26,35,29,30,23,22,37,26,27,25,25,33,25,28,32,30,41,40,36,31,37,44,43,29,24,27,28,26,21,21,28,24,29,23,28,25,33,24,28,22,25,29,33,30,29,32,38,34,39,42,25,23,25,25,27,25,30,23,18,31,24,17,33,32,38,26,27,27,29,29,33,38,38,31,32,22,30,23,22,20,28,27,22,23,31,30,22,25,24,34,41,26,34,32,32,31,30,28,27,29,29,25,25,26,21,31,32,26,30,23,32,27,24,30,22,32,39,42,35,29,33,30,27,27,26,25,26,24,24,23,27,26,35,29,31,29],
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
