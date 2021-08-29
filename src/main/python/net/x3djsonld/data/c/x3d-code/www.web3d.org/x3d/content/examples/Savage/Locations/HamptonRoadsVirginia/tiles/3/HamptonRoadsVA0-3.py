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
    GeoViewpoint(description='GeoViewpoint_3_03',position=(36.498489565924736,-76.54536457490397,7931.87519206549),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(36.21958330917119,-76.51374999080511,0))),
    GeoLOD(center=(36.498489565924736,-76.54536457490397,0.0),range=9518.25,child1Url=['../../tiles/4/HamptonRoadsVA0-6.x3d'],child2Url=['../../tiles/4/HamptonRoadsVA0-7.x3d'],child3Url=['../../tiles/4/HamptonRoadsVA1-6.x3d'],child4Url=['../../tiles/4/HamptonRoadsVA1-7.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/HamptonRoadsVA0-3.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.458645814959944,-76.57697915900283,0.0),normalPerVertex=False,xDimension=26,xSpacing=0.0025291666,zDimension=25,zSpacing=0.0033203126,height=[16,14,19,20,22,10,17,22,14,19,17,17,19,21,22,20,27,22,21,18,19,21,20,15,14,18,18,24,10,22,19,13,17,12,16,16,15,20,25,20,28,17,18,18,21,21,22,21,16,18,19,19,18,19,17,21,9,18,17,15,21,18,12,20,22,31,27,23,17,17,21,18,21,23,18,19,20,20,24,17,19,19,15,20,14,21,18,18,20,28,29,28,26,24,20,21,24,21,19,18,19,15,12,19,30,32,22,30,32,20,28,24,23,20,32,19,12,9,11,13,17,18,20,24,22,14,18,21,18,20,19,36,16,21,16,27,32,26,21,14,15,18,15,20,29,28,19,25,21,22,19,19,16,17,28,23,31,16,18,19,27,32,29,29,26,19,21,16,26,28,29,24,30,20,20,20,16,14,20,19,19,26,21,21,29,20,21,20,28,24,16,14,17,23,19,28,23,23,25,22,25,22,21,22,17,14,19,20,14,19,31,21,20,21,19,21,19,27,19,13,22,24,24,31,20,24,24,22,22,21,20,18,20,14,21,28,30,33,21,25,22,17,25,20,12,14,20,19,28,22,23,23,22,19,22,18,20,13,23,23,29,30,31,30,29,25,25,19,14,19,22,14,13,16,23,26,19,23,25,17,19,20,21,16,22,22,28,30,28,18,29,21,26,15,18,21,20,24,8,21,24,24,23,21,25,21,17,19,17,22,18,22,24,19,18,18,18,16,16,22,13,13,19,17,15,30,26,22,25,23,22,21,20,21,17,22,14,17,23,23,23,21,20,18,17,15,14,12,18,26,11,18,22,19,27,30,22,18,14,26,19,21,20,24,29,19,17,16,19,17,21,23,18,15,11,17,20,25,21,24,26,20,17,22,20,22,18,19,21,23,25,18,20,21,22,22,18,28,20,17,11,19,14,18,14,25,21,17,25,20,18,20,15,19,21,12,15,14,21,28,21,24,20,26,28,23,27,27,15,18,23,22,23,24,19,23,22,25,17,18,14,18,26,22,30,26,23,23,23,26,28,24,23,23,14,17,29,21,22,23,19,22,24,24,21,23,21,16,25,20,24,27,23,22,24,25,26,24,27,23,11,22,25,24,16,22,22,21,19,22,23,21,19,18,25,28,22,24,19,21,24,19,24,23,25,14,16,20,26,26,20,18,23,23,21,15,18,25,21,20,24,18,18,21,16,22,21,23,25,21,24,14,19,22,24,24,21,23,24,19,24,18,16,22,20,20,20,20,21,22,20,15,18,24,23,25,17,16,15,16,30,24,20,20,20,22,19,12,21,25,20,16,14,23,20,20,15,17,23,16,21,22,12,15,13,24,32,19,14,21,21,21,22,20,20,29,29,20,21,20,13,13,14,16,19,13,10,14,22,22,22,30,27,22,23,23,20,21,16,16,17,22,19,23,17,18,12,17,16,17,13,7,8,2,15,18,23,24,27,18,24,18,22,21,17,18,21,22,23,21],
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
