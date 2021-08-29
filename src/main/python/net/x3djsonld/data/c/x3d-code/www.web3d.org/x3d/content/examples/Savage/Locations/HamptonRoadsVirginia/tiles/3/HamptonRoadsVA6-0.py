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
    GeoViewpoint(description='GeoViewpoint_3_60',position=(36.02036455434723,-76.73505207949714,7931.87519206549),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(36.21958330917119,-76.51374999080511,0))),
    GeoLOD(center=(36.02036455434723,-76.73505207949714,0.0),range=9518.25,child1Url=['../../tiles/4/HamptonRoadsVA12-0.x3d'],child2Url=['../../tiles/4/HamptonRoadsVA12-1.x3d'],child3Url=['../../tiles/4/HamptonRoadsVA13-0.x3d'],child4Url=['../../tiles/4/HamptonRoadsVA13-1.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/HamptonRoadsVA6-0.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(35.98052080338244,-76.766666663596,0.0),normalPerVertex=False,xDimension=26,xSpacing=0.0025291666,zDimension=25,zSpacing=0.0033203126,height=[26,35,31,32,20,26,26,24,24,23,21,27,19,20,26,29,26,24,26,35,34,41,29,30,34,27,29,37,37,26,25,26,24,23,26,26,25,28,29,28,18,20,24,23,24,26,34,31,25,26,26,26,29,30,31,29,25,36,39,29,27,43,34,25,25,29,34,22,20,26,20,27,28,32,33,31,27,26,27,29,30,36,31,29,30,26,26,29,25,27,25,24,27,22,23,18,30,24,25,22,30,33,27,25,24,24,28,30,36,37,26,26,25,31,39,32,24,24,24,23,23,15,24,22,26,26,29,32,29,25,31,24,26,28,32,31,33,35,39,36,39,34,34,26,22,21,22,21,21,25,25,23,34,33,28,26,24,30,24,28,32,36,34,34,32,34,32,39,39,24,25,29,23,24,24,25,38,32,34,33,28,38,30,28,26,26,24,28,39,38,35,36,28,25,23,29,19,25,21,19,24,40,39,37,26,26,27,29,32,29,27,26,28,26,30,30,34,29,26,23,23,26,24,22,25,28,25,25,27,27,25,26,25,29,32,31,31,30,29,30,28,32,32,33,29,24,25,25,24,22,20,29,24,26,30,24,25,30,28,30,29,31,34,33,33,30,33,31,32,33,24,28,30,24,25,21,30,28,36,31,32,34,31,23,27,28,26,25,33,31,36,34,31,33,33,35,30,26,28,27,26,24,25,28,31,33,30,31,34,32,25,27,23,26,31,30,34,32,32,30,33,31,29,31,26,24,28,24,26,32,26,27,32,34,36,36,33,32,35,34,23,35,34,32,33,33,32,33,29,28,24,31,35,25,34,37,30,28,29,31,32,35,35,30,38,27,30,32,32,32,29,29,36,37,34,36,28,26,27,29,27,26,32,31,29,31,29,33,36,29,30,23,31,37,33,32,28,28,35,35,34,24,26,22,24,26,26,29,34,31,32,25,28,31,20,15,26,27,34,34,34,34,29,29,29,28,29,32,28,31,28,27,26,38,33,25,22,19,20,17,15,20,34,31,34,31,33,33,37,32,28,30,32,31,28,28,26,28,36,35,27,24,25,24,17,25,20,23,31,39,33,32,33,29,33,29,28,31,35,31,31,30,29,35,33,34,30,25,20,24,18,19,26,24,31,37,33,31,31,36,34,31,28,31,37,31,29,33,28,26,28,28,27,19,16,20,18,16,14,13,33,34,34,34,32,34,32,34,34,34,33,32,29,29,24,20,20,23,19,15,19,15,17,12,16,9,38,32,34,34,37,35,33,34,35,32,34,29,27,23,20,21,18,16,20,27,19,15,15,12,17,16,36,40,37,40,35,41,32,37,34,29,29,34,38,29,29,26,23,18,22,11,16,15,19,12,16,20,35,35,35,38,39,34,32,32,36,31,34,33,34,27,24,21,17,23,18,18,8,10,11,21,20,20,34,37,38,35,36,35,34,32,37,32,32,35,31,29,24,19,18,21,19,20,11,12,14,18,22,22],
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
