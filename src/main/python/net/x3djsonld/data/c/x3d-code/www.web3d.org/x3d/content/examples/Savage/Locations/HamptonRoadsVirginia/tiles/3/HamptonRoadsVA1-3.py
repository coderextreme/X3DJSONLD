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
    GeoViewpoint(description='GeoViewpoint_3_13',position=(36.41880206399515,-76.54536457490397,7931.87519206549),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(36.21958330917119,-76.51374999080511,0))),
    GeoLOD(center=(36.41880206399515,-76.54536457490397,0.0),range=9518.25,child1Url=['../../tiles/4/HamptonRoadsVA2-6.x3d'],child2Url=['../../tiles/4/HamptonRoadsVA2-7.x3d'],child3Url=['../../tiles/4/HamptonRoadsVA3-6.x3d'],child4Url=['../../tiles/4/HamptonRoadsVA3-7.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/HamptonRoadsVA1-3.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.37895831303036,-76.57697915900283,0.0),normalPerVertex=False,xDimension=26,xSpacing=0.0025291666,zDimension=25,zSpacing=0.0033203126,height=[17,18,12,17,16,17,13,7,8,2,15,18,23,24,27,18,24,18,22,21,17,18,21,22,23,21,22,25,17,23,13,12,14,20,33,23,31,14,25,23,23,22,26,21,21,21,25,6,15,24,24,22,20,22,24,23,23,16,14,14,15,26,20,23,28,28,20,19,21,21,17,17,17,20,20,20,27,20,20,11,17,13,20,21,17,13,31,20,19,26,29,29,23,18,19,20,24,19,23,21,17,22,21,20,16,15,20,14,25,19,21,15,17,25,15,22,26,24,23,23,25,20,21,20,19,19,16,18,15,25,13,18,11,15,12,23,26,21,30,21,22,27,25,24,30,19,21,21,25,21,21,20,21,24,19,23,24,34,23,15,18,20,24,24,24,24,24,24,22,21,20,26,24,24,24,25,20,19,21,25,22,20,18,15,20,15,17,14,26,11,22,25,22,19,26,24,22,21,20,24,22,27,24,16,19,19,17,21,28,20,21,18,17,15,25,12,11,6,9,9,14,34,20,25,23,18,20,25,24,22,23,27,22,15,22,24,19,23,15,12,9,15,8,8,13,11,19,26,26,27,24,24,20,17,11,20,19,23,19,19,26,23,21,20,22,17,19,9,14,21,17,20,28,26,26,27,28,22,21,19,17,29,21,25,19,19,21,20,25,19,14,19,15,26,9,13,14,21,25,27,24,24,30,26,28,26,19,29,23,26,30,26,29,31,22,16,15,23,25,13,11,18,27,23,24,25,25,26,32,29,20,25,29,23,23,23,24,20,20,22,18,30,14,23,15,10,19,15,23,26,20,24,19,23,20,22,26,24,18,32,23,26,25,22,23,24,23,15,18,25,20,12,18,20,17,7,9,19,23,18,20,22,15,22,18,21,19,17,20,19,28,28,17,29,22,26,15,17,16,16,17,11,21,22,20,23,20,21,24,24,19,22,23,24,21,25,21,18,22,23,23,19,16,26,23,15,25,15,25,27,25,22,20,22,26,22,21,18,26,22,23,19,31,36,28,32,27,28,20,22,20,20,29,26,19,23,22,18,19,23,20,23,23,22,26,25,25,21,25,21,18,25,19,19,24,19,21,20,22,24,24,20,17,21,16,22,18,21,22,17,18,20,22,19,22,20,21,31,18,18,19,19,17,27,33,23,21,23,21,18,18,15,18,18,22,18,19,14,20,22,19,19,28,23,18,19,24,20,18,27,32,20,20,21,18,19,18,23,21,21,16,10,21,17,19,19,19,20,28,26,18,21,21,16,18,30,32,29,22,21,19,24,17,18,20,20,16,19,18,22,18,21,18,14,38,30,22,29,33,16,18,30,28,24,25,23,23,19,17,20,16,22,16,21,25,25,21,19,18,23,33,34,22,20,20,20,17,30,22,24,23,21,20,19,17,22,22,19,19,18,23,20,17,22,23,14,41,27,21,21,18,21,19,31,24,19,25,22,23,18,20,19,21,20,14,18,23,20,16,23],
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
