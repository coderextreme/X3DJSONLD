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
    GeoViewpoint(description='GeoViewpoint_3_12',position=(36.41880206399515,-76.6085937431017,7931.87519206549),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(36.21958330917119,-76.51374999080511,0))),
    GeoLOD(center=(36.41880206399515,-76.6085937431017,0.0),range=9518.25,child1Url=['../../tiles/4/HamptonRoadsVA2-4.x3d'],child2Url=['../../tiles/4/HamptonRoadsVA2-5.x3d'],child3Url=['../../tiles/4/HamptonRoadsVA3-4.x3d'],child4Url=['../../tiles/4/HamptonRoadsVA3-5.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/HamptonRoadsVA1-2.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.37895831303036,-76.64020832720055,0.0),normalPerVertex=False,xDimension=26,xSpacing=0.0025291666,zDimension=25,zSpacing=0.0033203126,height=[21,25,28,22,26,24,16,17,16,25,26,23,18,20,27,19,17,22,21,33,21,27,17,22,25,17,21,21,24,25,28,23,26,22,17,20,23,28,15,18,22,20,22,18,16,23,19,22,13,14,19,22,35,30,20,26,25,34,34,25,24,20,21,20,28,23,20,20,25,11,26,14,17,17,16,18,18,20,21,22,34,25,22,31,33,16,20,17,21,27,30,30,26,25,16,23,28,24,13,12,14,15,17,20,21,25,30,21,23,26,14,11,21,32,29,33,24,37,18,15,18,19,27,26,25,16,28,21,20,16,14,32,19,16,19,21,20,25,23,33,36,34,16,17,22,23,20,20,16,23,24,18,29,22,9,13,10,23,15,26,23,19,14,29,20,24,22,24,26,21,31,28,22,17,24,31,16,25,23,17,20,24,25,24,20,19,22,25,16,16,22,13,16,18,27,25,32,32,40,16,18,22,29,23,17,20,19,18,10,26,14,19,21,20,19,21,23,21,30,26,27,23,27,27,35,24,24,18,20,32,23,34,25,28,24,22,21,22,22,25,32,21,26,27,25,21,20,27,36,32,34,18,20,20,21,19,22,24,24,22,20,30,33,30,30,23,25,21,18,24,35,23,26,30,24,22,22,27,21,21,20,23,27,25,27,26,21,22,30,20,23,22,22,21,21,19,22,23,32,34,41,24,19,24,20,22,22,19,28,28,28,21,24,20,20,21,25,26,19,19,22,24,25,23,36,33,23,21,21,20,19,17,20,29,20,23,20,29,26,20,16,32,25,29,22,17,31,25,26,25,24,23,22,24,23,19,32,22,20,24,26,27,23,20,24,18,30,18,26,25,23,25,28,30,25,25,31,35,30,39,25,22,22,26,23,25,21,24,29,23,25,21,25,23,26,23,23,22,23,24,23,29,32,25,32,23,17,24,21,25,20,25,23,27,30,28,21,25,25,34,28,26,24,22,24,24,30,25,28,22,19,24,25,23,26,24,15,22,18,17,24,21,24,22,24,26,29,25,32,24,24,33,31,24,29,34,24,21,29,29,23,26,21,18,20,18,26,31,23,25,24,31,25,20,18,32,26,40,19,27,30,21,17,22,20,27,25,22,21,30,24,28,19,25,28,28,23,28,34,34,36,34,22,23,19,24,23,22,21,21,25,17,25,28,30,29,28,20,19,22,28,27,22,29,28,34,38,24,15,28,21,31,24,21,31,19,22,18,23,21,30,28,24,22,20,19,21,23,23,20,31,30,29,36,20,27,28,32,27,25,22,22,24,28,15,19,21,25,28,25,24,19,25,26,25,27,27,23,27,30,38,27,24,31,29,25,27,28,27,26,26,22,21,20,26,16,19,18,22,28,25,25,30,30,29,26,26,25,23,27,20,24,27,23,25,26,26,33,29,33,21,30,24,18,23,29,24,23,29,23,32,29,21,33,24,28,23,23,22,31,17,21,31,30,30,25,22,28,18,23],
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
