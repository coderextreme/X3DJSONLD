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
    GeoViewpoint(description='GeoViewpoint_3_00',position=(36.498489565924736,-76.73505207949714,7931.87519206549),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(36.21958330917119,-76.51374999080511,0))),
    GeoLOD(center=(36.498489565924736,-76.73505207949714,0.0),range=9518.25,child1Url=['../../tiles/4/HamptonRoadsVA0-0.x3d'],child2Url=['../../tiles/4/HamptonRoadsVA0-1.x3d'],child3Url=['../../tiles/4/HamptonRoadsVA1-0.x3d'],child4Url=['../../tiles/4/HamptonRoadsVA1-1.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/HamptonRoadsVA0-0.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.458645814959944,-76.766666663596,0.0),normalPerVertex=False,xDimension=26,xSpacing=0.0025291666,zDimension=25,zSpacing=0.0033203126,height=[20,24,30,29,34,29,18,13,32,34,19,35,29,33,35,18,22,31,38,36,28,26,28,23,26,26,24,23,19,21,20,19,27,17,29,29,32,23,29,33,34,25,24,25,26,30,24,36,37,27,25,22,21,21,28,25,24,18,23,23,22,36,30,31,26,26,24,23,32,36,34,42,38,35,31,39,25,27,20,22,14,14,18,21,24,35,23,19,25,28,20,21,25,30,33,34,34,27,39,35,33,35,25,32,14,14,23,27,21,22,29,31,30,30,30,24,20,25,24,29,27,28,27,31,38,29,28,28,33,26,21,23,18,22,22,18,24,25,26,33,31,25,22,19,21,22,30,27,23,32,30,30,28,24,29,37,21,21,25,18,22,25,24,22,26,33,30,25,23,23,20,25,34,37,29,30,30,26,25,27,36,36,20,19,24,22,24,28,28,20,26,20,28,29,21,27,27,26,29,18,36,33,22,25,28,40,36,37,22,9,30,15,23,16,19,20,15,15,16,15,18,14,15,22,27,26,25,27,33,34,37,40,36,36,22,14,20,18,23,17,19,19,19,15,13,17,22,18,22,19,27,22,30,24,27,39,34,38,37,29,15,11,17,18,21,22,13,18,17,19,22,22,34,22,26,22,17,27,27,26,21,20,27,37,25,25,18,8,19,6,16,20,22,14,16,28,21,22,40,25,16,26,28,25,24,34,28,23,24,26,25,23,19,18,19,9,12,18,22,17,19,19,35,19,31,31,31,30,30,26,29,31,23,27,27,25,23,23,29,21,21,26,15,9,20,22,20,24,22,20,29,28,20,33,22,27,34,32,23,25,23,18,23,26,21,21,19,20,14,9,12,14,15,14,16,20,27,29,31,29,29,32,32,30,28,18,21,22,25,26,41,24,20,20,30,23,26,21,19,19,26,27,22,25,24,24,24,19,23,25,25,20,24,0,24,35,23,25,26,22,18,25,27,22,18,14,13,19,18,26,15,18,20,27,31,30,28,28,18,23,21,28,31,32,28,25,18,19,22,23,23,19,16,20,21,24,25,12,17,20,27,28,28,22,19,24,17,17,35,28,35,37,32,17,20,15,15,26,20,24,19,18,20,27,24,14,18,24,18,23,17,19,21,21,35,43,38,23,21,20,19,18,24,19,24,17,24,21,19,13,21,21,20,23,21,16,13,26,23,19,33,33,33,39,30,26,17,18,17,15,20,25,23,15,13,22,22,25,25,24,16,20,14,15,16,23,26,30,35,36,33,26,22,18,18,18,22,21,17,19,21,19,37,26,23,13,10,12,19,17,18,20,24,27,25,20,26,25,28,32,33,35,23,25,29,24,27,26,25,23,29,20,13,22,23,20,17,16,24,34,34,30,24,32,23,27,24,19,14,21,24,21,20,21,25,29,28,33,13,15,19,27,28,35,24,36,35,34,29,23,25,21,22,17,17,11,19,27,19,24,28,25,28,19,23,15,18,26,28,30],
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
