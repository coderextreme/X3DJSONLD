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
    GeoViewpoint(description='GeoViewpoint_3_70',position=(35.94067705241765,-76.73505207949714,7931.87519206549),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(36.21958330917119,-76.51374999080511,0))),
    GeoLOD(center=(35.94067705241765,-76.73505207949714,0.0),range=9518.25,child1Url=['../../tiles/4/HamptonRoadsVA14-0.x3d'],child2Url=['../../tiles/4/HamptonRoadsVA14-1.x3d'],child3Url=['../../tiles/4/HamptonRoadsVA15-0.x3d'],child4Url=['../../tiles/4/HamptonRoadsVA15-1.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/HamptonRoadsVA7-0.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(35.900833301452856,-76.766666663596,0.0),normalPerVertex=False,xDimension=26,xSpacing=0.0025291666,zDimension=25,zSpacing=0.0033203126,height=[34,37,38,35,36,35,34,32,37,32,32,35,31,29,24,19,18,21,19,20,11,12,14,18,22,22,39,36,32,30,34,36,36,32,30,34,26,29,25,22,20,17,23,32,19,23,21,22,25,31,23,21,36,38,34,33,34,35,35,35,36,36,31,31,30,33,22,19,26,25,29,28,24,16,22,17,20,14,35,38,38,28,27,31,30,37,37,32,31,35,32,30,28,28,34,33,26,20,20,30,15,11,19,29,30,39,40,38,30,34,34,33,28,29,28,27,33,34,34,35,28,32,29,21,16,28,23,31,30,31,35,35,32,27,34,33,22,36,33,33,28,29,33,32,28,26,24,30,37,32,23,25,31,26,22,20,29,31,22,26,27,39,26,34,27,24,26,23,29,26,25,27,32,29,25,23,30,33,29,30,29,24,30,28,29,33,28,23,31,27,22,21,20,22,22,23,28,29,24,26,25,24,29,34,27,31,27,24,34,32,27,28,29,29,25,19,16,18,21,18,19,20,22,22,23,22,22,21,17,20,19,22,24,33,28,36,34,28,28,19,20,17,16,18,22,24,20,22,21,23,19,21,16,17,18,18,20,21,22,19,31,29,33,26,25,18,25,26,19,19,17,19,16,21,22,22,20,23,26,17,16,18,22,27,23,23,25,29,32,28,28,20,21,18,21,16,18,7,16,17,19,22,26,21,18,19,20,18,15,27,18,19,19,27,28,29,28,24,21,21,24,20,21,26,8,20,20,21,20,18,20,18,17,13,19,26,17,19,25,18,20,20,20,23,23,20,25,22,26,19,25,4,18,21,17,16,15,19,20,9,22,22,22,21,17,22,23,20,17,17,17,24,25,21,30,30,34,26,10,16,8,11,13,12,4,22,21,6,23,22,31,20,22,18,19,19,19,29,27,31,33,22,17,16,25,23,19,21,17,7,25,24,-1,0,4,20,13,22,9,22,17,18,16,10,4,10,25,28,20,18,17,14,19,19,26,14,37,20,17,19,-2,13,21,26,26,23,21,21,24,15,24,23,9,7,27,19,26,35,21,18,19,21,18,9,13,3,1,10,26,22,21,22,26,27,22,28,27,34,26,22,3,21,16,24,17,20,11,15,12,14,21,3,10,12,25,25,25,26,25,23,25,23,32,35,29,24,24,3,25,15,12,16,20,19,19,14,9,2,1,2,22,23,23,28,26,31,25,22,23,22,9,0,0,0,0,0,0,0,0,0,4,1,16,15,8,19,22,21,31,21,13,14,19,23,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,13,13,14,23,19,19,19,19,19,20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,19,16,16,30,20,28,30,22,20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,14,22,29,17,32,31,22,14,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,20],
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
